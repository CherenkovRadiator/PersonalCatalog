- *Grid* is CSS allows us to create 2D table like layouts for our webpage.
- To create a grid first we need a container tag that will contain all the other child elements (rows/columns). like:
```html
<div class="container">
    <div class="child"></div>
    <div class="child"></div>
    <div class="child"></div>
</div>
```
- The `display` property of this container element is set to `grid` to create a grid using it, along with some of the grid's properties
```css
.container {
    display: grid;
    grid-template-rows: 1fr 1fr;
    grid-template-columns: 1fr 2fr;
}
```
Here `grid-template-rows` is used to define the ratios for the rows which in this case is 1:1 meaning all the rows are of same size and `grid-template-columns` is used to define the ratios for the columns which in this case is 1:2 meaning the 2nd column is twice the size of the 1st.
- The rows and columns in a grid are collectively called *tracks*. The rows are row tracks and columns are column tracks.
- A *grid item* is a combination of multiple cells be it vertically across a rows or horizontally across a columns.
---
# Grid sizing
- Size for rows and columns are defined using `grid-template-rows` and `grid-template-columns`.
- These take values for each consecutive row / column in order.
- The values can be in any unit and some additional units specific to grids. like:
	- `fr` is used to define sizes in fraction / ratios.
	- `auto` can be used to set sizes automatically based on the height of the content and width of the column the elements aligns with.
	- `minmax()` can be used to define a range of size separated by a comma.
	- `repeat()` can be used when need to assign same values multiple times. The first argument is the number of time it needs to be repeated and second value is the size that needs to repeated.
- `grid-template` can be used to assign values for rows and columns at once separated by `/` respectively.
---
# Grid placement
- `grid-column`: it is used to define how a grid item should span horizontally across columns. like `grid-column: span 2` will result in an item spanning across two columns.
	- It is shorthand for two other properties namely `grid-column-start` and `grid-column-end`.
	- `grid-column-start`defines the column from which the item should start spanning from.
	- `grid-column-end` defined the column to which the item should span to.
	- The values for `grid-column-start` and `grid-column-end` is numerical value starting from 1 defining the first column from left to *n* defining the last column in the right
	- Another way is by using negative value where -1 would represent the right most column in the grid.
- `grid-row` is the corresponding property same as `grid-column` used to define spanning of an item across a row track.
- Similar to flexbox grids also have an `order` property defining the order in which the items should be arranged.
---
