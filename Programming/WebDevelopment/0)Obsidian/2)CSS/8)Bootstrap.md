- *Bootstrap* is a CSS framework. It is a collection of already written CSS code that can directly be added to the our own code and used.
- It can be added to our code using link to the specific CSS file of bootstrap attached to our code using `<link>` tag.
- Once the link to the file has been added the CSS can be applied using the predefined classes created in the CSS code form bootstrap.
- Bootstrap is open source meaning anyone can see it's code.
- It's documentation can be used to know the specific bootstrap classes to be used in our code.
- It can be useful to create beautiful responsive websites quickly.
- There are other frameworks like bootstrap like: foundation, tailwind etc.
- Pros:
	- It can make developing websites easy and fast.
	- It helps keep the design across website consistent.
	- It insure better browser compatibility eliminating the need to check it ourselves.
- Cons:
	- Can create *class bloat* which happens when a lot of CSS defining classes get placed inside the HTML file itself.
	- Limits the ability to customize the website.
---
# Bootstrap layout
- Bootstrap makes it easy to create layouts using responsive `container` class and adjustable `col` class.
- To create layouts using bootstrap we need to create a `container` class `div` which will contain the `row` each of which will contain the `col` with the item to be placed. like:
```html
<div class="container">
    <div class="row">
        <div class="col">Item</div>
    </div>
</div>
```
- Bootstrap allows for multiple option for `container` class depending on the need for style and responsiveness.
- The `row` class defined a row of items in the container and `col` individual cell for each column in that row.
- Simply putting `col` represents the size of just one column. If the same is appended with a number from 1-12 like `col-4` , will represent a size of that number or columns.
- Bootstrap contains *breakpoints* which define the size of an element. These are:

| **Breakpoint**    | **Class infix** | **Dimensions** |
| ----------------- | --------------- | -------------- |
| X-Small           | *None*          | <576px         |
| Small             | `sm`            | ≥576px         |
| Medium            | `md`            | ≥768px         |
| Large             | `lg`            | ≥992px         |
| Extra large       | `xl`            | ≥1200px        |
| Extra extra large | `xxl`           | ≥1400px        |
These breakpoints can be added to `col` using `-` to define better responsiveness.

---
# Bootstrap components
- Bootstrap components are pre-built and pre-styled elements like button, forms, navbar etc.
- Documentation is provided to learn to use each of these components.
- Some of these components require JavaScript to work provided with the CSS.
- Bootstrap also provides free to use SVG icons. They can be included directly by including the required HTML for it as given by it's documentation.
- 