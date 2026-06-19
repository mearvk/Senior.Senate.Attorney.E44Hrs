package src;

import java.io.*;
import java.net.*;
import java.time.LocalDate;
import java.util.List;
import javax.net.ssl.HttpsURLConnection;

/**
 * PoliticalSupervisorModule - Scans well-known news sites for political values
 * and compiles a readable essay-style report.
 */
public class PoliticalSupervisorModule {

    public static String scan(List<String[]> sources, boolean useSSL, int port) {
        StringBuilder report = new StringBuilder();

        report.append("=============================================================\n");
        report.append("  POLITICAL SUPERVISOR REPORT\n");
        report.append("  Date: ").append(LocalDate.now()).append("\n");
        report.append("  Protocol: ").append(useSSL ? "HTTPS (TLS/RSA)" : "HTTP")
              .append(" | Port: ").append(port).append("\n");
        report.append("=============================================================\n\n");

        report.append("This report summarizes the latest political values and headlines\n");
        report.append("gathered from well-known news and political sources.\n\n");

        for (String[] source : sources) {
            String name = source[0];
            String url = source[1];

            report.append("-------------------------------------------------------------\n");
            report.append("  Source: ").append(name).append("\n");
            report.append("  URL: ").append(url).append("\n");
            report.append("-------------------------------------------------------------\n\n");

            String content = fetchHeadlines(url, useSSL, port);
            report.append(content).append("\n\n");
        }

        report.append("=============================================================\n");
        report.append("  END OF REPORT\n");
        report.append("=============================================================\n");

        return report.toString();
    }

    /**
     * Connects to a source URL via port 443 TLS (if useSSL is true)
     * and extracts title/headline text from the page.
     */
    private static String fetchHeadlines(String urlStr, boolean useSSL, int port) {
        try {
            URL url = new URL(urlStr);
            HttpsURLConnection conn = (HttpsURLConnection) url.openConnection();
            conn.setRequestMethod("GET");
            conn.setRequestProperty("User-Agent", "PoliticalSupervisor/1.0");
            conn.setConnectTimeout(10000);
            conn.setReadTimeout(10000);
            conn.connect();

            int code = conn.getResponseCode();
            if (code != 200) {
                return "  [Connection returned HTTP " + code + "]\n";
            }

            BufferedReader reader = new BufferedReader(new InputStreamReader(conn.getInputStream()));
            StringBuilder page = new StringBuilder();
            String line;
            while ((line = reader.readLine()) != null) {
                page.append(line);
            }
            reader.close();

            // Extract text between <title> tags and any <h1>-<h3> headlines
            String body = page.toString();
            StringBuilder headlines = new StringBuilder();

            String title = extractBetween(body, "<title>", "</title>");
            if (!title.isEmpty()) {
                headlines.append("  Page Title: ").append(title).append("\n\n");
            }

            // Simple headline extraction
            String[] tags = {"h1", "h2", "h3"};
            int count = 0;
            for (String tag : tags) {
                int idx = 0;
                while ((idx = body.indexOf("<" + tag, idx)) != -1 && count < 10) {
                    int start = body.indexOf(">", idx) + 1;
                    int end = body.indexOf("</" + tag + ">", start);
                    if (start > 0 && end > start) {
                        String text = body.substring(start, end).replaceAll("<[^>]+>", "").trim();
                        if (!text.isEmpty() && text.length() < 200) {
                            headlines.append("  • ").append(text).append("\n");
                            count++;
                        }
                    }
                    idx = (end > 0) ? end : idx + 1;
                }
            }

            if (headlines.length() == 0) {
                return "  [Page loaded but no headlines extracted]\n";
            }
            return headlines.toString();

        } catch (Exception e) {
            return "  [Error connecting: " + e.getMessage() + "]\n";
        }
    }

    private static String extractBetween(String body, String open, String close) {
        int s = body.indexOf(open);
        int e = body.indexOf(close, s + open.length());
        if (s >= 0 && e > s) return body.substring(s + open.length(), e).trim();
        return "";
    }
}
