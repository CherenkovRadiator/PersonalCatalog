- *Internet* is a network of connected devices and networks that share data across each other. It refers to the actual infrastructure consisting the devices, switched, routers, servers etc.
- *World Wide Web* or *web* refers to the service built on the internet used to transmit data using the internet like websites, webpages, hyperlink etc.
- A *Website* is a collection of webpages under a domain name and a *webpage* is a document on the web that is accessed using web browser.
- A *Domain Name* is a human readable name for an IP address (or a set of IP addresses) given to a device on the internet that act as a server.
- *URL* (Uniform Resource Locator) is an address on the web pointing to a particular resource.
---
# Structure
## Internet
- All the infrastructure connected together like devices, router, servers etc. is collectively known as internet. Internet uses TCP/IP model to to transmit data.

## World Wide Web
- World Wide Web is an information system that enables content sharing over the internet. This allows for the transfer of web resources to be accessed over the Internet according to specific rules of the Hyper Text Transfer Protocol (HTTP). 
- It relies on the server-client model to share data where a server device "servers" or sends out it's stored data to the client who receives it.
- *Servers* and *Clients* are simply devices connected to the internet, the terms simply define there function during an information exchange.

## Web Browser
- It is an application that allows access to the web and it's content in a user friendly manner.

## IP address and Domain Name
- Every device or network on the internet has an IP address. IP addresses are used to uniquely identify a device or a network on the internet. Thus each server and client have IP address that identify them on the internet. 
- An IP address is in the form off `x.x.x.x` where `x` represents an 8-bit integer value.
- Remembering these IP addresses for each website is inconvenient thus for convenience sake we use *Domain Names*.
- Domain names are human readable names that are specific to server(s) serving content over the internet.
- DNS (Domain Name Server) are used to convert these domain names in to IP addresses that web works on.

## Website
- A domain name for a website points towards the root of the website. This root is simply a directory under which the contents of the website are stored.
- Root is indicated by `/` after the URL of the website itself and followed is path to files under this root.
- URL structure:
	`https://www.google.com/$PATH` here:
	- `https` is the protocol in use to for transferring the content back and forth between the server and the client.
	- `www` tells the browser to that we're accessing World Wide Web.
	- `google` is the domain name of the server we're accessing.
	- `.com` is referred to as sub-domain. This usual indicates to what kind of association the server belongs to such as `.com` for commercial, `.org` for non-profit organizations, `.edu` for educational institutes etc. or which country the server is from such as `.in` for India, `.us` for United State, `.jp` for Japan etc.
	- `/` is the root of the website (the root directory under which the contents of the website are stored).
	- `$PATH` here is a variable which referrers to any file path under the root of the website that we are accessing.
- When we enter this domain name into the browser *resolves* the name to an IP address using DNS and the browser using that IP address connects us to the website.
- The connection to website returns the contents of the website which consists of generally three type of files:
	- *HTML*: stands for *Hyper-Text Markup Language* which is used to create the structure of the website.
	- *CSS*: stands for *Cascading Style Sheet* which is used to give design to website.
	- *JavaScript*: which is a programming language used to give functionality to the website.
	A Website can be created using just the HTML but other components are used to make to further useful. Also while these 3 types of files are generally found in websites there can be many more specific to the contents and how the website is designed and developed such as media files, files for other programming languages such as php etc.
---
