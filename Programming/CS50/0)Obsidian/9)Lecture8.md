# Internet
The Internet is the global system of interconnected computer networks that used the Internet Protocol Suit (TCP/IP) to communicate between networks and devices.
[[1)Internet]]

---
# TCP/IP
This is a set of protocols that internet uses to transfer data packets from point A to B. 
- **IP**: IP stands for Internet Protocol which is a number in the format #.#.#.# (where each # represents a byte) which uniquely identifies a device on the internet. An IP datagram contains two IP addresses: source IP address and destination IP address,
- **Sequence number**: These are the numbers which define the order in which the packets should be sent/received.
- **Port**: These specific which program should open the packet being received.
---
# Server
It is a computer on the internet just like any other that responds to queries to provide the requested information.
- **DNS**: These are the servers who's purpose is to provide the IP address associated with a domain name.
- **DHCP**: These are the servers that manage the distribution of IP addresses in a network.
---
# HTTP and HTTPS
- **Hyper Text Transfer Protocol** is a protocol that standardizes the actual data inside a packet that a web browser receives.
- Hyper Text Transfer Protocol Secure is the secure version of HTTP. It encrypts the data to make it more secure.
[[0)Web]]
---
# Parts of a URL
- `https://` is the protocol being used to access the website.
- `www` is called a host name. It used to be an indication for world wide web to let people know that they're accessing the web in it's early ages but this now is just a configuration detail and isn't required for URL.
- `example.com` is the called domain name. It is the name of the website that uniquely identifies it on the internet.
- `example.com/` is the root of the website.
- `.com` is called top level domain. This allows people to buy a domain name under that top level domain. These are country code like `.uk`, `.us`, `.in` etc. or representative of an organization like `.com` for commercial, `.org` for organization etc.
- `example.com/path` is the path to a file on the domain. This could be file or folder.
---
# GET and POST
GET and POST are two ways in which data is formatted and transmitted over the internet. GET is used to create requests to get certain information from a server like a website. POST is used to send information to a server like information filled in a form, image, file uploads etc.
This type of request is included in HTTP header that contains the type of request and key value pairs with information regarding the packet.
```
GET / HTTP/2
Host: www.harverd.edu
...
```
It is an example of first few lines of a HTTP header that, `GET` is the type of request `HTTP/2` is the HTTP version that will be used and `Host: www.harverd.edu` is the requested website.
```
HTTP/2 200
Content-Type: text/html
...
```
Above is an example of a response header that a server might send back, `HTTP/2` is the version of HTTP that it agreed to use, `200` is the status code of the response (`GOOD` in this case), `Content-Type: text/html` is the type of file being sent in the response of the request.

---
# HTML
HTML stands for Hyper-Text Markup Language. It is not a programming language but a markup language that servers as basic structure for a website.
## Boiler plate
This is the basic structure of a website:
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <title>Document</title>
</head>
<body>
	<!-- The content of the website goes here -->
</body>
</html>
```
- `<!DOCTYPE html>`:  defines the html version, html5 in this case
- `<html lang="en">` and `</html>`: are starting and ending tags for html document respectively. With language of the page set to English
- `<head>` and `</head>`: are starting and ending tags for head part of the webpage. This holds the meta data for the webpage.
- `<body>` and `</body>`: are starting and ending tags for body of the webpage, the contains the main content of the webpage.
## Tags
- html tags also have arguments, these are the key values pairs in the tag
- `/` right before a tag name means that the tag is the closing/ending tag.
- some html tags can also take arguments that define additional functionality for that tag. like `<img src="/path">`
- `<p>` and `</p>` are used for defining a paragraphs
```html
<p> 
Lorem ipsum dolor, sit amet consectetur adipisicing elit. Rerum est sed quis, praesentium, quisquam voluptatibus at saepe vitae nisi, officia eveniet dolores unde non. Expedita alias animi minima neque soluta?
</p>
```
- `<h1>`, `<h2>` … `<h6>` with respective closing tags are used for heading with `<h1>` being the largest.
```html
<h1>Heading 1</h1>
```
- `<ul>` with respective closing tag is used to create an unordered list and `<ol>` with it's respective closing tag is used to create an ordered list. The items of the lists are placed between `<li>` and it's closing tag between the tags of the list. for example:
```html
<ol>
	<li>Item 1</li>
	<li>Item 2</li>
	<li>Item 3</li>
</ol>	
<ul>
	<li>Item 1</li>
	<li>Item 2</li>
	<li>Item 3</li>
</ul>
```
- `<table>` tag is used with it's closing tag to create tables with `<tr>` tag with it's closing tag for a row in the table and `<td>` with it's closing tag for data of each cell.
```html
<table>
	<tr>
		<th>col 1</th>
		<th>col 2</th>
		<th>col 3</th>
	</tr>
	<tr>
		<td>r1 c1</td>
		<td>r1 c2</td>
		<td>r1 c3</td>
	</tr>
	<tr>
		<td>r2 c1</td>
		<td>r2 c2</td>
		<td>r2 c3</td>
	</tr>
