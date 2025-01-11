# [Client-Server Architecture](https://en.wikipedia.org/wiki/Client%E2%80%93server_model)
- The **client–server model** is a [distributed application](https://en.wikipedia.org/wiki/Distributed_application "Distributed application") structure that partitions tasks or workloads between the providers of a resource or service, called [servers](https://en.wikipedia.org/wiki/Server_(computing) "Server (computing)"), and service requesters, called [clients](https://en.wikipedia.org/wiki/Client_(computing)).
- A client usually does not share any of its resources, but it requests content or service from a server. Clients, therefore, initiate communication sessions with servers, which await incoming requests.
- In the client-server architecture, when the client computer sends a *request* for data to the server through the internet, the server accepts the requested process and delivers the data packets requested back to the client as a *response*.
- A server is always listening for a connections/request from the clients.

---
# [DNS](https://en.wikipedia.org/wiki/Domain_Name_System)
- The **Domain Name System** (**DNS**) is a hierarchical and distributed [name service](https://en.wikipedia.org/wiki/Name_service "Name service") that provides a naming system for [computers](https://en.wikipedia.org/wiki/Computer "Computer"), services, and other resources on the Internet or other [Internet Protocol](https://en.wikipedia.org/wiki/Internet_Protocol "Internet Protocol") (IP) networks.
- It associates various information with _[domain names](https://en.wikipedia.org/wiki/Domain_name "Domain name")_ ([identification](https://en.wikipedia.org/wiki/Identification_(information) "Identification (information)") [strings](https://en.wikipedia.org/wiki/String_(computer_science) "String (computer science)")) assigned to each of the associated entities. Most prominently, it translates readily memorized domain names to the numerical [IP addresses](https://en.wikipedia.org/wiki/IP_address "IP address") needed for locating and identifying computer services and devices with the underlying [network protocols](https://en.wikipedia.org/wiki/Network_protocol "Network protocol").

![[dnsHeirarchy.webp]]
- The Domain Name System delegates the responsibility of assigning domain names and mapping those names to Internet resources by designating [authoritative name servers](https://en.wikipedia.org/wiki/Authoritative_name_server "Authoritative name server") for each domain.
- The Domain Name System delegates the responsibility of assigning domain names and mapping those names to Internet resources by designating [authoritative name servers](https://en.wikipedia.org/wiki/Authoritative_name_server "Authoritative name server") for each domain.

---
# [Internet Protocol Suit (TCP/IP)](https://en.wikipedia.org/wiki/Internet_protocol_suite)
- The **Internet protocol suite**, commonly known as **TCP/IP**, is a framework for organizing the set of [communication protocols](https://en.wikipedia.org/wiki/Communication_protocol "Communication protocol") used in the [Internet](https://en.wikipedia.org/wiki/Internet "Internet") and similar [computer networks](https://en.wikipedia.org/wiki/Computer_network "Computer network") according to functional criteria.
- The foundational protocols in the suite are the [Transmission Control Protocol](https://en.wikipedia.org/wiki/Transmission_Control_Protocol "Transmission Control Protocol") (TCP), the [User Datagram Protocol](https://en.wikipedia.org/wiki/User_Datagram_Protocol "User Datagram Protocol") (UDP), and the [Internet Protocol](https://en.wikipedia.org/wiki/Internet_Protocol "Internet Protocol") (IP).
- The Internet protocol suite provides [end-to-end data communication](https://en.wikipedia.org/wiki/End-to-end_principle "End-to-end principle") specifying how data should be packetized, addressed, transmitted, [routed](https://en.wikipedia.org/wiki/Routed "Routed"), and received.
- This functionality is organized into four [abstraction layers](https://en.wikipedia.org/wiki/Abstraction_layer "Abstraction layer"), which classify all related protocols according to each protocol's scope of networking.
	- The [application layer](https://en.wikipedia.org/wiki/Application_layer "Application layer") is the scope within which applications, or [processes](https://en.wikipedia.org/wiki/Process_(computing) "Process (computing)"), create user data and communicate this data to other applications on another or the same host. The applications make use of the services provided by the underlying lower layers, especially the transport layer which provides [reliable or unreliable](https://en.wikipedia.org/wiki/Reliability_(computer_networking) "Reliability (computer networking)") _pipes_ to other processes. The communications partners are characterized by the application architecture, such as the [client–server model](https://en.wikipedia.org/wiki/Client%E2%80%93server_model "Client–server model") and [peer-to-peer](https://en.wikipedia.org/wiki/Peer-to-peer "Peer-to-peer") networking. This is the layer in which all application protocols, such as SMTP, FTP, SSH, HTTP, operate. Processes are addressed via ports which essentially represent [services](https://en.wikipedia.org/wiki/Service_(systems_architecture) "Service (systems architecture)").
	- The [transport layer](https://en.wikipedia.org/wiki/Transport_layer "Transport layer") performs host-to-host communications on either the local network or remote networks separated by routers. It provides a channel for the communication needs of applications. UDP is the basic transport layer protocol, providing an unreliable [connectionless](https://en.wikipedia.org/wiki/Connectionless "Connectionless") datagram service. The Transmission Control Protocol provides flow-control, connection establishment, and reliable transmission of data.
	- The [internet layer](https://en.wikipedia.org/wiki/Internet_layer "Internet layer") exchanges datagrams across network boundaries. It provides a uniform networking interface that hides the actual topology (layout) of the underlying network connections. It is therefore also the layer that establishes internetworking. Indeed, it defines and establishes the Internet. This layer defines the addressing and routing structures used for the TCP/IP protocol suite. The primary protocol in this scope is the Internet Protocol, which defines [IP addresses](https://en.wikipedia.org/wiki/IP_address "IP address"). Its function in routing is to transport datagrams to the next host, functioning as an IP router, that has the connectivity to a network closer to the final data destination.
	- The [link layer](https://en.wikipedia.org/wiki/Link_layer "Link layer") defines the networking methods within the scope of the local network link on which hosts communicate without intervening routers. This layer includes the protocols used to describe the local network topology and the interfaces needed to effect the transmission of internet layer datagrams to next-neighbor hosts.

---
# [HyperText Transfer Protocol (HTTP)](https://en.wikipedia.org/wiki/HTTP)
- **HTTP** (**Hypertext Transfer Protocol**) is an [application layer](https://en.wikipedia.org/wiki/Application_layer "Application layer") protocol in the [Internet protocol suite](https://en.wikipedia.org/wiki/Internet_protocol_suite "Internet protocol suite") model for distributed, collaborative, [hypermedia](https://en.wikipedia.org/wiki/Hypermedia "Hypermedia") information systems.
- HTTP functions as a [request–response](https://en.wikipedia.org/wiki/Request%E2%80%93response "Request–response") protocol in the [client–server model](https://en.wikipedia.org/wiki/Client%E2%80%93server_model "Client–server model"). A [web browser](https://en.wikipedia.org/wiki/Web_browser "Web browser"), for example, may be the _client_ whereas a [process](https://en.wikipedia.org/wiki/Process_(computing) "Process (computing)"), named [web server](https://en.wikipedia.org/wiki/Web_server "Web server"), running on a computer [hosting](https://en.wikipedia.org/wiki/Host_(network) "Host (network)") one or more [websites](https://en.wikipedia.org/wiki/Website "Website") may be the _server_.
- The client submits an HTTP _request_ message to the server. The server, which provides _resources_ such as [HTML](https://en.wikipedia.org/wiki/HTML "HTML") files and other content or performs other functions on behalf of the client, returns a _response_ message to the client. The response contains completion status information about the request and may also contain requested content in its message body.
- HTTP/1 was finalized and fully documented (as version 1.0) in 1996.
- [HTTP/2](https://en.wikipedia.org/wiki/HTTP/2), published in 2015, provides a more efficient expression of HTTP's semantics "on the wire". It is also supported by major web servers over [Transport Layer Security](https://en.wikipedia.org/wiki/Transport_Layer_Security "Transport Layer Security") (TLS) using an [Application-Layer Protocol Negotiation](https://en.wikipedia.org/wiki/Application-Layer_Protocol_Negotiation "Application-Layer Protocol Negotiation") (ALPN) extension where [TLS 1.2](https://en.wikipedia.org/wiki/TLS_1.2 "TLS 1.2") or newer is required.
- [HTTP/3](https://en.wikipedia.org/wiki/HTTP/3), the successor to HTTP/2, was published in 2022. HTTP/3 uses [QUIC](https://en.wikipedia.org/wiki/QUIC "QUIC") instead of [TCP](https://en.wikipedia.org/wiki/Transmission_Control_Protocol "Transmission Control Protocol") for the underlying transport protocol. Like HTTP/2, it does not obsolete previous major versions of the protocol. HTTP/3 has lower latency for real-world web pages, if enabled on the server, and loads faster than with HTTP/2, in some cases over three times faster than HTTP/1.1.

## [HTTPS](https://en.wikipedia.org/wiki/HTTPS)
- **Hypertext Transfer Protocol Secure** (**HTTPS**) is an extension of the [Hypertext Transfer Protocol](https://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol "Hypertext Transfer Protocol") (HTTP). It uses [encryption](https://en.wikipedia.org/wiki/Encryption "Encryption") for [secure communication](https://en.wikipedia.org/wiki/Secure_communications "Secure communications") over a [computer network](https://en.wikipedia.org/wiki/Computer_network "Computer network"), and is widely used on the [Internet](https://en.wikipedia.org/wiki/Internet "Internet").
- In HTTPS, the [communication protocol](https://en.wikipedia.org/wiki/Communication_protocol "Communication protocol") is encrypted using [Transport Layer Security](https://en.wikipedia.org/wiki/Transport_Layer_Security "Transport Layer Security") (TLS) or, formerly, [Secure Sockets Layer](https://en.wikipedia.org/wiki/Secure_Sockets_Layer "Secure Sockets Layer") (SSL). The protocol is therefore also referred to as **HTTP over TLS**, or **HTTP over SSL**.
- The principal motivations for HTTPS are [authentication](https://en.wikipedia.org/wiki/Authentication "Authentication") of the accessed [website](https://en.wikipedia.org/wiki/Website "Website") and protection of the [privacy](https://en.wikipedia.org/wiki/Information_privacy "Information privacy") and [integrity](https://en.wikipedia.org/wiki/Data_integrity "Data integrity") of the exchanged data while it is in transit.
- The authentication aspect of HTTPS requires a trusted third party to sign server-side [digital certificates](https://en.wikipedia.org/wiki/Public_key_certificate "Public key certificate").
- The [Uniform Resource Identifier](https://en.wikipedia.org/wiki/Uniform_Resource_Identifier "Uniform Resource Identifier") (URI) scheme _HTTPS_ has identical usage syntax to the HTTP scheme. However, HTTPS signals the browser to use an added encryption layer of SSL/TLS to protect the traffic. 
- SSL/TLS is especially suited for HTTP, since it can provide some protection even if only one side of the communication is [authenticated](https://en.wikipedia.org/wiki/Authentication "Authentication"). This is the case with HTTP transactions over the Internet, where typically only the [server](https://en.wikipedia.org/wiki/Web_server "Web server") is authenticated (by the client examining the server's [certificate](https://en.wikipedia.org/wiki/Public_key_certificate "Public key certificate")).
- HTTPS [URLs](https://en.wikipedia.org/wiki/URL "URL") begin with "https://" and use [port](https://en.wikipedia.org/wiki/List_of_TCP_and_UDP_port_numbers "List of TCP and UDP port numbers") 443 by default, whereas, [HTTP](https://en.wikipedia.org/wiki/HTTP "HTTP") URLs begin with "http://" and use port 80 by default.
- To prepare a web server to accept HTTPS connections, the administrator must create a [public key certificate](https://en.wikipedia.org/wiki/Public_key_certificate "Public key certificate") for the web server. This certificate must be signed by a trusted [certificate authority](https://en.wikipedia.org/wiki/Certificate_authority "Certificate authority") for the web browser to accept it without warning.

---
# HTTP Syntax

## [HTTP/1.1 request messages](https://en.wikipedia.org/wiki/HTTP#HTTP/1.1_request_messages)
- Request messages are sent by a client to a target server.
### Request syntax

- A client sends _request messages_ to the server, which consist of:
	- a **request line**, consisting of the case-sensitive request method, a [space](https://en.wikipedia.org/wiki/Space_(punctuation) "Space (punctuation)"), the requested URI, another space, the protocol version, a [carriage return](https://en.wikipedia.org/wiki/Carriage_return "Carriage return"), and a [line feed](https://en.wikipedia.org/wiki/Line_feed "Line feed"), e.g.:

	```json
	GET /images/logo.png HTTP/1.1
	```

	- zero or more [request header fields](https://en.wikipedia.org/wiki/HTTP_request_header_field "HTTP request header field") (at least 1 or more headers in case of HTTP/1.1), each consisting of the case-insensitive field name, a colon, optional leading [whitespace](https://en.wikipedia.org/wiki/Whitespace_(computer_science) "Whitespace (computer science)"), the field value, an optional trailing whitespace and ending with a carriage return and a line feed, e.g.:

	```json
	Host: www.example.com
	Accept-Language: en
	```

	- an empty line, consisting of a carriage return and a line feed;
	- an optional [message body](https://en.wikipedia.org/wiki/HTTP_message_body "HTTP message body").
- In the HTTP/1.1 protocol, all header fields except `Host: hostname` are optional.
- A request line containing only the path name is accepted by servers to maintain compatibility with HTTP clients before the HTTP/1.0 specification in [RFC](https://en.wikipedia.org/wiki/RFC_(identifier) "RFC (identifier)") [1945](https://datatracker.ietf.org/doc/html/rfc1945).

### [Request methods](https://en.wikipedia.org/wiki/HTTP#Request_methods)
- HTTP defines methods to indicate the desired action to be performed on the identified resource.
- The HTTP/1.0 specification defined the GET, HEAD, and POST methods as well as listing the PUT, DELETE, LINK and UNLINK methods under additional methods. However, the HTTP/1.1 specification formally defined and added five new methods: PUT, DELETE, CONNECT, OPTIONS, and TRACE.
GET
	The GET method requests that the target resource transfer a representation of its state. GET requests should only [retrieve data](https://en.wikipedia.org/wiki/Data_retrieval "Data retrieval") and should have no other effect. (This is also true of some other HTTP methods.) For retrieving resources without making changes, GET is preferred over POST, as they can be [addressed](https://en.wikipedia.org/wiki/Addressability "Addressability") through a [URL](https://en.wikipedia.org/wiki/URL "URL"). This enables bookmarking and sharing and makes GET responses eligible for [caching](https://en.wikipedia.org/wiki/Browser_cache "Browser cache"), which can save bandwidth. The [W3C](https://en.wikipedia.org/wiki/W3C "W3C") has published guidance principles on this distinction, saying, "[Web application](https://en.wikipedia.org/wiki/Web_application "Web application") design should be informed by the above principles, but also by the relevant limitations." See [safe methods](https://en.wikipedia.org/wiki/HTTP#Safe_methods) below.

HEAD
	The HEAD method requests that the target resource transfer a representation of its state, as for a GET request, but without the representation data enclosed in the response body. This is useful for retrieving the representation metadata in the response header, without having to transfer the entire representation. Uses include checking whether a page is available through the [status code](https://en.wikipedia.org/wiki/HTTP_status_code "HTTP status code") and quickly finding the size of a [file](https://en.wikipedia.org/wiki/Computer_file "Computer file") (`Content-Length`).

POST
	The [POST method](https://en.wikipedia.org/wiki/POST_(HTTP) "POST (HTTP)") requests that the target resource process the representation enclosed in the request according to the semantics of the target resource. For example, it is used for posting a message to an [Internet forum](https://en.wikipedia.org/wiki/Internet_forum "Internet forum"), subscribing to a [mailing list](https://en.wikipedia.org/wiki/Mailing_list "Mailing list"), or completing an [online shopping](https://en.wikipedia.org/wiki/Online_shopping "Online shopping") transaction.

PUT
	The PUT method requests that the target resource create or update its state with the state defined by the representation enclosed in the request. A distinction from POST is that the client specifies the target location on the server.

DELETE
	The DELETE method requests that the target resource delete its state.

CONNECT
	The CONNECT method requests that the intermediary establish a [TCP/IP tunnel](https://en.wikipedia.org/wiki/Tunneling_protocol "Tunneling protocol") to the origin server identified by the request target. It is often used to secure connections through one or more [HTTP proxies](https://en.wikipedia.org/wiki/HTTP_proxy "HTTP proxy") with [TLS](https://en.wikipedia.org/wiki/Transport_Layer_Security "Transport Layer Security").See [HTTP CONNECT method](https://en.wikipedia.org/wiki/HTTP_tunnel#HTTP_CONNECT_method "HTTP tunnel").

OPTIONS
	The OPTIONS method requests that the target resource transfer the HTTP methods that it supports. This can be used to check the functionality of a web server by requesting '*' instead of a specific resource.

TRACE
	The TRACE method requests that the target resource transfer the received request in the response body. That way a client can see what (if any) changes or additions have been made by intermediaries.

PATCH
	The [PATCH method](https://en.wikipedia.org/wiki/PATCH_(HTTP) "PATCH (HTTP)") requests that the target resource modify its state according to the partial update defined in the representation enclosed in the request. This can save bandwidth by updating a part of a file or document without having to transfer it entirely.

- A request method is _safe_ if a request with that method has no intended effect on the server. The methods GET, HEAD, OPTIONS, and TRACE are defined as safe. In other words, safe methods are intended to be [read-only](https://en.wikipedia.org/wiki/Command%E2%80%93query_separation "Command–query separation"). Safe methods can still have [side effects](https://en.wikipedia.org/wiki/Side_effect_(computer_science) "Side effect (computer science)") not seen by the client, such as appending request information to a [log file](https://en.wikipedia.org/wiki/Server_log "Server log") or charging an [advertising account](https://en.wikipedia.org/wiki/Web_banner "Web banner").
- A request method is _idempotent_ if multiple identical requests with that method have the same effect as a single such request. The methods PUT and DELETE, and safe methods are defined as idempotent.
- A request method is _cacheable_ if responses to requests with that method may be stored for future reuse. The methods GET, HEAD, and POST are defined as cacheable. In contrast, the methods PUT, DELETE, CONNECT, OPTIONS, TRACE, and PATCH are not cacheable.
- Request header fields allow the client to pass additional information beyond the request line, acting as request modifiers (similarly to the parameters of a procedure). They give information about the client, about the target resource, or about the expected handling of the request.

## [HTTP/1.1 response messages](https://en.wikipedia.org/wiki/HTTP#HTTP/1.1_response_messages)
- A response message is sent by a server to a client as a reply to its former request message.

### Response syntax
- A server sends _response messages_ to the client, which consist of:
	- a **status line**, consisting of the protocol version, a [space](https://en.wikipedia.org/wiki/Space_(punctuation) "Space (punctuation)"), the [response status code](https://en.wikipedia.org/wiki/List_of_HTTP_status_codes "List of HTTP status codes"), another space, a possibly empty reason phrase, a [carriage return](https://en.wikipedia.org/wiki/Carriage_return "Carriage return") and a [line feed](https://en.wikipedia.org/wiki/Line_feed "Line feed"), e.g.:
    ```json
    HTTP/1.1 200 OK
    ```
    
	- zero or more [response header fields](https://en.wikipedia.org/wiki/HTTP_response_header_field "HTTP response header field"), each consisting of the case-insensitive field name, a colon, optional leading [whitespace](https://en.wikipedia.org/wiki/Whitespace_(computer_science) "Whitespace (computer science)"), the field value, an optional trailing whitespace and ending with a carriage return and a line feed, e.g.:
    ```json
    Content-Type: text/html
    ```
    
	- an empty line, consisting of a carriage return and a line feed;
	- an optional [message body](https://en.wikipedia.org/wiki/HTTP_message_body "HTTP message body").

### Response status code
- In HTTP/1.0 and since, the first line of the HTTP response is called the _status line_ and includes a numeric _status code_ (such as "[404](https://en.wikipedia.org/wiki/HTTP_404 "HTTP 404")") and a textual _reason phrase_ (such as "Not Found").
- The response status code is a three-digit integer code representing the result of the server's attempt to understand and satisfy the client's corresponding request.
- The first digit of the status code defines its class:
	`1XX` (informational)
		The request was received, continuing process.

	`2XX` (successful)
		The request was successfully received, understood, and accepted.

	`3XX` (redirection)
		Further action needs to be taken in order to complete the request.

	`4XX` (client error)
		The request contains bad syntax or cannot be fulfilled.

	`5XX` (server error)
		The server failed to fulfill an apparently valid request.

See also: [List of HTTP status codes](https://en.wikipedia.org/wiki/List_of_HTTP_status_codes "List of HTTP status codes")

### Response header fields
- The response header fields allow the server to pass additional information beyond the status line, acting as response modifiers. They give information about the server or about further access to the target resource or related resources.
- Each response header field has a defined meaning which can be further refined by the semantics of the request method or response status code.

See also: [List of HTTP header fields § Response fields](https://en.wikipedia.org/wiki/List_of_HTTP_header_fields#Response_fields "List of HTTP header fields")

---
# [Uniform Resource Locator (URL)](https://en.wikipedia.org/wiki/URL)
- A **uniform resource locator** (**URL**), colloquially known as an **address** on the [Web](https://en.wikipedia.org/wiki/World_Wide_Web "World Wide Web"), is a reference to a [resource](https://en.wikipedia.org/wiki/Web_resource "Web resource") that specifies its location on a [computer network](https://en.wikipedia.org/wiki/Computer_network "Computer network") and a mechanism for retrieving it.
- A URL is a specific type of [Uniform Resource Identifier](https://en.wikipedia.org/wiki/Uniform_Resource_Identifier "Uniform Resource Identifier") (URI), although many people use the two terms interchangeably. URLs occur most commonly to reference [web pages](https://en.wikipedia.org/wiki/Web_page "Web page") ([HTTP](https://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol "Hypertext Transfer Protocol")/[HTTPS](https://en.wikipedia.org/wiki/HTTPS "HTTPS")) but are also used for file transfer ([FTP](https://en.wikipedia.org/wiki/File_Transfer_Protocol "File Transfer Protocol")), email ([mailto](https://en.wikipedia.org/wiki/Mailto "Mailto")), database access ([JDBC](https://en.wikipedia.org/wiki/Java_Database_Connectivity "Java Database Connectivity")), and many other applications.
- A typical URL could have the form `http://www.example.com/index.html`, which indicates a protocol (`http`), a [hostname](https://en.wikipedia.org/wiki/Hostname "Hostname") (`www.example.com`), and a file name (`index.html`).

## [Syntax](https://en.wikipedia.org/wiki/URL#Syntax)
Main article: [Uniform Resource Identifier § Syntax](https://en.wikipedia.org/wiki/Uniform_Resource_Identifier#Syntax "Uniform Resource Identifier")

- Every HTTP URL conforms to the syntax of a generic URI. The URI generic syntax consists of five _components_ organized hierarchically in order of decreasing significance from left to right:

	```json
	URI = scheme ":" ["//" authority] path ["?" query] ["#" fragment]
	```

- A component is _undefined_ if it has an associated delimiter and the delimiter does not appear in the URI; the scheme and path components are always defined. A component is _empty_ if it has no characters; the scheme component is always non-empty. 
- The authority component consists of _subcomponents_:

	```json
	authority = [userinfo "@"] host [":" port]
	```

- This is represented in a [syntax diagram](https://en.wikipedia.org/wiki/Syntax_diagram "Syntax diagram") as:

[![URI syntax diagram](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d6/URI_syntax_diagram.svg/1068px-URI_syntax_diagram.svg.png)](https://en.wikipedia.org/wiki/File:URI_syntax_diagram.svg "URI syntax diagram")

- The URI comprises:
	- A non-empty **scheme** component followed by a colon (`:`), consisting of a sequence of characters beginning with a letter and followed by any combination of letters, digits, plus (`+`), period (`.`), or hyphen (`-`). Although schemes are case-insensitive, the canonical form is lowercase and documents that specify schemes must do so with lowercase letters. Examples of popular schemes include [`http`](https://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol "Hypertext Transfer Protocol"),[`https`](https://en.wikipedia.org/wiki/HTTP_Secure "HTTP Secure"), [`ftp`](https://en.wikipedia.org/wiki/File_Transfer_Protocol "File Transfer Protocol"), [`mailto`](https://en.wikipedia.org/wiki/Mailto "Mailto"), [`file`](https://en.wikipedia.org/wiki/File_URI_scheme "File URI scheme"), [`data`](https://en.wikipedia.org/wiki/Data_URI_scheme "Data URI scheme") and [`irc`](https://en.wikipedia.org/wiki/Internet_Relay_Chat#URI_scheme "Internet Relay Chat"). URI schemes should be registered with the [Internet Assigned Numbers Authority (IANA)](https://en.wikipedia.org/wiki/Internet_Assigned_Numbers_Authority "Internet Assigned Numbers Authority"), although non-registered schemes are used in practice
	- An optional **authority** component preceded by two slashes (`//`), comprising:
	    - An optional **userinfo** subcomponent followed by an at symbol (`@`), that may consist of a [user name](https://en.wikipedia.org/wiki/User_(computing) "User (computing)") and an optional [password](https://en.wikipedia.org/wiki/Password "Password") preceded by a colon (`:`). Use of the format `username:password` in the userinfo subcomponent is deprecated for security reasons. Applications should not render as clear text any data after the first colon (`:`) found within a userinfo subcomponent unless the data after the colon is the empty string (indicating no password).
	    - A **host** subcomponent, consisting of either a registered name (including but not limited to a [hostname](https://en.wikipedia.org/wiki/Hostname "Hostname")) or an [IP address](https://en.wikipedia.org/wiki/IP_address "IP address"). [IPv4](https://en.wikipedia.org/wiki/IPv4 "IPv4") addresses must be in [dot-decimal notation](https://en.wikipedia.org/wiki/Dot-decimal_notation "Dot-decimal notation"), and [IPv6](https://en.wikipedia.org/wiki/IPv6 "IPv6") addresses must be enclosed in brackets (`[]`).
	    - An optional **port** subcomponent preceded by a colon (`:`), consisting of decimal digits.
	- A **path** component, consisting of a sequence of path segments separated by a slash (`/`). A path is always defined for a URI, though the defined path may be empty (zero length). A segment may also be empty, resulting in two consecutive slashes (`//`) in the path component. A path component may resemble or map exactly to a [file system path](https://en.wikipedia.org/wiki/Path_(computing) "Path (computing)") but does not always imply a relation to one. If an authority component is defined, then the path component must either be empty or begin with a slash (`/`). If an authority component is undefined, then the path cannot begin with an empty segment—that is, with two slashes (`//`)—since the following characters would be interpreted as an authority component.
	- By convention, in **http** and **https** URIs, the last part of a _path_ is named **pathinfo** and it is optional. It is composed by zero or more path segments that do not refer to an existing physical resource name (e.g. a file, an internal module program or an executable program) but to a logical part (e.g. a command or a qualifier part) that has to be passed separately to the first part of the path that identifies an executable module or program managed by a [web server](https://en.wikipedia.org/wiki/Web_server "Web server"); this is often used to select dynamic content (a document, etc.) or to tailor it as requested (see also: [CGI](https://en.wikipedia.org/wiki/Common_Gateway_Interface "Common Gateway Interface") and PATH_INFO, etc.).
		Example:
			URI: `"http://www.example.com/questions/3456/my-document"`
			where: `"/questions"` is the first part of the _path_ (an executable module or program) and `"/3456/my-document"` is the second part of the _path_ named _pathinfo_, which is passed to the executable module or program named `"/questions"` to select the requested document.
	An **http** or **https** URI containing a _pathinfo_ part without a [query](https://en.wikipedia.org/wiki/URL#query) part may also be referred to as a '[clean URL](https://en.wikipedia.org/wiki/Clean_URL "Clean URL"),' whose last part may be a '[slug](https://en.wikipedia.org/wiki/Clean_URL#Slug "Clean URL").'
	- An optional **query** component preceded by a question mark (`?`), consisting of a [query string](https://en.wikipedia.org/wiki/Query_string "Query string") of non-hierarchical data. Its syntax is not well defined, but by convention is most often a sequence of [attribute–value pairs](https://en.wikipedia.org/wiki/Attribute%E2%80%93value_pair "Attribute–value pair") separated by a [delimiter](https://en.wikipedia.org/wiki/Delimiter "Delimiter").
	- An optional **fragment** component preceded by a [hash](https://en.wikipedia.org/wiki/Number_sign "Number sign") (`#`). The fragment contains a [fragment identifier](https://en.wikipedia.org/wiki/Fragment_identifier "Fragment identifier") providing direction to a secondary resource, such as a section heading in an article identified by the remainder of the URI. When the primary resource is an [HTML](https://en.wikipedia.org/wiki/HTML "HTML") document, the fragment is often an [`id` attribute](https://en.wikipedia.org/wiki/HTML#Attributes "HTML") of a specific element, and web browsers will scroll this element into view.  

| Query delimiter                                                                                                                           | Example                   |
| ----------------------------------------------------------------------------------------------------------------------------------------- | ------------------------- |
| Ampersand (`&`)                                                                                                                           | `key1=value1&key2=value2` |
| Semicolon (`;`)[d](app://obsidian.md/d)([https://en.wikipedia.org/wiki/URL#cite_note-21](https://en.wikipedia.org/wiki/URL#cite_note-21)) | `key1=value1;key2=value2` |

- A web browser will usually [dereference](https://en.wikipedia.org/wiki/Uniform_Resource_Identifier#Resolution "Uniform Resource Identifier") a URL by performing an [HTTP](https://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol "Hypertext Transfer Protocol") request to the specified host, by default on port number 80. URLs using the `https` scheme require that requests and responses be made over a [secure connection to the website](https://en.wikipedia.org/wiki/HTTPS "HTTPS").

---
# Top Level Domain (TLD)
- A **top-level domain** (**TLD**) is one of the [domains](https://en.wikipedia.org/wiki/Domain_name "Domain name") at the highest level in the hierarchical [Domain Name System](https://en.wikipedia.org/wiki/Domain_Name_System "Domain Name System") of the [Internet](https://en.wikipedia.org/wiki/Internet "Internet") after the root domain.
- The top-level domain names are installed in the [root zone](https://en.wikipedia.org/wiki/DNS_root_zone "DNS root zone") of the name space. For all domains in lower levels, it is the last part of the [domain name](https://en.wikipedia.org/wiki/Domain_name "Domain name"), that is, the last non-empty label of a [fully qualified domain name](https://en.wikipedia.org/wiki/Fully_qualified_domain_name "Fully qualified domain name"). For example, in the domain name [www.example.com](https://en.wikipedia.org/wiki/Example.com "Example.com"), the top-level domain is [.com](https://en.wikipedia.org/wiki/.com ".com").
- As of 2015, IANA distinguishes the following groups of top-level domains:
	- [Infrastructure top-level domain](https://en.wikipedia.org/wiki/Top-level_domain#Infrastructure_domain) (ARPA): This group consists of one domain, the [Address and Routing Parameter Area](https://en.wikipedia.org/wiki/.arpa ".arpa"). It is managed by IANA on behalf of the [Internet Engineering Task Force](https://en.wikipedia.org/wiki/Internet_Engineering_Task_Force "Internet Engineering Task Force") for various purposes specified in the [Request for Comments](https://en.wikipedia.org/wiki/Request_for_Comments "Request for Comments") publications.
	- [Generic top-level domains](https://en.wikipedia.org/wiki/Generic_top-level_domain "Generic top-level domain") (gTLD): Top-level domains with three or more characters
	- Generic restricted top-level domains (grTLD): These domains are managed under official ICANN-accredited registrars.
	- [Sponsored top-level domains](https://en.wikipedia.org/wiki/Sponsored_top-level_domain "Sponsored top-level domain") (sTLD): These domains are proposed and sponsored by private agencies or organizations that establish and enforce rules restricting the eligibility to use the TLD. Use is based on community theme concepts; these domains are managed under official ICANN accredited registrars.
	- [country-code top-level domains](https://en.wikipedia.org/wiki/Country_code_top-level_domain "Country code top-level domain") (ccTLD): Two-letter domains established for [countries](https://en.wikipedia.org/wiki/Country "Country") or [territories](https://en.wikipedia.org/wiki/List_of_dependent_territories "List of dependent territories"). With some historical exceptions, the code for any territory is the same as its two-letter [ISO 3166](https://en.wikipedia.org/wiki/ISO_3166 "ISO 3166") code.
    - [Internationalized country code top-level domains](https://en.wikipedia.org/wiki/Internationalized_country_code_top-level_domain "Internationalized country code top-level domain") (IDN ccTLD): ccTLDs in non-Latin character sets (e.g., Arabic, Cyrillic, Greek, Hebrew, or Chinese).
	- [Test top-level domains](https://en.wikipedia.org/wiki/.test ".test") (tTLD): These domains were installed under [.test](https://en.wikipedia.org/wiki/.test ".test") for testing purposes in the IDN development process; these domains are not present in the root zone.

## Domain name registration
- **Select a domain name:**
	Think of a name closely related to your brand or business that's easy to remember and spell. 

- **Check availability:**
    Use a domain search tool on a registrar's website to see if your chosen domain is available. 

- **Choose a registrar:**
    Compare different domain registrars based on price, features, and customer service. 

- **Register the domain:**
    Once you've selected your domain, fill out the required information (including your contact details) and complete the payment to register it. 

- **Review the contract:**
    Carefully read the terms and conditions of your domain registration.

---
# Hosting
**1. Choose a Domain Name**
- **Find a unique and memorable name:** It should be relevant to your website's content and easy to remember.
- **Check availability:** Use a domain registrar's website (like GoDaddy, Namecheap, or Google Domains) to see if the name is available.
- **Select a domain extension:** Common options include .com, .net, .org, .io, .co.

**2. Select a Hosting Provider**
- **Research and compare providers:** Consider factors like:
    - **Price:** Compare costs, look for discounts or bundled offers.
    - **Storage and bandwidth:** Choose a plan that meets your website's needs.
    - **Features:** Look for features like:
        - **Control panel:** (e.g., cPanel, Plesk) for easy website management.
        - **One-click installs:** For popular content management systems (CMS) like WordPress.
        - **Customer support:** 24/7 availability and helpfulness.
        - **Security:** SSL certificates, firewalls, and other security measures.
    - **Uptime:** Choose a provider with a high uptime guarantee (e.g., 99.9%).
- **Popular providers:** Bluehost, HostGator, SiteGround, A2 Hosting, DreamHost.

**3. Purchase Hosting and Domain**
- **Create an account:** With your chosen hosting provider.
- **Purchase a hosting plan:** Select the plan that best suits your needs and budget.
- **Register your domain name:** You can usually register your domain directly through your hosting provider.
- **Point your domain to your hosting:** This connects your domain name to your hosting server. Instructions are usually provided by your hosting provider.

**4. Install and Set Up Your Website**
- **Choose a platform:**
    - **Content Management System (CMS):** WordPress is the most popular choice, but others include Joomla and Drupal.
    - **Static site generators:** (e.g., Jekyll, Hugo) for faster loading speeds.
    - **Build from scratch:** If you have coding skills, you can create a website from scratch using HTML, CSS, and JavaScript.
- **Install your chosen platform:** Many hosting providers offer one-click installs for popular CMS.
- **Design and build your website:** Add content, images, and customize the design to your liking.

**5. Test and Launch**
- **Thoroughly test your website:** Check for broken links, errors, and ensure it looks good on different devices (desktop, mobile, tablet).
- **Publish your website:** Make your website live and accessible to the public.

---
REF: [How The Web Works](https://developer.mozilla.org/en-US/curriculum/core/web-standards/#1.1_how_the_web_works)

---
