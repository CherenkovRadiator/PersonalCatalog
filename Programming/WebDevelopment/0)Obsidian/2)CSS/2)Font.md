# Font
- `font-size`: allows to change font size. Units to change font size:
	*Absolute units*
	- `px`: size relative to a pixel. 
		- 1/96th of an inch.
	- `pt`: refers to changing in points. 
		- This is same unit used in MS office for text size. 
		- 1/72nd of an inch
	*Relative units*
	- `em`: It is a relative unit and it's size depends on the size set for the element. i.e. if the size for the element is set to be 10px then 1 `em` for that element will be equal to 10px
		- `em` has cascading nature hence by default 1 `em` is set to the font size of the parent element.
	- `rem`: stands for root em.
		- It is a relative measurement unit that refers to the font size of the root element (`html` tag in case of a webpage) of a document.
		- The default size for it in browsers is 16px.
	- `vw`: stands for viewport width.
		- It is the percentage of the width of the viewport.
	- `vh`: stands for viewport height.
		- same as `vw` but instead for height of the viewport.
- `font-weight`: allows to change the weight of a font i.e. it's boldness.
	- `normal`:  default value.
	- `bold`: defines thicker characters than at `normal`. 
	- `bolder`: defines thicker character than at `bold`.
	- `lighter`: defines thinner character than at `normal`.
	- *100-900*: multiples of 100 from 100 to 900. Defines thickness with 100 being the lightest, 400 being same as `normal` and 700 same as `bold`.
	- `initial`: defines default.
	- `inherit`: defines to take the same value as that of it's parent.
- `font-family`: specifies the font to be used for an element.
	- Can take multiple fonts as *fallback* which are the fonts that will be used in case other specified font isn't supported or available.
	- There are two types of font family names:
		- *family-name*: these are the exact family names to used like "times", "courier", "Arial" etc.
		- *generic-family*: these are the general category of fonts the use as fallback. Any available font from specified category will be used like "serif", "cursive", "monospace" etc.
- `text-align`: specifies horizontal alignment of the text:
	- `left`: makes text to align to the *left* side.
	-  `right`: makes text to align to the *right* side.
	-  `center`: makes text to align at the *center*.
	- `justify`: makes lines of text to have equal length.
- `text-align-last`: specifies horizontal alignment of the last line of the text.
	- Takes all the same values as `text-align`.
---
