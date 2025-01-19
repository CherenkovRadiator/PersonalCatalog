# [Types of numbers](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Math#types_of_numbers)

- We use different terms to describe different types of decimal numbers, for example:
	- **Integers** are numbers without a fractional part. They can either be positive or negative, e.g. 10, 400, or -5.
	- **Floating point numbers** (floats) have decimal points and decimal places, for example 12.5, and 56.7786543.
- Decimal is base 10 (meaning it uses 0–9 in each digit), but we also have things like:
	- **Binary** — The lowest level language of computers; 0s and 1s.
	- **Octal** — Base 8, uses 0–7 in each digit.
	- **Hexadecimal** — Base 16, uses 0–9 and then a–f in each digit. You may have encountered these numbers before when setting [colors in CSS](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Styling_basics/Values_and_units#hexadecimal_rgb_values).
- Unlike some other programming languages, JavaScript only has one data type for numbers, both integers and decimals — you guessed it, [`Number`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Number). 
- This means that whatever type of numbers you are dealing with in JavaScript, you handle them in exactly the same way.
- **Note:** Actually, JavaScript has a second number type, [BigInt](https://developer.mozilla.org/en-US/docs/Glossary/BigInt), used for very, very large integers.

# [It's all numbers to me](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Math#its_all_numbers_to_me)

1. First of all, let's declare a couple of variables and initialize them with an integer and a float, respectively, then type the variable names back in to check that everything is in order:

	```js
    const myInt = 5;
    const myFloat = 6.667;
    myInt;
    myFloat;
	```

	- Number values are typed in without quote marks — try declaring and initializing a couple more variables containing numbers before you move on.
2. Now let's check that both our original variables are of the same datatype. 
	- There is an operator called [`typeof`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/typeof) in JavaScript that does this. Enter the below two lines as shown: 

	 ```js
    typeof myInt;
    typeof myFloat;
    ```

	- You should get `"number"` returned in both cases — this makes things a lot easier for us than if different numbers had different data types, and we had to deal with them in different ways.

### [Useful Number methods](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Math#useful_number_methods)

- The [`Number`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Number) object, an instance of which represents all standard numbers you'll use in your JavaScript, has a number of useful methods available on it for you to manipulate numbers.
- For example, to round your number to a fixed number of decimal places, use the [`toFixed()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Number/toFixed) method. Type the following lines into your browser's [console](https://firefox-source-docs.mozilla.org/devtools-user/web_console/index.html):

```js
const lotsOfDecimal = 1.766584958675746364;
lotsOfDecimal;
const twoDecimalPlaces = lotsOfDecimal.toFixed(2);
twoDecimalPlaces;
```

### [Converting to number data types](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Math#converting_to_number_data_types)

- Sometimes you might end up with a number that is stored as a string type, which makes it difficult to perform calculations with it.
- This most commonly happens when data is entered into a [form](https://developer.mozilla.org/en-US/docs/Learn_web_development/Extensions/Forms) input, and the [input type is text](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/input/text).
- There is a way to solve this problem — passing the string value into the [`Number()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Number/Number) constructor to return a number version of the same value.
- For example, try typing these lines into your console:

```js
let myNumber = "74";
myNumber += 3;
```

- You end up with the result 743, not 77, because `myNumber` is actually defined as a string. You can test this by typing in the following:

```js
typeof myNumber;
```

- To fix the calculation, you can do this:

```js
let myNumber = "74";
myNumber = Number(myNumber) + 3;
```

- The result is then 77, as initially expected.

# [Arithmetic operators](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Math#arithmetic_operators)

- Arithmetic operators are used for performing mathematical calculations in JavaScript:

|Operator|Name|Purpose|Example|
|---|---|---|---|
|`+`|Addition|Adds two numbers together.|`6 + 9`|
|`-`|Subtraction|Subtracts the right number from the left.|`20 - 15`|
|`*`|Multiplication|Multiplies two numbers together.|`3 * 7`|
|`/`|Division|Divides the left number by the right.|`10 / 5`|
|`%`|Remainder (sometimes called modulo)|Returns the remainder left over after you've divided the left number into a number of integer portions equal to the right number.|`8 % 3` (returns 2, as three goes into 8 twice, leaving 2 left over).|
|`**`|Exponent|Raises a `base` number to the `exponent` power, that is, the `base` number multiplied by itself, `exponent` times.|`5 ** 2` (returns `25`, which is the same as `5 * 5`).|
- **Note:** You'll sometimes see numbers involved in arithmetic referred to as [operands](https://developer.mozilla.org/en-US/docs/Glossary/Operand).
- **Note:** You may sometimes see exponents expressed using the older [`Math.pow()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/pow) method, which works in a very similar way. For example, in `Math.pow(7, 3)`, `7` is the base and `3` is the exponent, so the result of the expression is `343`. `Math.pow(7, 3)` is equivalent to `7**3`.

## [Operator precedence](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Math#operator_precedence)

- **Operator precedence** — some operators are applied before others when calculating the result of a calculation (referred to as an _expression_, in programming). 
- Operator precedence in JavaScript is the same as is taught in math classes in school — multiply and divide are always done first, then add and subtract (the calculation is always evaluated from left to right).
- If you want to override operator precedence, you can put parentheses around the parts that you want to be explicitly dealt with first. So to get a result of 6, we could do this:

```js
(num2 + num1) / (8 + 2);
```

- **Note:** A full list of all JavaScript operators and their precedence can be found in [Operator precedence](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Operator_precedence).

# [Increment and decrement operators](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Math#increment_and_decrement_operators)

- Sometimes you'll want to repeatedly add or subtract one to or from a numeric variable value. 
- This can be conveniently done using the increment (`++`) and decrement (`--`) operators.

```js
guessCount++;
```

- **Note** that you can't apply these directly to a number, which might seem strange, but we are assigning a variable a new updated value, not operating on the value itself. The following will return an error:

```js
3++;
```

- So, you can only increment an existing variable. Try this:

```js
let num1 = 4;
num1++;
```

- Strangeness number 2! When you do this, you'll see a value of 4 returned — this is because the browser returns the current value, _then_ increments the variable. 
- You can see that it's been incremented if you return the variable value again:

```js
num1;
```

- The same is true of `--` : try the following

```js
let num2 = 6;
num2--;
num2;
```

- **Note:** You can make the browser do it the other way round — increment/decrement the variable _then_ return the value — by putting the operator at the start of the variable instead of the end. 
- Try the above examples again, but this time use `++num1` and `--num2`.

## [Assignment operators](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Math#assignment_operators)

- Assignment operators are operators that assign a value to a variable. The most basic one, `"="` — it assigns the variable on the left the value stated on the right:

```js
let x = 3; // x contains the value 3
let y = 4; // y contains the value 4
x = y; // x now contains the same value y contains, 4
```

- But there are some more complex types, which provide useful shortcuts to keep your code neater and more efficient. The most common are listed below:

|Operator|Name|Purpose|Example|Shortcut for|
|---|---|---|---|---|
|`+=`|Addition assignment|Adds the value on the right to the variable value on the left, then returns the new variable value|`x += 4;`|`x = x + 4;`|
|`-=`|Subtraction assignment|Subtracts the value on the right from the variable value on the left, and returns the new variable value|`x -= 3;`|`x = x - 3;`|
|`*=`|Multiplication assignment|Multiplies the variable value on the left by the value on the right, and returns the new variable value|`x *= 3;`|`x = x * 3;`|
|`/=`|Division assignment|Divides the variable value on the left by the value on the right, and returns the new variable value|`x /= 5;`|`x = x / 5;`|

- **Note:** There are lots of [other assignment operators available](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#assignment_operators), but these are the basic ones.


## [Comparison operators](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Math#comparison_operators)

- Sometimes we will want to run true/false tests, then act accordingly depending on the result of that test — to do this we use **comparison operators**.

| Operator | Name                     | Purpose                                                                      | Example       |
| -------- | ------------------------ | ---------------------------------------------------------------------------- | ------------- |
| `"==="`  | Strict equality          | Tests whether the left and right values are identical to one another         | `5 === 2 + 4` |
| `!==`    | Strict-non-equality      | Tests whether the left and right values are **not** identical to one another | `5 !== 2 + 3` |
| `<`      | Less than                | Tests whether the left value is smaller than the right one.                  | `10 < 6`      |
| `>`      | Greater than             | Tests whether the left value is greater than the right one.                  | `10 > 20`     |
| `<=`     | Less than or equal to    | Tests whether the left value is smaller than or equal to the right one.      | `3 <= 2`      |
| `>=`     | Greater than or equal to | Tests whether the left value is greater than or equal to the right one.      | `5 >= 4`      |

- **Note:** You may see some people using `"=="` and `!=` in their tests for equality and non-equality. These are valid operators in JavaScript, but they differ from `"==="`/`!==`. The former versions test whether the values are the same but not whether the values' datatypes are the same. The latter, strict versions test the equality of both the values and their datatypes. The strict versions tend to result in fewer errors, so we recommend you use them.
- If you try entering some of these values in a console, you'll see that they all return `true`/`false` values — those booleans we mentioned in the last article. 
- These are very useful, as they allow us to make decisions in our code, and they are used every time we want to make a choice of some kind. For example, booleans can be used to:
	- Display the correct text label on a button depending on whether a feature is turned on or off
	- Display a game over message if a game is over or a victory message if the game has been won
	- Display the correct seasonal greeting depending on what holiday season it is
	- Zoom a map in or out depending on what zoom level is selected

---
