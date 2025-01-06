# Flow control using if-else
- Syntax for JavaScript flow control using if-else statement is:
```js
if (condition) {
	// code to execute
} else if (condition) {
	// code to execute
} else {
	//code to execute
}
```
- In if-else statements, if the condition provided with `if` or `else if` is true then the code in that block is executed and rest of the if-else statements of the same control flow are ignored. If neither `if` nor any of the `else if` conditions result in true, then the code in `else` block is executed.
- In one control flow there can only be one `if` and one `else` block, but can be multiple `else-if` blocks.
- If not needed, `else` and `else-if` blocks can be excluded altogether but not `if` block.

---
# Switch Cases
- Syntax for JavaScript switch cases is:
```js
switch (expression) {
	case (value):
		// Code
	default:
		// Code
}
```
- In switch cases, if the value of expression provided in `switch` statement is *truthy* when compared with the value in any of the `case` statements then the corresponding block of code is executed.
- If none of the `case` statements result in true then the code block for `default` is executed.
- There can be multiple `case` statements but only one `switch` and one `defualt` statements.
- If one block in this flow control is executed then the rest are ignored.