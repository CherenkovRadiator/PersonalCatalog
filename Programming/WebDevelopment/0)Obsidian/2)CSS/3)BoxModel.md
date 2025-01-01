# Box Model
- In CSS every element is considered to be a box. 
![[css-box-model.svg]]
- `height` and `width` properties can be used to change their height and width respectively.
- `border`: specifies the design for the border of an element.
	- It takes 3 value - thickness, style and color respectively. Each of these values can also be defined separately using their own properties.
		- `border-width`: for border thickness. 
			- Can take *thin, thick, medium* or any specific *length* as values.
		- `border-style`: for border style
			- Can take *none, hidden, dotted, dashed, solid, double* and *groove, ridge, inset, outset (for respective 3d borders)* as values.
		- `border-color`: for border color
			- Can take *color (CSS color values) and *transparent* as values.	
		- For each of the above properties values can also be defined for specific sides by passing multiple values in defined order. top-right-bottom-left.
		- Similarly there are properties for each specific side of the border and also sides combined with specific values like `border-top`, `border-top-color`, `border-top-style`, `border-top-width` etc.
- `padding`: it defines padding for an element which is the space between the contents of the element and it's borders.
- `margin`: it defines margin for an element which is the space around the border of the element.
---
