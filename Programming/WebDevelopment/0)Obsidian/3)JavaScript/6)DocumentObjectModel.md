- The Document Object Model (DOM) is a programming interface for web documents. It represents the page so that programs can change the document structure, style, and content.
- The DOM represents the document as nodes and objects; that way, programming languages can interact with the page.
- A web page is a document that can be either displayed in the browser window or as the HTML source. 
- In both cases, it is the same document but the Document Object Model (DOM) representation allows it to be manipulated. 
- As an object-oriented representation of the web page, it can be modified with a scripting language such as JavaScript.
- All of the properties, methods, and events available for manipulating and creating web pages are organized into objects.
- The DOM is built using multiple APIs that work together. The core [DOM](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model) defines the entities describing any document and the objects within it.
- This is expanded upon as needed by other APIs that add new features and capabilities to the DOM.

# [DOM and JavaScript](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model/Introduction#dom_and_javascript)
- The DOM is not a programming language, but without it, the JavaScript language wouldn't have any model or notion of web pages, HTML documents, SVG documents, and their component parts. 
- The document as a whole, the head, tables within the document, table headers, text within the table cells, and all other elements in a document are parts of the document object model for that document. 
- They can all be accessed and manipulated using the DOM and a scripting language like JavaScript.
- The DOM is not part of the JavaScript language, but is instead a Web API used to build websites.
- You use the API directly in JavaScript from within what is called a _script_, a program run by a browser.
- The API can be used for the [`document`](https://developer.mozilla.org/en-US/docs/Web/API/Document) or [`window`](https://developer.mozilla.org/en-US/docs/Web/API/Window "window") objects to manipulate the document itself, or any of the various elements in the web page (the descendant elements of the document).

---
# [Fundamental data types](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model/Introduction#fundamental_data_types)

| Data type (Interface)                                                           | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| ------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [`Document`](https://developer.mozilla.org/en-US/docs/Web/API/Document)         | When a member returns an object of type `document` (e.g., the `ownerDocument` property of an element returns the `document` to which it belongs), this object is the root `document` object itself. The [DOM `document` Reference](https://developer.mozilla.org/en-US/docs/Web/API/Document) chapter describes the `document` object.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| [`Node`](https://developer.mozilla.org/en-US/docs/Web/API/Node)                 | Every object located within a document is a node of some kind. In an HTML document, an object can be an element node but also a text node or attribute node.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| [`Element`](https://developer.mozilla.org/en-US/docs/Web/API/Element)           | The `element` type is based on `node`. It refers to an element or a node of type `element` returned by a member of the DOM API. Rather than saying, for example, that the [`document.createElement()`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createElement) method returns an object reference to a `node`, we just say that this method returns the `element` that has just been created in the DOM. `element` objects implement the DOM `Element` interface and also the more basic `Node` interface, both of which are included together in this reference. In an HTML document, elements are further enhanced by the HTML DOM API's [`HTMLElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement) interface as well as other interfaces describing capabilities of specific kinds of elements (for instance, [`HTMLTableElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement) for [`<table>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/table) elements). |
| [`NodeList`](https://developer.mozilla.org/en-US/docs/Web/API/NodeList)         | A `nodeList` is an array of elements, like the kind that is returned by the method [`document.querySelectorAll()`](https://developer.mozilla.org/en-US/docs/Web/API/Document/querySelectorAll). Items in a `nodeList` are accessed by index in either of two ways:<br><br>- list.item(1)<br>- list[1]<br><br>These two are equivalent. In the first, `item()` is the single method on the `nodeList` object. The latter uses the typical array syntax to fetch the second item in the list.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| [`Attr`](https://developer.mozilla.org/en-US/docs/Web/API/Attr)                 | When an `attribute` is returned by a member (e.g., by the `createAttribute()` method), it is an object reference that exposes a special (albeit small) interface for attributes. Attributes are nodes in the DOM just like elements are, though you may rarely use them as such.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| [`NamedNodeMap`](https://developer.mozilla.org/en-US/docs/Web/API/NamedNodeMap) | A `namedNodeMap` is like an array, but the items are accessed by name or index, though this latter case is merely a convenience for enumeration, as they are in no particular order in the list. A `namedNodeMap` has an `item()` method for this purpose, and you can also add and remove items from a `namedNodeMap`.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
- **Note:** Because the vast majority of code that uses the DOM revolves around manipulating HTML documents, it's common to refer to the nodes in the DOM as **elements**, although strictly speaking not every node is an element.
- It's common to refer to any [`Attr`](https://developer.mozilla.org/en-US/docs/Web/API/Attr) node as an `attribute`

---
# [DOM interfaces](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model/Introduction#dom_interfaces)

## [Interfaces and objects](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model/Introduction#interfaces_and_objects)
- In DOM, "interfaces" refer to a set of defined methods and properties that allow developers to interact with and manipulate the structure of a web page, essentially providing a standardized way to access and modify different elements within a document using programming languages.
- Each interface represents a specific type of node in the DOM hierarchy, like "Element", "Document", or "Node", enabling developers to perform actions on those elements like getting their content, changing attributes, or adding new child nodes
- An "object" refers to a representation of a specific element within an HTML document, allowing developers to access and manipulate parts of a web page through JavaScript by treating each element as a distinct object with its own properties and methods.

## [Core interfaces in the DOM](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model/Introduction#core_interfaces_in_the_dom)
- This section lists some of the most commonly-used interfaces in the DOM.
- The `document` and `window` objects are the objects whose interfaces you generally use most often in DOM programming.
- In simple terms, the `window` object represents something like the browser, and the `document` object is the root of the document itself.
- `Element` inherits from the generic `Node` interface, and together these two interfaces provide many of the methods and properties you use on individual elements.
- These elements may also have specific interfaces for dealing with the kind of data those elements hold.
- The following is a brief list of common APIs in web and XML page scripting using the DOM.
	- [`document.querySelector()`](https://developer.mozilla.org/en-US/docs/Web/API/Document/querySelector)
	- [`document.querySelectorAll()`](https://developer.mozilla.org/en-US/docs/Web/API/Document/querySelectorAll)
	- [`document.createElement()`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createElement)
	- [`Element.innerHTML`](https://developer.mozilla.org/en-US/docs/Web/API/Element/innerHTML)
	- [`Element.setAttribute()`](https://developer.mozilla.org/en-US/docs/Web/API/Element/setAttribute)
	- [`Element.getAttribute()`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getAttribute)
	- [`EventTarget.addEventListener()`](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/addEventListener)
	- [`HTMLElement.style`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/style)
	- [`Node.appendChild()`](https://developer.mozilla.org/en-US/docs/Web/API/Node/appendChild)
	- [`window.onload`](https://developer.mozilla.org/en-US/docs/Web/API/Window/load_event "window.onload")
	- [`window.scrollTo()`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollTo)
- This example uses a [`<div>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/div) element containing a [`<textarea>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/textarea) and two [`<button>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/button) elements. When the user clicks the first button we set some text in the `<textarea>`. When the user clicks the second button we clear the text. We use:
	- [`Document.querySelector()`](https://developer.mozilla.org/en-US/docs/Web/API/Document/querySelector) to access the `<textarea>` and the button
	- [`EventTarget.addEventListener()`](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/addEventListener) to listen for button clicks
	- [`Node.textContent`](https://developer.mozilla.org/en-US/docs/Web/API/Node/textContent) to set and clear the text.

```html
<div class="container">
  <textarea class="story"></textarea>
  <button id="set-text" type="button">Set text content</button>
  <button id="clear-text" type="button">Clear text content</button>
</div>
```

```js
const story = document.body.querySelector(".story");

const setText = document.body.querySelector("#set-text");
setText.addEventListener("click", () => {
  story.textContent = "It was a dark and stormy night...";
});

const clearText = document.body.querySelector("#clear-text");
clearText.addEventListener("click", () => {
  story.textContent = "";
});
```

---
## [HTML DOM](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model#html_dom)

- A document containing HTML is described using the [`Document`](https://developer.mozilla.org/en-US/docs/Web/API/Document) interface, which is extended by the HTML specification to include various HTML-specific features.
- In particular, the [`Element`](https://developer.mozilla.org/en-US/docs/Web/API/Element) interface is enhanced to become [`HTMLElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement) and various subclasses, each representing one of (or a family of closely related) elements.
- The HTML DOM API provides access to various browser features such as tabs and windows, CSS styles and stylesheets, browser history, etc. 
- See also: [HTML DOM API](https://developer.mozilla.org/en-US/docs/Web/API/HTML_DOM_API) documentation.

## [SVG DOM](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model#svg_dom)

- Similarly, a document containing SVG is also described using the [`Document`](https://developer.mozilla.org/en-US/docs/Web/API/Document) interface, which is extended by the SVG specification to include various SVG-specific features. 
- In particular, the [`Element`](https://developer.mozilla.org/en-US/docs/Web/API/Element) interface is enhanced to become [`SVGElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement) and various subclasses, each representing an element or a family of closely related elements.
- See also: [SVG API](https://developer.mozilla.org/en-US/docs/Web/API/SVG_API) documentation.

---
## [What is a DOM tree?](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model/Using_the_Document_Object_Model#what_is_a_dom_tree)

- A **DOM tree** is a [tree structure](https://en.wikipedia.org/wiki/Tree_structure) whose nodes represent an HTML or XML document's contents. 
- Each HTML or XML document has a DOM tree representation.

---
## [What does the Document API do?](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model/Using_the_Document_Object_Model#what_does_the_document_api_do)

- The Document API, also sometimes called the DOM API, allows you to modify a DOM tree in _any way you want_. 
- It enables you to create any HTML or XML document from scratch or to change any contents of a given HTML or XML document.
- Web page authors can edit the DOM of a document using JavaScript to access the `document` property of the global object.
- This `document` object implements the [`Document`](https://developer.mozilla.org/en-US/docs/Web/API/Document) interface.

---
## [The NodeSelector interface](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model/Locating_DOM_elements_using_selectors#the_nodeselector_interface)

- This specification adds two new methods to any objects implementing the [`Document`](https://developer.mozilla.org/en-US/docs/Web/API/Document), [`DocumentFragment`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment), or [`Element`](https://developer.mozilla.org/en-US/docs/Web/API/Element) interfaces:

### [`querySelector()`](https://developer.mozilla.org/en-US/docs/Web/API/Element/querySelector "querySelector()")

- Returns the first matching [`Element`](https://developer.mozilla.org/en-US/docs/Web/API/Element) node within the node's subtree. If no matching node is found, `null` is returned.

### [`querySelectorAll()`](https://developer.mozilla.org/en-US/docs/Web/API/Element/querySelectorAll "querySelectorAll()")

- Returns a [`NodeList`](https://developer.mozilla.org/en-US/docs/Web/API/NodeList) containing all matching `Element` nodes within the node's subtree, or an empty `NodeList` if no matches are found.
- **Note:** The [`NodeList`](https://developer.mozilla.org/en-US/docs/Web/API/NodeList) returned by [`querySelectorAll()`](https://developer.mozilla.org/en-US/docs/Web/API/Element/querySelectorAll "querySelectorAll()") is not live, which means that changes in the DOM are not reflected in the collection. This is different from other DOM querying methods that return live node lists.
See also: [`Element.querySelector()`](https://developer.mozilla.org/en-US/docs/Web/API/Element/querySelector), [`Element.querySelectorAll()`](https://developer.mozilla.org/en-US/docs/Web/API/Element/querySelectorAll) methods.

---
## [Selectors](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model/Locating_DOM_elements_using_selectors#selectors)

- The selector methods accept [selectors](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_selectors) to determine what element or elements should be returned. This includes [selector lists](https://developer.mozilla.org/en-US/docs/Web/CSS/Selector_list) so you can group multiple selectors in a single query.
- To protect the user's privacy, some [pseudo-classes](https://developer.mozilla.org/en-US/docs/Web/CSS/Pseudo-classes) are not supported or behave differently. For example [`:visited`](https://developer.mozilla.org/en-US/docs/Web/CSS/:visited) will return no matches and [`:link`](https://developer.mozilla.org/en-US/docs/Web/CSS/:link) is treated as [`:any-link`](https://developer.mozilla.org/en-US/docs/Web/CSS/:any-link).
- Only elements can be selected, so [pseudo-classes](https://developer.mozilla.org/en-US/docs/Web/CSS/Pseudo-classes) are not supported.

---
[DOM Specification](https://dom.spec.whatwg.org/)

---
