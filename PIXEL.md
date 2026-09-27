# PIXEL.md

# Senior Senate Attorney E44Hrs — Project Documentation Pixel

This PIXEL document describes the repository as it exists in source control. It separates implemented software, configuration, compiled artifacts, reference data, legal/civic writing, and claims that would require independent verification.

Because this repository contains political, governmental, legal, and public-contact subject matter, this document uses descriptive language rather than treating the repository as an official government, court, legislative, or legal authority.

---

## 1. Purpose

The repository presents itself as **Senior-Senate-Attorney** and combines several distinct areas:

- Java source code;
- a political-news collection/reporting utility;
- XML/MXML configuration;
- state legislative contact/reference material;
- the AE6E66 application/module;
- servlet and JSP web resources;
- legal and civic writing;
- project identity and narrative material;
- compiled Java output;
- development-environment metadata.

The repository therefore functions as a mixed **software, reference, civic/legal-documentation, and research-oriented project**.

The repository name and its documentation should not be interpreted by themselves as evidence that the project represents a U.S. Senate office, an attorney, a court, a government agency, or another public institution.

---

## 2. What’s Made

### 2.1 Political News Collection and Reporting Program

The principal top-level Java implementation includes:

- `src/Main.java`
- `src/PoliticalSupervisorModule.java`
- `src/config.mxml`

`Main.java` loads the MXML configuration, reads connection settings and configured sources, invokes the political supervisor module, and writes a dated report under:

`occupations/{date}/reports.log`

The current implementation is a source-collection and report-generation utility. It should not be described as an autonomous political decision-maker or as an authoritative evaluator of political positions.

### 2.2 PoliticalSupervisorModule

`PoliticalSupervisorModule.java` implements the configured network collection path.

It:

1. receives configured source URLs;
2. establishes an HTTPS connection;
3. requests the page;
4. reads the returned HTML;
5. extracts the page title;
6. performs simple `h1`, `h2`, and `h3` extraction;
7. places the extracted material into a report.

The implementation is deliberately simple HTML extraction rather than a full news parser, semantic political-analysis engine, or source-verification system.

### 2.3 Configured News Sources

`src/config.mxml` currently names:

- Reuters Politics
- Associated Press Politics
- BBC News Politics
- NPR Politics
- C-SPAN
- The Hill
- Politico
- Roll Call

The configuration identifies these as input sources. Their inclusion in configuration does not establish endorsement, affiliation, partnership, or agreement with any source.

### 2.4 General Assembly Contact Material

The repository contains:

`contacts/general.assembly/`

with state-oriented contact directories.

Its accompanying README describes the material as contact lists for U.S. state legislatures and the District of Columbia. It documents a normalized email-oriented structure and identifies Open States / Plural as the source for bulk-added state lists.

This material should be treated as a **point-in-time reference dataset**. Legislative rosters and contact information change and should be refreshed and verified before operational use.

### 2.5 AE6E66 Application Module

The repository contains a substantial `modules/AE6E66/` tree.

It includes:

- Java source;
- startup and shutdown scripts;
- database setup material;
- servlet source;
- JSP pages;
- JavaScript;
- CSS;
- contact data;
- departmental pages;
- compiled classes.

The module represents a concrete application-development area of the repository.

Its presence does not, by itself, establish that the module is currently deployed, externally reachable, production-ready, or officially connected to any institution represented by its pages.

### 2.6 Web Application

The AE6E66 servlet material includes pages for areas such as:

- authentication-related controls;
- contacts;
- crawling;
- departments;
- profiles;
- profile creation;
- messaging;
- sent material;
- status;
- application indexing.

The repository also contains department-oriented JSP pages covering subjects including education, energy, environment, health, justice, libraries, parliament, trade, transport, treasury, and others.

These are software and content assets contained in the repository. They should not be represented as official portals for the named institutions or departments unless independent evidence establishes such a relationship.

### 2.7 Legal and Civic Writing

`LEGAL.md` contains a project-authored civic-license framework discussing:

