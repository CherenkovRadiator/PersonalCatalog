- *HTML* stands for *Hyper-Text Markup language* it is a markup language that is used to give structure to a website. 
- Hyper-Text refers to a text that links to another. Analogs to *hyperlinks*.
- It uses *tags* enclosed in `< >` to define the contents of the website. 
- Generally these come in pair of a starting tag and a closing tag. Here a closing tag is defined using `/` before the name of the tag. For example:
```html
<p>This is a paragraph</p>
```
- There are also *self closing tags* that don't need a closing tag and are used to define a certain element themselves like `<hr>`, `<img>` etc.
	- Self closing tags with a `/` before the closing bracket is also valid like `<hr />`.
- Tags can also contain *arguments* that can be used to alter there behavior. These arguments are given by there name after the name of the tag. These can be a value containing *key-value pairs* or standalone arguments to toggling certain behavior.
- Everything including the tags and it's content is collectively called an *element*.
---
# HTML Boilerplate

```html
<!DOCTYPE html>

<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
	<!-- Contents of the website -->
</body>
</html>
```
HTML Boilerplate includes code that is required to create a website. This defines that  the page is an HTML webpage, the title this webpage will have, language the page will have, character set the page will use, what part of the webpage is meta data and what is the actual body etc.
Here:
- `<!DOCTYPE html>` is used to tell the browser that it is an HTML5 webpage.
- `<html>` tag is used to define that it is an HTML webpage.
- `<head>` tag is used to include the contents of the website that won't be displayed as it's main content.
- `<meta>` tag is used for meta data of the page. This includes information for web browser such as the encoding of the page, how to scale and view pages etc.
- `<title>` tag is used to give the webpage a title that will be displayed as the name of the tab the webpage is open in.
- `<body>` tag is used to define the actual content to be displayed of the webpage.
---
# Tags
- `<h1>`: Heading tags are used to create headings. These include tags from `<h1>` to `<h6>` with `<h1>` being the biggest heading tag.
- `<p>`: Paragraph tags are used to create separate paragraphs.
- `<hr>`: Horizontal rule tag is used to create a horizontal line for defining separation.
- `<br>`: Line break tag is used to give a line break.
- List tags:
	- `<ol>`: Ordered list tag is used to create ordered list.
	- `<ul>`: Unordered list tag is used to create unordered list.
	- `<li>`: List item tag is used to create individual items of a list.
	- Another list can also be put inside a list. This will create a list with indentation acting as a sub-list.
- `<a>`: Anchor tag is used to create hyperlinks. 
	- `href` argument is passed with link to other page as value in quotes. 
	- The text placed between the tags is used as the placeholder text for the link. Like `<a href="www.google.com">Google</a>`.
- `<img>`: Image tag is used to place images on the page. 
	- It takes `src` argument with link to the image as value. It is a self-closing tag.
	- It can also take an `alt` argument with the value being an alternate text that is displayed if the image isn't able to load and used by screen readers.
	- It is a self-closing tag.
- `<div>`: div tag is used to create a container for other elements. This facilitates working using CSS box model as it gives us a horizontal division of the page of block type.
---
