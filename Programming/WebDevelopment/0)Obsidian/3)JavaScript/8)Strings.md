# [Declaring strings](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Strings#declaring_strings)

- Strings are dealt with similarly to numbers at first glance, but there some notable differences. 
- To start with, enter the following lines:

```js
const string = "The revolution will not be televised.";
console.log(string);
```

- Just like with numbers, we are declaring a variable, initializing it with a string value, and then returning the value. 
- The only difference here is that when writing a string, you need to surround the value with quotes.
- If you don't do this, or miss one of the quotes, you'll get an error. Try entering the following lines:

```js
const badString1 = This is a test;
const badString2 = 'This is a test;
const badString3 = This is a test';
```

- These lines don't work because any text without quotes around it is interpreted as a variable name, property name, reserved word, or similar.
- If the browser doesn't recognize the unquoted text, then an error is raised (e.g., "missing; before statement"). If the browser can detect where a string starts but not its end (owing to the missing second quote), it reports an "unterminated string literal" error. 
- The following will work if you previously defined the variable `string` — try it now:

```js
const badString = string;
console.log(badString);
```

- `badString` is now set to have the same value as `string`.

## [Single quotes, double quotes, and backticks](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Strings#single_quotes_double_quotes_and_backticks)

- In JavaScript, you can choose single quotes (`'`), double quotes (`"`), or backticks (`` ` ``) to wrap your strings in. 
- All of the following will work:

```js
const single = 'Single quotes';
const double = "Double quotes";
const backtick = `Backtick`;

console.log(single);
console.log(double);
console.log(backtick);
```

- You must use the same character for the start and end of a string, or you will get an error:

```js
const badQuotes = 'This is not allowed!";
```

- Strings declared using single quotes and strings declared using double quotes are the same, and which you use is down to personal preference — although it is good practice to choose one style and use it consistently in your code.
- Strings declared using backticks are a special kind of string called a [_template literal_](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Template_literals). In most ways, template literals are like normal strings, but they have some special properties:
	- you can [embed JavaScript](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Strings#embedding_javascript) in them
	- you can declare template literals over [multiple lines](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Strings#multiline_strings)

---
# [Embedding JavaScript](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Strings#embedding_javascript)

- Inside a template literal, you can wrap JavaScript variables or expressions inside `${ }`, and the result will be included in the string:

```js
const name = "Chris";
const greeting = `Hello, ${name}`;
console.log(greeting); // "Hello, Chris"
```

- You can use the same technique to join together two variables:

```js
const one = "Hello, ";
const two = "how are you?";
const joined = `${one}${two}`;
console.log(joined); // "Hello, how are you?"
```

- Joining strings together like this is called _concatenation_.

## [Concatenation in context](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Strings#concatenation_in_context)

- Let's have a look at concatenation being used in action:

```html
<button>Press me</button>
<div id="greeting"></div>
```

```js
const button = document.querySelector("button");

function greet() {
  const name = prompt("What is your name?");
  const greeting = document.querySelector("#greeting");
  greeting.textContent = `Hello ${name}, nice to see you!`;
}

button.addEventListener("click", greet);
```

- Here, we are using the [`window.prompt()`](https://developer.mozilla.org/en-US/docs/Web/API/Window/prompt "window.prompt()") function, which prompts the user to answer a question via a popup dialog box and then stores the text they enter inside a given variable — in this case `name`. We then display a string that inserts the name into a generic greeting message.

## [Concatenation using "+"](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Strings#concatenation_using)

- You can use `${}` only with template literals, not normal strings. You can concatenate normal strings using the `+` operator:

```js
const greeting = "Hello";
const name = "Chris";
console.log(greeting + ", " + name); // "Hello, Chris"
```

- However, template literals usually give you more readable code:

```js
const greeting = "Hello";
const name = "Chris";
console.log(`${greeting}, ${name}`); // "Hello, Chris"
```

## [Including expressions in strings](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Strings#including_expressions_in_strings)

- You can include JavaScript expressions in template literals, as well as just variables, and the results will be included in the result:

```js
const song = "Fight the Youth";
const score = 9;
const highestScore = 10;
const output = `I like the song ${song}. I gave it a score of ${
  (score / highestScore) * 100
}%.`;
console.log(output); // "I like the song Fight the Youth. I gave it a score of 90%."
```

---
# [Multiline strings](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Strings#multiline_strings)

- Template literals respect the line breaks in the source code, so you can write strings that span multiple lines like this:

```js
const newline = `One day you finally knew
what you had to do, and began,`;
console.log(newline);

/*
One day you finally knew
what you had to do, and began,
*/
```

- To have the equivalent output using a normal string you'd have to include line break characters (`\n`) in the string:

```js
const newline = "One day you finally knew\nwhat you had to do, and began,";
console.log(newline);

/*
One day you finally knew
what you had to do, and began,
*/
```

- See [Template literals](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Template_literals) reference page for more examples and details of advanced features.

---
# [Including quotes in strings](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Strings#including_quotes_in_strings)

- Since we use quotes to indicate the start and end of strings, how can we include actual quotes in strings? We know that this won't work:

```js
const badQuotes = "She said "I think so!"";
```

- One common option is to use one of the other characters to declare the string:

```js
const goodQuotes1 = 'She said "I think so!"';
const goodQuotes2 = `She said "I'm not going in there!"`;
```

- Another option is to _escape_ the problem quotation mark.
- Escaping characters means that we do something to them to make sure they are recognized as text, not part of the code. 
- In JavaScript, we do this by putting a backslash just before the character. Try this:

```js
const bigmouth = 'I\'ve got no right to take my place…';
console.log(bigmouth);
```

- You can use the same technique to insert other special characters. 
- See [Escape sequences](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Lexical_grammar#escape_sequences) for more details.

---
# [Numbers vs. strings](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Strings#numbers_vs._strings)

- What happens when we try to concatenate a string and a number? Let's try it in our console:

```js
const name = "Front ";
const number = 242;
console.log(name + number); // "Front 242"
```

- You might expect this to return an error, but it works just fine.
- How numbers should be displayed as strings is fairly well-defined, so the browser automatically converts the number to a string and concatenates the two strings.
- If you have a numeric variable that you want to convert to a string or a string variable that you want to convert to a number, you can use the following two constructs:
- The [`Number()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Number/Number) function converts anything passed to it into a number if it can. Try the following:
	```js
    const myString = "123";
    const myNum = Number(myString);
    console.log(typeof myNum);
    // number
    ```

