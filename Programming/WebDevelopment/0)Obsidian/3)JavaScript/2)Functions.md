- JavaScript allows us to create our own functions. The syntax for creating our functions is:
```Js
function fucntion_name(arg1, arg2...) {
	// Code to execute
	return value; // Optional: return a value
}
```
- These function can also take parameters (`arg1`, `arg2` etc.) that will become inputs to the function when called (a.k.a. arguments) which can be used inside the function as variables.
- Functions in JavaScript are *First-Class object* meaning they can be stored and passed to other functions as variables.
- Return values for a function can be defined using `reuturn` keyword.
- There are multiple ways in which the functions are declared/used.
---
# Different types of functions
1. Named Functions:
	These are the most common type of function. They have a name and can be called by their name.
```js
function greet(name) {
  console.log(`Hello, ${name}!`);
}
greet("John"); // Output: Hello, John!
```

2. Anonymous Functions:
	These functions don't have a name. They are often used as callbacks or passed as arguments to other functions.
```js
const greet = function(name) {
  console.log(`Hello, ${name}!`);
};
greet("Alice"); // Output: Hello, Alice!
```

3. Arrow Functions:
	Introduced in ES6, arrow functions provide a more concise syntax for writing functions.
```js
const greet = (name) => console.log(`Hello, ${name}!`);
greet("Bob"); // Output: Hello, Bob!
```

4. Constructor Functions:
	These functions are used to create objects. They are called using the `new` keyword.
```js
function Person(name, age) {
  this.name = name;
  this.age = age;
}
const john = new Person("John", 25);
```

5. Generator Functions:
	These functions can pause and resume their execution, yielding multiple values.
```js
function* numberGenerator() {
  yield 1;
  yield 2;
  yield 3;
}
const gen = numberGenerator();
console.log(gen.next().value); // 1
console.log(gen.next().value); // 2
```

6. Async Functions:
	These functions make it easier to work with asynchronous operations using the `await` keyword.
```js
async function fetchData() {
  const response = await fetch("https://api.example.com/data");
  const data = await response.json();
  return data;
}
```

7. Callback Functions:
	These are functions that are passed as arguments to other functions and are executed later.
```js
function doSomething(callback) {
  // ... some code
  callback();
}
doSomething(() => console.log("Callback executed!"));
```

8. IIFE (Immediately Invoked Function Expression):
	These are functions that are executed immediately after they are defined.
```js
(function() {
  console.log("IIFE executed!");
})(); 
```

---