- collective welfare;
- affiliation;
- reciprocity;
- diversity;
- procedural fairness;
- civic trust;
- protection from defamation and exploitation;
- unity and purpose.

This is repository-authored material. The existence of a document named `LEGAL.md` does not make its provisions enacted law, a court order, a government regulation, or legal advice.

### 2.8 Project Identity Material

The repository also contains `MEARVK.md`, which presents an extended project narrative and contact information.

It should be read as project material rather than independently verified biography or institutional documentation.

### 2.9 Compiled Artifacts

Compiled Java material is committed in locations including:

- `src/*.class`
- `out/production/Senior-Senate-Attorney/`
- `modules/AE6E66/source/*.class`

Committed binaries demonstrate the presence of compiled artifacts. They do not establish a reproducible build, current runtime compatibility, or successful deployment.

---

## 3. What’s Included

### Source

- `src/Main.java`
- `src/PoliticalSupervisorModule.java`
- AE6E66 Java source
- servlet source
- supporting JavaScript and JSP

### Configuration

- `src/config.mxml`
- `configuration/known.port.20000.servers.xml`
- module configuration material

### Reference Data

- `contacts/general.assembly/`
- state-level contact material
- module contact data

### Web Material

- JSP pages
- CSS
- JavaScript
- department-oriented pages
- profile and messaging pages

### Legal and Documentation

- `README.md`
- `LEGAL.md`
- `LICENSE.law`
- `MEARVK.md`
- module READMEs and related documentation

### Compiled Output

- Java class files under `src/`
- Java class files under `out/`
- module class files

### Development Metadata

- IntelliJ IDEA configuration under `.idea/`
- `Senior-Senate-Attorney.iml`

IDE metadata describes one development environment; it is not a substitute for a complete portable build specification.

### Media

The repository also contains image/media material, including content under `pselvive/` and `successful/`.

---

## 4. How to Write This Kind of Stuff

### 4.1 Start With What Exists

Document actual repository evidence first.

A source file is evidence that source exists. A configuration file is evidence that configuration exists. A running service requires separate execution evidence.

### 4.2 Separate Source, Artifact, and Operation

Always distinguish:

1. **Source** — code written by the project.
2. **Configuration** — declared inputs and settings.
3. **Artifacts** — compiled or generated files.
4. **Execution** — code actually run.
5. **Verification** — behavior independently tested and confirmed.

Do not infer the last two from the first three.

### 4.3 Describe Political Software Neutrally

A political-news tool can collect headlines and generate reports without making political recommendations.

Documentation should describe:

- what sources are configured;
- what information is collected;
- how it is transformed;
- where reports are written;
- what the software does not establish.

Avoid turning a data-collection mechanism into a claim of political authority or political judgment.

### 4.4 Preserve Source Attribution

When the repository contains political or civic information, record its source and time period where possible.

For reference data, distinguish:

- project-authored material;
- public datasets;
- government-originated material;
- third-party reporting;
- generated output.

### 4.5 Treat Government Names Carefully

A JSP called `treasury.jsp` is a repository file. It is not evidence that the repository is the U.S. Treasury.

A state contact directory is a repository dataset. It is not evidence that the project administers a state legislature.

Names are not authority.

### 4.6 Treat Legal Language Carefully

A document may use legal terminology or present a proposed civic framework without having legal force.

Use precise language such as:

- "project-authored";
- "describes";
- "proposes";
- "references";
- "contains";
- "documents."

Do not silently convert project language into a statement of law.

### 4.7 Document External Connections as Boundaries

Whenever code connects to an external website, database, server, or public data source, record:

- destination;
- protocol;
- configured port;
- purpose;
- authentication requirements;
- data exchanged;
- failure behavior;
- whether the connection has actually been tested.

### 4.8 Keep Reference Data Current

The state-legislative contact material is explicitly described as time-sensitive.

Future maintainers should record:

- extraction date;
- source revision;
- refresh method;
- validation status;
- changes in roster;
- handling of obsolete addresses.