- Conversely, the [`String()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/String) function converts its argument to a string. Try this:

	```js
    const myNum2 = 123;
    const myString2 = String(myNum2);
    console.log(typeof myString2);
    // string
    ```

- These constructs can be really useful in some situations.
- For example, if a user enters a number into a form's text field, it's a string. 
- However, if you want to add this number to something, you'll need it to be a number, so you could pass it through `Number()` to handle this.

---
# [Strings as objects](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Useful_string_methods#strings_as_objects)

- Most values can be used as if they are objects in JavaScript. When you create a string, for example by using

```js
const string = "This is my string";
```

- Although the variable itself isn't an object, it still has a large number of properties and methods available to it, by virtue of being usable as an object when accessing properties.
- You can see this if you go to the [`String`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String) object page and look down the list on the side of the page!

## [Finding the length of a string](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Useful_string_methods#finding_the_length_of_a_string)

- This is easy — you use the [`length`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/length) property. Try entering the following lines:

```js
const browserType = "mozilla";
browserType.length;
```

- This should return the number 7, because "mozilla" is 7 characters long.

## [Retrieving a specific string character](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Useful_string_methods#retrieving_a_specific_string_character)

- On a related note, you can return any character inside a string by using **square bracket notation** — this means you include square brackets (`[]`) on the end of your variable name. Inside the square brackets, you include the number of the character you want to return, so for example to retrieve the first letter you'd do this:

```js
browserType[0];
```

- To retrieve the last character of _any_ string, we could use the following line, combining this technique with the `length` property we looked at above:

```js
browserType[browserType.length - 1];
```

- The length of the string "mozilla" is 7, but because the count starts at 0, the last character's position is 6; using `length-1` gets us the last character.

## [Testing if a string contains a substring](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Useful_string_methods#testing_if_a_string_contains_a_substring)

- Sometimes you'll want to find if a smaller string is present inside a larger one (we generally say _if a substring is present inside a string_). 
- This can be done using the [`includes()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/includes) method, which takes a single [parameter](https://developer.mozilla.org/en-US/docs/Glossary/Parameter) — the substring you want to search for.

- It returns `true` if the string contains the substring, and `false` otherwise.

```js
const browserType = "mozilla";

if (browserType.includes("zilla")) {
  console.log("Found zilla!");
} else {
  console.log("No zilla here!");
}
```

- Often you'll want to know if a string starts or ends with a particular substring. This is a common enough need that there are two special methods for this: [`startsWith()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/startsWith) and [`endsWith()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/endsWith):

```js
const browserType = "mozilla";

if (browserType.startsWith("zilla")) {
  console.log("Found zilla!");
} else {
  console.log("No zilla here!");
}
```

```js
const browserType = "mozilla";

if (browserType.endsWith("zilla")) {
  console.log("Found zilla!");
} else {
  console.log("No zilla here!");
}
```

## [Finding the position of a substring in a string](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Useful_string_methods#finding_the_position_of_a_substring_in_a_string)

- You can find the position of a substring inside a larger string using the [`indexOf()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/indexOf) method. 
- This method takes two [parameters](https://developer.mozilla.org/en-US/docs/Glossary/Parameter) – the substring that you want to search for, and an optional parameter that specifies the starting point of the search.
- If the string contains the substring, `indexOf()` returns the index of the first occurrence of the substring. If the string does not contain the substring, `indexOf()` returns `-1`.

```js
const tagline = "MDN - Resources for developers, by developers";
console.log(tagline.indexOf("developers")); // 20
```

- Starting at `0`, if you count the number of characters (including the whitespace) from the beginning of the string, the first occurrence of the substring `"developers"` is at index `20`.

```js
console.log(tagline.indexOf("x")); // -1
```

- This, on the other hand, returns `-1` because the character `x` is not present in the string.

- So now that you know how to find the first occurrence of a substring, how do you go about finding subsequent occurrences? You can do that by passing in a value that's greater than the index of the previous occurrence as the second parameter to the method.

```js
const firstOccurrence = tagline.indexOf("developers");
const secondOccurrence = tagline.indexOf("developers", firstOccurrence + 1);

console.log(firstOccurrence); // 20
console.log(secondOccurrence); // 35
```

- Here we're telling the method to search for the substring `"developers"` starting at index `21` (`firstOccurrence + 1`), and it returns the index `35`.

## [Extracting a substring from a string](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Useful_string_methods#extracting_a_substring_from_a_string)

- You can extract a substring from a string using the [`slice()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/slice) method. You pass it:
	- the index at which to start extracting
	- the index at which to stop extracting. This is exclusive, meaning that the character at this index is not included in the extracted substring.

- For example:

```js
const browserType = "mozilla";
console.log(browserType.slice(1, 4)); // "ozi"
```

- The character at index `1` is `"o"`, and the character at index 4 is `"l"`. So we extract all characters starting at `"o"` and ending just before `"l"`, giving us `"ozi"`.

- If you know that you want to extract all of the remaining characters in a string after a certain character, you don't have to include the second parameter.
- Instead, you only need to include the character position from where you want to extract the remaining characters in a string. Try the following:

```js
browserType.slice(2); // "zilla"
```

- This returns `"zilla"` — this is because the character position of 2 is the letter `"z"`, and because you didn't include a second parameter, the substring that was returned was all of the remaining characters in the string.

- **Note:** `slice()` has other options too; study the [`slice()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/slice) page to see what else you can find out.

## [Changing case](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Useful_string_methods#changing_case)

- The string methods [`toLowerCase()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/toLowerCase) and [`toUpperCase()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/toUpperCase) take a string and convert all the characters to lower- or uppercase, respectively. 
- This can be useful for example if you want to normalize all user-entered data before storing it in a database.
- Let's try entering the following lines to see what happens:

```js
const radData = "My NaMe Is MuD";
console.log(radData.toLowerCase());
console.log(radData.toUpperCase());
```

## [Updating parts of a string](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Useful_string_methods#updating_parts_of_a_string)

- You can replace one substring inside a string with another substring using the [`replace()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/replace) method.
- In this example, we're providing two parameters — the string we want to replace, and the string we want to replace it with:

```js
const browserType = "mozilla";
const updated = browserType.replace("moz", "van");

console.log(updated); // "vanilla"
console.log(browserType); // "mozilla"
```

- Note that `replace()`, like many string methods, doesn't change the string it was called on, but returns a new string. 
- If you want to update the original `browserType` variable, you would have to do something like this:

```js
let browserType = "mozilla";
browserType = browserType.replace("moz", "van");

console.log(browserType); // "vanilla"
```

- Also note that we now have to declare `browserType` using `let`, not `const`, because we are reassigning it.
- Be aware that `replace()` in this form only changes the first occurrence of the substring. If you want to change all occurrences, you can use [`replaceAll()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/replaceAll):

```js
let quote = "To be or not to be";
quote = quote.replaceAll("be", "code");

console.log(quote); // "To code or not to code"
```

---
