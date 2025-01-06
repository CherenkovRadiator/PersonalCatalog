- *JavaScript* is an *interpreted* programming language widely used by websites to provide them functionality.
- It reduces the amount of logical calculations needing to be preformed by the server by allowing them to be performed locally on the client's web browser.
- This helps a website to have functionality of it's own independent of the server making it more dynamic.
- It is *scripting language* (same as interpreted language) meaning the code written is executed line-by-line.
- JavaScript has multiple version:
	- *LiveScript* was the name originally given to when first created.
	- *JScript* was the name given to the reverse engineered version by Microsoft.
	- *ECMAScript* refers to the standardized version of JavaScript by EU's *ECMA International*. Thus some of the version are referred to as *ES5* or *ES6*. The current latest version is ES14 (2023).
- It can be used for both frontend and backend of a website and is widely supported by all browsers.

---
# Basics
- JavaScript has it's specific keywords and syntax to write code.
- A word followed by `()` is a function. A function is used to perform task(s). These can also take value between the parentheses to perform task(s) based on them. Like:
```js
alert("hello world");
```
Here the function `alert` is used to create a pop-up with the string 'hello world' printed out in that pop-up.
- JavaScript has a number of useful functions and they can be referenced through  the documentations online.
- Every line in JavaScript ends with a `;` which tells the compiler that a line has ended.
- A *string* is the text that we want to be interpreted as normal English text rather than code. These can be specified with either single or double quotes.
- `//` are used to place single line comments and `/**/` for multi line comments.
---
# Data Type
- JavaScript has multiple data type:
	- String: it represents a string of characters. Represented using quotation marks (single or double)
	- Number: refers to numerical data.
	- Boolean: these are *true* and *false* values.
	- Array: it is a collection of values. Values are put inside `[]`
	- `null`: used to represent intentional absence of value
	- object: represents a collection of key-value pairs.
	- Undefined: these are the variables that have been created but have nothing assigned. like `var variable;`
- `typeof()` function can be used to get the type of a data.
---
# Variables
- Variables are used to store data to be reused again and again just by using the name of the variable.
- There are three ways to define a variable in JavaScript:
	- `let`: using let keyword will define it in the scope of the curly braces it's in or file if none.
	- `const`: this will define constant variables that cannot be changed.
	- `var`: used in older versions of JavaScript to declare a variable with global scope (not recommended)
- If none of these keywords are used then a global variable is created across all files (not recommended).
## Naming conventions
1. Variable
	- **Camel Case:**
	    - Start with a lowercase letter.
	    - Subsequent words start with an uppercase letter.
	    - Example: `firstName`, `userCount`, `productPrice`
	- **Descriptive Names:**
	    - Choose names that clearly indicate the purpose of the variable.
	    - Avoid single-letter names (except for short-lived loop counters like `i`, `j`).
2. Functions:
	- **Camel Case:** Similar to variables, but often use verbs to describe the function's action.
    - Example: `calculateArea`, `getUserData`, `displayMessage`
	- **Clear and Concise:** Function names should be concise but still convey their purpose.
3. Constants:
	- **Screaming Snake Case:**
	    - All uppercase letters with underscores separating words.
	    - Indicates that the value should not be changed.
	    - Example: `MAX_VALUE`, `PI`, `API_URL`
4. Classes:
	- **Pascal Case:**
	    - Start each word with an uppercase letter.
	    - Example: `User`, `Product`, `Order`
5. Avoid Reserved Keywords:
	- Do not use JavaScript reserved words (e.g., `if`, `else`, `for`, `function`, `let`, `const`) as variable or function names.
6. Consistency:
	- **Within a Project:** Maintain consistent naming conventions throughout your entire project.
	- **Team Standards:** If working in a team, adhere to the team's agreed-upon naming conventions.
---
# Expressions and Operators
- At a high level, an *expression* is a valid unit of code that resolves to a value. 
- There are two types of expressions: those that have side effects (such as assigning values) and those that purely _evaluate_.
- All complex expressions are joined by *operators*
- Some of these operators are:
## Assignment operators

