- *CSS* stands for *Cascading Style Sheet* is a style sheet language used for specifying the presentation and styling of a document written in markup language such as HTML or XML.
- Styling through CSS is done using properties which are key-value pairs.
- Styling can be achieved in multiple ways like:
	- *inline*: By using *Style* attribute in a tag. Almost all the HTML tags support it. For example: `<body style="bgcolor:red">`.
	- *internal*: By using `<style>` tag in the head of the file. The contents between the tag will be CSS code to style the page.
	- *external*: By using external CSS file. This file is attached to the webpage using `<link rel="stylesheet" href="link_to_stylesheet">` tag.
---
# Code
In CSS properties are set using the CSS selectors. CSS selectors are used to specify the elements to which the properties are to be set. There are different types of selectors:
- *Simple Selectors*
	- *Element Selectors*: These are the name of the tags themselves to which the properties are to be set.
	- *Class Selectors*: These are the selectors that use class names to select the elements. 
		- It is specified using `.` before the class' name. 
		- In HTML these classes can be given to the elements using `class` attribute.
		- These can be made further specific using the name of the tag followed by the class like: `p.class_name {}`, in this case the `<p>` tags that contain that class are selected.
	- *ID Selectors*: These are the selectors that used ID names to select the elements. 
		- It is specified using `#` before then ID's name. 
		- In HTML these classes can be given to the elements using `id` attribute.
	- *Group Selectors*: If more than one selectors have same properties these selectors can be specified together using `,` like: `p, h1, ol {}`.
	- [*Attribute Selector*](https://developer.mozilla.org/en-US/docs/Web/CSS/Attribute_selectors): Attributes can be used to select elements like `element[attribute]`, for example `a[target]`, this selects anchor tags with `target` attributes. It can be used with some operators to be more specific based on the values of the attribute like `|=`, `~=`, `^=` etc.
	- *Universal Selector*: It is the wildcard character `*` that specifies all the tags.
- *Combinator Selectors*: A combinator is something that explains the relationship between selectors.
	- *Descendent Selector (space)*: This specifies the elements that are inside another element like `div p {}` specifies all the `<p>` tags inside a `<div>` tag.
	- *Child Combinator (>)*:  This specifies the elements that are directly under (or first child of) the specified element like `div > p {}` specifies all the `<p>` tags that are directly under (or first child of) a `<div>` tag.
	- *Next sibling combinator (+)* : This specifies elements that are directly after (or are sibling of) another specified tag like `div + p {}` specifies all `<p>` tags that are directly after a `<div>` tag.
	- *Subsequent-sibling combinator (~)*: This specifies elements that are subsequently after another specified tag like `div ~ p {}` specifies all the `<p>` tag after a `<div>` tag.
- *Pseudo-classes*: pseudo class is used to define special state of an element. For example:
	- `:hover`: defines the state of an element when hovering over it.
	- `:nth-child`: specifies the *nth* child of an element. the value of n is pass using `()` after the name of pseudo class like `p:nth-child(n)`
- *Pseudo-elements*: pseudo elements specify specific parts of an element. For example:
	- `::after`: insert something after the contents of specified elements.
	- `::before`: insert something before the contents of specified elements.
---
# The cascade - Specificity and Inheritance
- *Cascading* is the specified priority scheme to determine which declaration applies if more than one declaration of a property match a particular element.
- *Position*: The property that is applied at the last gets applied.
- *Specificity*: The property that is more specific gets applied. Priority from high to low: 
	1) *ID Selector*
	2) *Attribute Selector*
	3) *Class Selector*
	4) *Element Selector*
- *Type*: The property gets applied depending on the type. Priority from high to low:
	1) *Inline*
	2) *Internal*
	3) *External*
- *importance*: The property that has `!important` value set to it gets applied no matter what.
---
