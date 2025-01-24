- *JavaScript* is an *interpreted* programming language widely used by websites to provide them functionality.
- It reduces the amount of logical calculations needing to be preformed by the server by allowing them to be performed locally on the client's web browser.
- This helps a website to have functionality of it's own independent of the server making it more dynamic.
- It is *scripting language* (same as interpreted language) meaning the code written is executed line-by-line.
- JavaScript has multiple version:
	- *LiveScript* was the name originally given to when first created.
	- *JScript* was the name given to the reverse engineered version by Microsoft.
	- *ECMAScript* refers to the standardized version of JavaScript by EU's *ECMA International*. Thus some of the version are referred to as *ES5* or *ES6*. The current latest version is ES14 (2023).
- It can be used for both frontend and backend of a website and is widely supported by all browsers.
- There are a few different strategies to make sure your JavaScript only runs after the HTML is parsed:
	- In the internal JavaScript, the script element is placed at the bottom of the body of the document, and therefore only run after the rest of the HTML body is parsed.
	- In the external JavaScript, the script element is placed in the head of the document, before the HTML body is parsed. But because we're using `<script type="module">`, the code is treated as a [module](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Modules) and the browser waits for all HTML to be processed before executing JavaScript modules. (You could also place external scripts at the bottom of the body. But if there is a lot of HTML and the network is slow, it may take a lot of time before the browser can even start fetching and loading the script, so placing external scripts in the head is usually better.)
	- If you still want to use non-module scripts in the document head, which could block the whole page from displaying, and could cause errors because it executes before the HTML is parsed:
	    - For external scripts, you should add the `defer` (or if you don't need the HTML to be ready, the `async`) attribute on the [`<script>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/script) element.
	    - For internal scripts, you should wrap the code in a [`DOMContentLoaded` event listener](https://developer.mozilla.org/en-US/docs/Web/API/Document/DOMContentLoaded_event).
- This is beyond the scope of the tutorial at this point, but unless you need to support very old browsers, you don't have to do this and can just use `<script type="module">` instead.

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
# [Variables](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Variables)
- Variables are used to store data to be reused again and again just by using the name of the variable.
- There are three ways to define a variable in JavaScript:
	- `let`: using let keyword will define it in the scope of the curly braces it's in or file if none.
	- `var`: used in older versions of JavaScript to declare a variable with global scope (not recommended)
	- `const`: As well as variables, you can declare constants. These are like variables, except that:
		- you must initialize them when you declare them
		- you can't assign them a new value after you've initialized them.
- If none of these keywords are used then a global variable is created across all files (not recommended).
## [Naming conventions]()

- If none of these keywords are used then a global variable is created across all files (not recommended). The design of `var` is confusing and error-prone. So `let` was created in modern versions of JavaScript, a new keyword for creating variables that works somewhat differently to `var`, fixing its issues in the process.
- Once you've declared a variable, you can initialize it with a value. You do this by typing the variable name, followed by an equals sign (`"="`), followed by the value you want to give it.

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
# [Variable types](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Variables#variable_types)

- There are a few different types of data we can store in variables.

## [Numbers](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Variables#numbers)

- You can store numbers in variables, either whole numbers like 30 (also called integers) or decimal numbers like 2.456 (also called floats or floating point numbers). 
- You don't need to declare variable types in JavaScript, unlike some other programming languages.
- When you give a variable a number value, you don't include quotes:

```js
let myAge = 17;
```

## [Strings](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Variables#strings)

- Strings are pieces of text. When you give a variable a string value, you need to wrap it in single or double quote marks; otherwise, JavaScript tries to interpret it as another variable name.

```js
let dolphinGoodbye = "So long and thanks for all the fish";
```

## [Booleans](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Variables#booleans)

- Booleans are true/false values — they can have two values, `true` or `false`. These are generally used to test a condition, after which code is run as appropriate. 
- So for example, a simple case would be:

```js
let iAmAlive = true;
```

- Whereas in reality it would be used more like this:

```js
let test = 6 < 3;
```

- This is using the "less than" operator (`<`) to test whether 6 is less than 3. As you might expect, it returns `false`, because 6 is not less than 3! You will learn a lot more about such operators later on in the course.

## [Arrays](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Variables#arrays)

- An array is a single object that contains multiple values enclosed in square brackets and separated by commas.
- Try entering the following lines into console:

```js
let myNameArray = ["Chris", "Bob", "Jim"];
let myNumberArray = [10, 15, 40];
```

- Once these arrays are defined, you can access each value by their location within the array. Try these lines:

```js
myNameArray[0]; // should return 'Chris'
myNumberArray[2]; // should return 40
```

- The square brackets specify an index value corresponding to the position of the value you want returned. 
- You might have noticed that arrays in JavaScript are zero-indexed: the first element is at index 0.

## [Objects](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Variables#objects)

- In programming, an object is a structure of code that models a real-life object. 
- You can have an object that represents a box and contains information about its width, length, and height, or you could have an object that represents a person, and contains data about their name, height, weight, what language they speak, how to say hello to them, and more.
- Try entering the following line into your console:

```js
let dog = { name: "Spot", breed: "Dalmatian" };
```

- To retrieve the information stored in the object, you can use the following syntax:

```js
dog.name;
```

---
## [Dynamic typing](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Variables#dynamic_typing)

- JavaScript is a "dynamically typed language", which means that, unlike some other languages, you don't need to specify what data type a variable will contain (numbers, strings, arrays, etc.).
- For example, if you declare a variable and give it a value enclosed in quotes, the browser treats the variable as a string:

```js
let myString = "Hello";
```

- Even if the value enclosed in quotes is just digits, it is still a string — not a number — so be careful:

```js
let myNumber = "500"; // oops, this is still a string
typeof myNumber;
myNumber = 500; // much better — now this is a number
typeof myNumber;
```

---