| Name                                                                                                                                           | Shorthand operator | Meaning          |
| ---------------------------------------------------------------------------------------------------------------------------------------------- | ------------------ | ---------------- |
| [Assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Assignment)                                           | `x = f()`          | `x = f()`        |
| [Addition assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Addition_assignment)                         | `x += f()`         | `x = x + f()`    |
| [Subtraction assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Subtraction_assignment)                   | `x -= f()`         | `x = x - f()`    |
| [Multiplication assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Multiplication_assignment)             | `x *= f()`         | `x = x * f()`    |
| [Division assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Division_assignment)                         | `x /= f()`         | `x = x / f()`    |
| [Remainder assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Remainder_assignment)                       | `x %= f()`         | `x = x % f()`    |
| [Exponentiation assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Exponentiation_assignment)             | `x **= f()`        | `x = x ** f()`   |
| [Left shift assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Left_shift_assignment)                     | `x <<= f()`        | `x = x << f()`   |
| [Right shift assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Right_shift_assignment)                   | `x >>= f()`        | `x = x >> f()`   |
| [Unsigned right shift assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Unsigned_right_shift_assignment) | `x >>>= f()`       | `x = x >>> f()`  |
| [Bitwise AND assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_AND_assignment)                   | `x &= f()`         | `x = x & f()`    |
| [Bitwise XOR assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_XOR_assignment)                   | `x ^= f()`         | `x = x ^ f()`    |
| [Bitwise OR assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_OR_assignment)                     | `x \|= f()`        | `x = x \| f()`   |
| [Logical AND assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Logical_AND_assignment)                   | `x &&= f()`        | `x && (x = f())` |
| [Logical OR assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Logical_OR_assignment)                     | `x \|= f()`        | `x \| (x = f())` |
| [Nullish coalescing assignment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Nullish_coalescing_assignment)     | `x ??= f()`        | `x ?? (x = f())` |
## Comparison Operators
|Operator|Description|Examples returning true|
|---|---|---|
|[Equal](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Equality) (`==`)|Returns `true` if the operands are equal.|`3 == var1`<br><br>`"3" == var1`<br><br>`3 == '3'`|
|[Not equal](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Inequality) (`!=`)|Returns `true` if the operands are not equal.|`var1 != 4   var2 != "3"`|
|[Strict equal](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Strict_equality) (`===`)|Returns `true` if the operands are equal and of the same type. See also [`Object.is`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Object/is) and [sameness in JS](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Equality_comparisons_and_sameness).|`3 === var1`|
|[Strict not equal](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Strict_inequality) (`!==`)|Returns `true` if the operands are of the same type but not equal, or are of different type.|`var1 !== "3"   3 !== '3'`|
|[Greater than](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Greater_than) (`>`)|Returns `true` if the left operand is greater than the right operand.|`var2 > var1   "12" > 2`|
|[Greater than or equal](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Greater_than_or_equal) (`>=`)|Returns `true` if the left operand is greater than or equal to the right operand.|`var2 >= var1   var1 >= 3`|
|[Less than](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Less_than) (`<`)|Returns `true` if the left operand is less than the right operand.|`var1 < var2   "2" < 12`|
|[Less than or equal](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Less_than_or_equal) (`<=`)|Returns `true` if the left operand is less than or equal to the right operand.|`var1 <= var2   var2 <= 5`|
## Arithmetic Operators
|Operator|Description|Example|
|---|---|---|
|[Remainder](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Remainder) (`%`)|Binary operator. Returns the integer remainder of dividing the two operands.|12 % 5 returns 2.|
|[Increment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Increment) (`++`)|Unary operator. Adds one to its operand. If used as a prefix operator (`++x`), returns the value of its operand after adding one; if used as a postfix operator (`x++`), returns the value of its operand before adding one.|If `x` is 3, then `++x` sets `x` to 4 and returns 4, whereas `x++` returns 3 and, only then, sets `x` to 4.|
|[Decrement](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Decrement) (`--`)|Unary operator. Subtracts one from its operand. The return value is analogous to that for the increment operator.|If `x` is 3, then `--x` sets `x` to 2 and returns 2, whereas `x--` returns 3 and, only then, sets `x` to 2.|
|[Unary negation](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Unary_negation) (`-`)|Unary operator. Returns the negation of its operand.|If `x` is 3, then `-x` returns -3.|
|[Unary plus](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Unary_plus) (`+`)|Unary operator. Attempts to [convert the operand to a number](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Number#number_coercion), if it is not already.|`+"3"` returns `3`.<br><br>`+true` returns `1`.|
|[Exponentiation operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Exponentiation) (`**`)|Calculates the `base` to the `exponent` power, that is, `base^exponent`|`2 ** 3` returns `8`.  <br>`10 ** -1` returns `0.1`.|
## Bitwise Operators
|                                                                                                                           |           |                                                                                                                                                                         |
| ------------------------------------------------------------------------------------------------------------------------- | --------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [Bitwise AND](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_AND)                    | `a & b`   | Returns a one in each bit position for which the corresponding bits of both operands are ones.                                                                          |
| [Bitwise OR](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_OR)                      | `a \| b`  | Returns a zero in each bit position for which the corresponding bits of both operands are zeros.                                                                        |
| [Bitwise XOR](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_XOR)                    | `a ^ b`   | Returns a zero in each bit position for which the corresponding bits are the same. [Returns a one in each bit position for which the corresponding bits are different.] |
| [Bitwise NOT](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_NOT)                    | `~ a`     | Inverts the bits of its operand.                                                                                                                                        |
| [Left shift](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Left_shift)                      | `a << b`  | Shifts `a` in binary representation `b` bits to the left, shifting in zeros from the right.                                                                             |
| [Sign-propagating right shift](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Right_shift)   | `a >> b`  | Shifts `a` in binary representation `b` bits to the right, discarding bits shifted off.                                                                                 |
| [Zero-fill right shift](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Unsigned_right_shift) | `a >>> b` | Shifts `a` in binary representation `b` bits to the right, discarding bits shifted off, and shifting in zeros from the left.                                            |
## Logical Operators
| Operator                                                                                                                             | Usage            | Description                                                                                                                                                                                           |
| ------------------------------------------------------------------------------------------------------------------------------------ | ---------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [Logical AND](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Logical_AND) (`&&`)                        | `expr1 && expr2` | Returns `expr1` if it can be converted to `false`; otherwise, returns `expr2`. Thus, when used with Boolean values, `&&` returns `true` if both operands are true; otherwise, returns `false`.        |
| [Logical OR](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Logical_OR) (`\|`)                          | `expr1 \| expr2` | Returns `expr1` if it can be converted to `true`; otherwise, returns `expr2`. Thus, when used with Boolean values, `\|` returns `true` if either operand is true; if both are false, returns `false`. |
| [Nullish coalescing operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Nullish_coalescing) (`??`) | `expr1 ?? expr2` | Returns `expr1` if it is neither `null` nor `undefined`; otherwise, returns `expr2`.                                                                                                                  |
| [Logical NOT](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Logical_NOT) (`!`)                         | `!expr`          | Returns `false` if its single operand can be converted to `true`; otherwise, returns `true`.                                                                                                          |

# Strings
- Strings can be concatenated (joined) together using `+` operator.
- We can get the number of characters of a string using it's `length` property like `"Anjleena".length` will return the number of character in the word "Anjleena".
- `prompt()` function can be used to take a string input from the user.
- Parts of a string can be extracted using the `slice()` function. It take the starting and ending index value of the part to be extracted from the string.
- Casing for the strings can be changed to upper or lower case using the functions `toUpperCase()` and `toLoweCase()` respectively.  like `var upperName = "Anjleena".toUpperCase()`.
- Variables can be put inside the strings using syntax `$(var)`.
---
# Numbers
- JavaScript allows for basic arithmetic to be performed on number. This is done using the operators like:
	- `*` for multiplication
	- `+` for addition
	- `-` for subtraction
	- `/` for division
	- `%` to get the remainder when first operand is divided by the second
	- `**` for exponentiation. first operand is raised to the power of second
	- `++` for increment a number. unary operator. like `num++;`
	- `-` Decrement, decreases the operand by one. There are two ways to do it:
		- `num--` will return the `num` first and then decrease it.
		- `--num` will decrease the `num` first and then return it.
	- `+` unary plus, used to convert strings to number like `"12"+;`
	- `-` unary negation, used to convert numbers to negative if not already, can also work with strings and convert them directly to negative.
---
