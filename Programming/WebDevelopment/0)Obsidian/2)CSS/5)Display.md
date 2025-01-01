# Display Property
- *block*: these elements take up the entire width of the webpage. 
	- Elements coming after block elements are placed below block element.
	- There width can be changed but that will no result in the next element to get placed along side it.
- *inline*: these elements take up only the width require by the element.
	- Elements coming after inline elements are placed right next the inline element (unless the next element is block element). 
	- Height and width of these elements can no be changed and they will default to the size of the element.
- *inline-block*: these elements allow us to have multiple elements that go on to the same line like *inline* elements while also allowing us to change there height and width of those elements.
- *none*: If the property is set to *none*, the elements will not be visible.
---
# Float
- `float` property allow for other content to be wrapped around a block element. Such as text around an image.
- If we want for an element to be excluded from it we can set `clear` property.
---
# Responsive Websites
## Media Queries
`@media` followed by a condition is used to apply CSS based on the condition, It is used just like a selector along with condition. These are conditions a like max width, min width etc. The CSS is applied as long as the condition is fulfilled.
## Grid
*CSS Grid* allows us to format the website in the form of a 2D grid. It uses `grid` *display* property on the parent element and then related properties on the child elements. It allows for a responsive website design.
## Flexbox
*Flexbox* is similar to grid but in 1D grid  (i.e. either a row or a column). It uses `flex` *display* property on the parent element and then related properties on the child elements similar to grid. It allows for a responsive website design.
## Bootstrap
*Bootstrap* is a CSS framework i.e. it is CSS code written by someone else that can be used in our code by attaching related documents to easy the create and management of designing elements of a website.

---
# Media Query
`@media` is used in place of a selector to allow different CSS rules to be applied based on different condition of the screen such as certain ranges of width of the screen, certain orientation of the screen etc. For example:
```CSS
@media (max-width=200px) {
	/*CSS code*/
}
```
Above code will apply the defined CSS rules when the webpage has the width less than 200px.
Multiple condition can be combined together using `and` like:
```css
@media (min-width=200px) and (max-width=500px) {
	/*CSS code*/
}
```
Above code will apply the defined CSS rules when the webpage has the width between 200px to 500px.
Media query comes with much more keywords of it's own for further functionality like:
```css
@media (orientation:landscape) {
	/*CSS code*/
}
```
Above CSS code will be applied if the orientation of the webpage is landscape.
More can be found at [MDN docs](https://developer.mozilla.org/en-US/docs/Web/CSS/@media).

---
