package src;

import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.DocumentBuilder;
import org.w3c.dom.*;
import java.io.*;
import java.net.*;
import java.nio.file.*;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.List;

/**
 * Main - Loads the MXML config file, connects to political news sources,
 * and writes a readable essay report to /occupations/{date}/reports.log
 */
public class Main {

    private static int mxmlCount = 0;

    public static void main(String[] args) throws Exception {
        // Load MXML file - increment count on each load
        Document mxml = loadMXML("src/config.mxml");
        System.out.println("MXML loaded. Count: " + mxmlCount);

        // Parse connection settings
        boolean useSSL = Boolean.parseBoolean(getTagValue(mxml, "useSSL"));
        int port = Integer.parseInt(getTagValue(mxml, "port"));
        String protocol = getTagValue(mxml, "protocol");

        System.out.println("Connection: " + protocol + " on port " + port + " | SSL: " + useSSL);

        // Parse sources
        List<String[]> sources = parseSources(mxml);

        // Run Political Supervisor Module
        String report = PoliticalSupervisorModule.scan(sources, useSSL, port);

        // Write report
        String date = LocalDate.now().format(DateTimeFormatter.ISO_LOCAL_DATE);
        Path outputDir = Paths.get("occupations", date);
        Files.createDirectories(outputDir);
        Path outputFile = outputDir.resolve("reports.log");
        Files.writeString(outputFile, report);

        System.out.println("Report saved to: " + outputFile);
    }

    /**
     * Loads MXML file and increments the internal count (MXML counting behavior).
     */
    private static Document loadMXML(String path) throws Exception {
        mxmlCount++;
        DocumentBuilder builder = DocumentBuilderFactory.newInstance().newDocumentBuilder();
        Document doc = builder.parse(new File(path));
        doc.getDocumentElement().normalize();

        // Update count attribute in memory
        doc.getDocumentElement().setAttribute("count", String.valueOf(mxmlCount));
        return doc;
    }

    private static String getTagValue(Document doc, String tag) {
        NodeList list = doc.getElementsByTagName(tag);
        if (list.getLength() > 0) return list.item(0).getTextContent().trim();
        return "";
    }

    private static List<String[]> parseSources(Document doc) {
        List<String[]> sources = new ArrayList<>();
        NodeList nodes = doc.getElementsByTagName("source");
        for (int i = 0; i < nodes.getLength(); i++) {
            Element el = (Element) nodes.item(i);
            sources.add(new String[]{el.getAttribute("name"), el.getAttribute("url")});
        }
        return sources;
    }
}