</table>
```
This will result in a table like:
```
+-------+-------+-------+
| col1  | col2  | col3  |
+-------+-------+-------+
| r1 c1 | r1 c2 | r1 c3 |
+-------+-------+-------+
| r2 c1 | r2 c2 | r2 c3 |
+-------+-------+-------+
```
- `<img>` tag is used to insert an image, it takes an argument `src` for the source/path of the image like:
```html
<img src="./Path">
```
This tag also takes ang argument called `alt` which is used to place an alternate text that is used by site crawlers or reader or is presented is the image doesn't load for some reason.
- `<video>` tag with it's closing tag is used to insert a video. `<source>` tag is put between it to specify the source of the video file using `src` argument and type of the file using `type` argument. `<video>` tag also takes additional arguments that define the features of the video like sound and controls. These arguments don't take any value in particular.
```html
<video>
	<source src="./path" type="video/mp4">
</video>
```
- `<a>` with it's closing tag also known as anchor tag is used to create hyperlinks. It takes `src` argument to specify the source of the hyperlink and the placeholder text for the link is placed between the tags.
```html
<a src="https://www.example.com">Example</a>
```
- `<meta>` tag is used inside the `head` tags to define certain features of the website which are defined using it's arguments.
- `<form>` tag with it's closing tag is used to create a form that takes inputs defined between the tags and passes them to a backed or a server.
	- `form` tag has an argument called `action`that defines the backend to which the request has to be sent and `method` which specifies the type of request (GET or POST) to be made.
	- input fields are created between the `form` tags using the `<input>` tag.
	- `input` tag takes argument that equip it with various feature like `name` which allows the input to be passed as a key value pair, `autofocus` to automatically focus on the field etc.
- Special entities can be used to insert special character using HTML. like: `&#169` for copyright symbol.
- HTML5 has semantic tags that clearly define the purpose of the tag to the developer and the browser.
[[0)HTML]]
---
# Regular Expression
Regular expressions or regex are expression used to match data based on patterns.
- `.`: any single character (except line terminators)
- `*`: zero or more times
- `+`: one or more times
- `?`: 0 or 1 time
- `{n}`: n occurrences
- `{n,m}`: at least n occurrences, at most m occurrences
- `[0123456789]`: any one of the enclosed character
- `[0-9]`: any one of the range of characters
- `\d`: any digit
- `\D`:  any character that is not a digit
---
# CSS
 CSS (Cascading Style Sheet) is used to add design and style to a webpage. There are multiple ways to incorporate CSS into the webpage, either as attributes to a tag itself or using `<style>` tag in the head of the file or as an external CSS file linked using `<link>` tag.
 - `div` tag is used to get a rectangular division of the page. This allows for addressing and applying style to an entire section and group of tags at once using cascading since tags like `<p>` can be put nested inside the `<div>` tag and have the styling applied to them.
 Styling in CSS is done using set of key-value pairs. The keys in this case are called properties.
 - `style` attribute can be used to set these properties directly for an HTML tag like:
```html
<div style="test-aligne: center; font-size: large">
	This text is large and in center.
</div> 
```
- Multiple properties in CSS are separated by `;`.
- If a certain property is to a certain tag like `<div>` the same property will be applied to the tags inside it as well.
- Selectors are name of certain tags or classes in CSS that are used to set properties of multiple instances of those tags or classes.
- `<style>` tag with it's closing tag is used inside head to set design properties using selectors for the webpage. Like:
```html
<style>
body
{
	text-aligne: center;
}
</style>
```
- Separate file for CSS can also be made using selectors to style and linked to the webpage using `<link hrep="link/path to the file" rel="stylesheet">` in the head of the webpage.
- Tags can have unique ID's that can be addressed by CSS using `#` symbol to style them.
[[0)CSS]]
---
# Frameworks
There are third part frameworks like *bootstrap* that can be used to add style to the webpage using the CSS file and respective classes and IDs provided by the framework.

---
# JavaScript

- JavaScript is a programming language that allows you to add interactivity and dynamic behavior to web pages
-  JavaScript can manipulate the HTML DOM (Document Object Model), which is a tree-like representation of the web page structure in the browser's memory. This enables dynamic updates and modifications to the page content
- Event listeners allow you to execute JavaScript code in response to specific events, such as clicking a button, submitting a form, or even changes in the user's location
- Important JavaScript concepts:
- Variables: Used to store data, declared using the let keyword
- Arrays: Similar to Python lists, used to store collections of data
- Functions: Blocks of reusable code that can be called to perform specific tasks
- DOM manipulation: Accessing and modifying HTML elements using functions like document.`querySelector` and properties like `innerHTML`
- Event handling: Using `addEventListener` to respond to browser events
- Control flow: Using conditional statements (like if and else) and loops (like for) to control the execution of code
- JavaScript can access browser features like geolocation, providing information about the user's location with their permission
- Client-side validation using JavaScript and regular expressions can improve user experience by catching errors early, but it is not secure and should not be relied upon for sensitive data
- Server-side validation is necessary to ensure data integrity and security.
[[0)JavaScript]]
---