### 4.9 Do Not Overstate Security

HTTPS/TLS configuration indicates an intended encrypted transport path. It does not by itself establish complete application security.

Security documentation should separately consider:

- certificate validation;
- dependency security;
- input validation;
- HTML parsing;
- logging;
- credentials;
- database access;
- authorization;
- deployment configuration.

### 4.10 Do Not Treat Repository Presence as Factual Verification

A committed document proves that the document is present.

It does not independently prove every historical, legal, political, biographical, institutional, or operational statement contained in it.

---

## 5. Recommended PIXEL Pattern

For future revisions, keep the document organized as:

1. **Purpose**
2. **What’s Made**
3. **What’s Included**
4. **How to Write This Kind of Stuff**
5. **Evidence and Status**
6. **Repository Boundaries**
7. **Current Project Snapshot**
8. **Maintenance Rule**

The evidence sections are particularly important for this repository because software, public-reference data, political material, and legal writing coexist in the same project.

---

## 6. Evidence and Status

The repository currently demonstrates the presence of:

- top-level Java source;
- a political-news collection/reporting implementation;
- MXML configuration;
- a substantial AE6E66 module;
- servlet/JSP web resources;
- state-legislative contact/reference material;
- legal and civic writing;
- compiled Java artifacts;
- IntelliJ project metadata;
- media files.

Repository inspection alone does **not** establish:

- that the software is currently running;
- that every configured external source is reachable;
- that every generated report is accurate or complete;
- that the state contact data is current;
- that any named government body endorses or operates the project;
- that project-authored legal documents have legal force;
- that the project provides legal representation;
- that the repository is an official U.S. Senate or government system;
- that every module has been production-tested.

These distinctions should remain explicit.

---

## 7. Repository Boundaries

Senior.Senate.Attorney.E44Hrs crosses several boundaries:

**Software**  
Java, JSP, JavaScript, CSS, XML/MXML, shell/deployment material, and compiled artifacts.

**Political Information**  
Configured news sources and report-generation code.

**Public Reference Data**  
State-legislative contact material and related datasets.

**Legal and Civic Writing**  
Project-authored documents discussing law, civic conduct, public life, and social principles.

**External Systems**  
News sites, public data sources, network services, databases, and other endpoints referenced by configuration or code.

An external reference is an integration boundary. It is not, by itself, evidence of ownership, control, endorsement, partnership, or official status.

---

## 8. Current Project Snapshot

| Area | Repository Evidence | Careful Status |
|---|---|---|
| Project documentation | README.md, LEGAL.md, MEARVK.md | Present |
| Political collection code | src/Main.java, src/PoliticalSupervisorModule.java | Present |
| MXML configuration | src/config.mxml | Present |
| News-source configuration | 8 configured sources | Present |
| State legislative contacts | contacts/general.assembly/ | Present |
| AE6E66 module | modules/AE6E66/ | Present |
| Servlet/JSP application | AE6E66 web tree | Present |
| Compiled Java | src/, out/, module source | Present |
| Automated verification | Not established by this document | Not established |
| Current production deployment | Not established | Not established |
| Government/official authority | Not established by repository contents | Not established |
| Legal representation | Not established by repository contents | Not established |

---

## 9. Maintenance Rule

Update this PIXEL document when a material change affects:

- project purpose;
- Java architecture;
- political-information collection;
- configured external sources;
- contact-data provenance;
- AE6E66 architecture;
- web application behavior;
- legal/civic documentation;
- security controls;
- build or deployment;
- operational verification.

When a capability moves from concept to implementation, document the transition.

When a capability becomes verified, document the verification method and date.

When a capability is removed or becomes unavailable, document that change rather than leaving the old description in place.

---

## 10. Closing Principle

> **Describe what the repository contains. Explain what the software does. Preserve the difference between political information and political judgment, between legal writing and law, and between source code and verified operation.**

*Max Rupplin - MEARVK LLC - 2026*
