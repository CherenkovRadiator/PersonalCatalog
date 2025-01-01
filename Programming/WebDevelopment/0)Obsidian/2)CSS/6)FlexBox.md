- *Flexbox* in CSS are a way to layout the contents on a webpage in a row or column. 
- It is 1D meaning it takes a number of elements/items and arranges them as a single row or column.
- It is created by first creating an element that will act as a *container* for all the other elements to be formatted. 
```html
<div class="container">
    <div class="child"></div>
    <div class="child"></div>
    <div class="child"></div>
</div>
```
- The `display` property of this container element is set to flex to create a flexbox using it.
```css
.container {
    display: flex;
}
```
- Now the flexbox's properties can be set to the container or the child elements to further enhance the design.
- `flex` property is different from all the other `display` properties. Once a container element is set to `flex`, the container element itself along with it's child elements will get positioned and formatted according to the rules of flexbox.
- By default all the child elements are arranged as *inline* element with their width defaulting to width of the content.
- The flexbox itself (the container element) will act as a block element.
- `inline-flex` display value can be used to create a flexbox that is an inline element.
---
# Flex-direction
- *main-axis* is the direction in which the child elements are stacked in.
- *cross-axis* is the direction in the direction perpendicular to the *main-axis*.
- `flex-direction` can be used to change the direction in which the child elements stack. Can be `row` or `column` which is stacking from right to left and top to bottom respectively.
- `flex-basis` uses these directions to change width and height of elements with respect to the direction.
---
# Flexbox layout
## Flex wrap
- If the *flex-items* (child elements) don't fit on the screen/container, they will flow out of the container or out of sight on screen needing to scroll to see them.
- `flex-wrap` can be used to define weather the *flex-items* should wrap inside the container of not.
- If set to `nowrap` the *flex-items* will flow out of the screen/container.
- If set to `wrap` the *flex-items* will wrap to the next line inside the container.
## Justify
- `justify-content` sets the distribution of flex-items along the main axis.
- Some of the values are:
	- `flex-start` which distributes the items from in the direction of the main axis starting from the starting end.
	- `flex-end` which distributes the items from in the direction opposite to the main axis starting form the ending end.
	- `center` which distributes the items evenly from the center of the main-axis.
## Align
- `align-item` sets the distribution of the flex-items along the cross-axis.
- Some of the values are:
	- `flex-start` which settles all the items to the start of the cross-axis.
	- `flex-end` which settles all the items to the end of the cross-axis.
	- `flex-center` which settles all the items to the center of the cross-axis.
- Note that the `align-item` property only takes effect if the `flex-wrap` is set to `nowrap`.
- This property can also be set to an individual flex-item which will make only that item align itself accordingly.
- `align-content` is same as `align-item`, the only difference is that it is used when the `flex-wrap` property is set to `wrap`.
---
# Flex sizing
- Size for flex items can be set using:
	- `max-width` / `min-width`: which is maximum and minimum width a flex item can have.
	- `flex-basis`: sets the width/height of flex-items with respect to the direction of the main-axis.
	- `width` / `height`: sets the width and height of flex-items irrespective of the main-axis.
	- `content-width`: it is the width of the content without wrapping it.
- The priority in which these sizing is implemented is:
	content width < width < flex-basis < min-width/max-width
-  `flex-shrink` if turned on defines whether the items of the flexbox should shrink or not. It will shrink the items to the defined width/height if any or content width of the longest items.
- `flex-grow` if turned on defines whether the items of the flexbox should grow or not. It will grown the width/height of the items to the max available.
---
