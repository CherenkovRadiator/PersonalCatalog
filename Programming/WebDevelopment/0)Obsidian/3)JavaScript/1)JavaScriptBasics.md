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
## Basics
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
## Data Type
- JavaScript has multiple data type:
	- String: it represents a string of characters. Represented using quotation marks (single or double)
	- Number: refers to numerical data.
	- Boolean: these are *true* and *false* values.
	- Array: it is a collection of values. Values are put inside `[]`
	- `null`: used to represent intentional absence of value
	- object: represents a collection of key-value pairs.
	- Undefined: these are the variables that have been created but have nothing assigned. like `var variable;`
- `typeof()` function can be used to get the type of a data.
## Variables
- Variables are used to store data to be reused again and again just by using the name of the variable.
- There are three ways to define a variable in JavaScript:
	- `let`: using let keyword will define it in the scope of the curly braces it's in or file if none.
	- `const`: this will define constant variables that cannot be changed.
	- `var`: used in older versions of JavaScript to declare a variable with global scope (not recommended)
- If none of these keywords are used then a global variable is created across all files (not recommended).
### Naming conventions
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
# Strings
- Strings can be concatenated (joined) together using `+` operator.
- We can get the number of characters of a string using it's `length` property like `"Anjleena".length` will return the number of character in the word "Anjleena".
- `prompt()` function can be used to take a string input from the user.
- Parts of a string can be extracted using the `slice()` function. It take the starting and ending index value of the part to be extracted from the string.
- Casing for the strings can be changed to upper or lower case using the functions `toUpperCase()` and `toLoweCase()` respectively.  like `var upperName = "Anjleena".toUpperCase()`.
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
