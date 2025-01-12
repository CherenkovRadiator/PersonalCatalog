# [Expressions and Operators](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators)
- At a high level, an *expression* is a valid unit of code that resolves to a value. 
- There are two types of expressions: those that have side effects (such as assigning values) and those that purely _evaluate_.
- All complex expressions are joined by *operators*
- Some of these operators are:

## [Assignment operators](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#assignment_operators)

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
## [Comparison operators](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#comparison_operators)

| Operator                                                                                                                          | Description                                                                                                                                                                                                                                                                                        | Examples returning true                            |
| --------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------- |
| [Equal](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Equality) (`==`)                              | Returns `true` if the operands are equal.                                                                                                                                                                                                                                                          | `3 == var1`<br><br>`"3" == var1`<br><br>`3 == '3'` |
| [Not equal](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Inequality) (`!=`)                        | Returns `true` if the operands are not equal.                                                                                                                                                                                                                                                      | `var1 != 4   var2 != "3"`                          |
| [Strict equal](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Strict_equality) (`===`)               | Returns `true` if the operands are equal and of the same type. See also [`Object.is`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Object/is) and [sameness in JS](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Equality_comparisons_and_sameness). | `3 === var1`                                       |
| [Strict not equal](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Strict_inequality) (`!==`)         | Returns `true` if the operands are of the same type but not equal, or are of different type.                                                                                                                                                                                                       | `var1 !== "3"   3 !== '3'`                         |
| [Greater than](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Greater_than) (`>`)                    | Returns `true` if the left operand is greater than the right operand.                                                                                                                                                                                                                              | `var2 > var1   "12" > 2`                           |
| [Greater than or equal](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Greater_than_or_equal) (`>=`) | Returns `true` if the left operand is greater than or equal to the right operand.                                                                                                                                                                                                                  | `var2 >= var1   var1 >= 3`                         |
| [Less than](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Less_than) (`<`)                          | Returns `true` if the left operand is less than the right operand.                                                                                                                                                                                                                                 | `var1 < var2   "2" < 12`                           |
| [Less than or equal](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Less_than_or_equal) (`<=`)       | Returns `true` if the left operand is less than or equal to the right operand.                                                                                                                                                                                                                     | `var1 <= var2   var2 <= 5`                         |
## [Arithmetic operators](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#arithmetic_operators)

| Operator                                                                                                                     | Description                                                                                                                                                                                                                  | Example                                                                                                     |
| ---------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------- |
| [Remainder](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Remainder) (`%`)                     | Binary operator. Returns the integer remainder of dividing the two operands.                                                                                                                                                 | 12 % 5 returns 2.                                                                                           |
| [Increment](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Increment) (`++`)                    | Unary operator. Adds one to its operand. If used as a prefix operator (`++x`), returns the value of its operand after adding one; if used as a postfix operator (`x++`), returns the value of its operand before adding one. | If `x` is 3, then `++x` sets `x` to 4 and returns 4, whereas `x++` returns 3 and, only then, sets `x` to 4. |
| [Decrement](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Decrement) (`--`)                    | Unary operator. Subtracts one from its operand. The return value is analogous to that for the increment operator.                                                                                                            | If `x` is 3, then `--x` sets `x` to 2 and returns 2, whereas `x--` returns 3 and, only then, sets `x` to 2. |
| [Unary negation](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Unary_negation) (`-`)           | Unary operator. Returns the negation of its operand.                                                                                                                                                                         | If `x` is 3, then `-x` returns -3.                                                                          |
| [Unary plus](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Unary_plus) (`+`)                   | Unary operator. Attempts to [convert the operand to a number](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Number#number_coercion), if it is not already.                                | `+"3"` returns `3`.<br><br>`+true` returns `1`.                                                             |
| [Exponentiation operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Exponentiation) (`**`) | Calculates the `base` to the `exponent` power, that is, `base^exponent`                                                                                                                                                      | `2 ** 3` returns `8`.  <br>`10 ** -1` returns `0.1`.                                                        |
## [Bitwise operators](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#bitwise_operators)

|                                                                                                                           |           |                                                                                                                                                                         |
| ------------------------------------------------------------------------------------------------------------------------- | --------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [Bitwise AND](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_AND)                    | `a & b`   | Returns a one in each bit position for which the corresponding bits of both operands are ones.                                                                          |
| [Bitwise OR](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_OR)                      | `a \| b`  | Returns a zero in each bit position for which the corresponding bits of both operands are zeros.                                                                        |
| [Bitwise XOR](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_XOR)                    | `a ^ b`   | Returns a zero in each bit position for which the corresponding bits are the same. [Returns a one in each bit position for which the corresponding bits are different.] |
| [Bitwise NOT](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_NOT)                    | `~ a`     | Inverts the bits of its operand.                                                                                                                                        |
| [Left shift](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Left_shift)                      | `a << b`  | Shifts `a` in binary representation `b` bits to the left, shifting in zeros from the right.                                                                             |
| [Sign-propagating right shift](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Right_shift)   | `a >> b`  | Shifts `a` in binary representation `b` bits to the right, discarding bits shifted off.                                                                                 |
| [Zero-fill right shift](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Unsigned_right_shift) | `a >>> b` | Shifts `a` in binary representation `b` bits to the right, discarding bits shifted off, and shifting in zeros from the left.                                            |
## [Logical operators](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#logical_operators)

| Operator                                                                                                                             | Usage            | Description                                                                                                                                                                                           |
| ------------------------------------------------------------------------------------------------------------------------------------ | ---------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [Logical AND](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Logical_AND) (`&&`)                        | `expr1 && expr2` | Returns `expr1` if it can be converted to `false`; otherwise, returns `expr2`. Thus, when used with Boolean values, `&&` returns `true` if both operands are true; otherwise, returns `false`.        |
| [Logical OR](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Logical_OR) (`\|`)                          | `expr1 \| expr2` | Returns `expr1` if it can be converted to `true`; otherwise, returns `expr2`. Thus, when used with Boolean values, `\|` returns `true` if either operand is true; if both are false, returns `false`. |
| [Nullish coalescing operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Nullish_coalescing) (`??`) | `expr1 ?? expr2` | Returns `expr1` if it is neither `null` nor `undefined`; otherwise, returns `expr2`.                                                                                                                  |
| [Logical NOT](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Logical_NOT) (`!`)                         | `!expr`          | Returns `false` if its single operand can be converted to `true`; otherwise, returns `true`.                                                                                                          |
## [BigInt operators](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#bigint_operators)

Most operators that can be used between numbers can be used between [`BigInt`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/BigInt) values as well.

```js
// BigInt addition
const a = 1n + 2n; // 3n
// Division with BigInts round towards zero
const b = 1n / 2n; // 0n
// Bitwise operations with BigInts do not truncate either side
const c = 40000000000000000n >> 2n; // 10000000000000000n
```

One exception is [unsigned right shift (`>>>`)](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Unsigned_right_shift), which is not defined for BigInt values. This is because a BigInt does not have a fixed width, so technically it does not have a "highest bit".

```js
const d = 8n >>> 2n; // TypeError: BigInts have no unsigned right shift, use >> instead
```

BigInts and numbers are not mutually replaceable — you cannot mix them in calculations.

```js
const a = 1n + 2; // TypeError: Cannot mix BigInt and other types
```

This is because BigInt is neither a subset nor a superset of numbers. BigInts have higher precision than numbers when representing large integers, but cannot represent decimals, so implicit conversion on either side might lose precision. Use explicit conversion to signal whether you wish the operation to be a number operation or a BigInt one.

```js
const a = Number(1n) + 2; // 3
const b = 1n + BigInt(2); // 3n
```

You can compare BigInts with numbers.

```js
const a = 1n > 2; // false
const b = 3 > 2n; // true
```

## [String operators](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#string_operators)

In addition to the comparison operators, which can be used on string values, the concatenation operator (+) concatenates two string values together, returning another string that is the union of the two operand strings.
For example,

```js
console.log("my " + "string"); // console logs the string "my string".
```

The shorthand assignment operator `+=` can also be used to concatenate strings.
For example,

```js
let myString = "alpha";
myString += "bet"; // evaluates to "alphabet" and assigns this value to myString.
```

## [Conditional (ternary) operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#conditional_ternary_operator)

The [conditional operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Conditional_operator) is the only JavaScript operator that takes three operands. The operator can have one of two values based on a condition. The syntax is:

```js
condition ? val1 : val2
```

If `condition` is true, the operator has the value of `val1`. Otherwise it has the value of `val2`. You can use the conditional operator anywhere you would use a standard operator.
For example,

```js
const status = age >= 18 ? "adult" : "minor";
```

This statement assigns the value "adult" to the variable `status` if `age` is eighteen or more. Otherwise, it assigns the value "minor" to `status`.

## [Comma operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#comma_operator)

The [comma operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Comma_operator) (`,`) evaluates both of its operands and returns the value of the last operand. This operator is primarily used inside a `for` loop, to allow multiple variables to be updated each time through the loop. It is regarded bad style to use it elsewhere, when it is not necessary. Often two separate statements can and should be used instead.

For example, if `a` is a 2-dimensional array with 10 elements on a side, the following code uses the comma operator to update two variables at once. The code prints the values of the diagonal elements in the array:

```js
const x = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
const a = [x, x, x, x, x];

for (let i = 0, j = 9; i <= j; i++, j--) {
  //                              ^
  console.log(`a[${i}][${j}]= ${a[i][j]}`);
}
```

## [Unary operators](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#unary_operators)

A unary operation is an operation with only one operand.

### [delete](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#delete)

The [`delete`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/delete) operator deletes an object's property. The syntax is:

```js
delete object.property;
delete object[propertyKey];
delete objectName[index];
```

where `object` is the name of an object, `property` is an existing property, and `propertyKey` is a string or symbol referring to an existing property.

If the `delete` operator succeeds, it removes the property from the object. Trying to access it afterwards will yield `undefined`. The `delete` operator returns `true` if the operation is possible; it returns `false` if the operation is not possible.

```js
delete Math.PI; // returns false (cannot delete non-configurable properties)

const myObj = { h: 4 };
delete myObj.h; // returns true (can delete user-defined properties)
```

#### Deleting array elements

Since arrays are just objects, it's technically possible to `delete` elements from them. This is, however, regarded as a bad practice — try to avoid it. When you delete an array property, the array length is not affected and other elements are not re-indexed. To achieve that behavior, it is much better to just overwrite the element with the value `undefined`. To actually manipulate the array, use the various array methods such as [`splice`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/splice).

### [typeof](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#typeof)

The [`typeof` operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/typeof) returns a string indicating the type of the unevaluated operand. `operand` is the string, variable, keyword, or object for which the type is to be returned. The parentheses are optional.

Suppose you define the following variables:

```js
const myFun = new Function("5 + 2");
const shape = "round";
const size = 1;
const foo = ["Apple", "Mango", "Orange"];
const today = new Date();
```

The `typeof` operator returns the following results for these variables:

```js
typeof myFun; // returns "function"
typeof shape; // returns "string"
typeof size; // returns "number"
typeof foo; // returns "object"
typeof today; // returns "object"
typeof doesntExist; // returns "undefined"
```

For the keywords `true` and `null`, the `typeof` operator returns the following results:

```js
typeof true; // returns "boolean"
typeof null; // returns "object"
```

For a number or string, the `typeof` operator returns the following results:

```js
typeof 62; // returns "number"
typeof "Hello world"; // returns "string"
```

For property values, the `typeof` operator returns the type of value the property contains:

```js
typeof document.lastModified; // returns "string"
typeof window.length; // returns "number"
typeof Math.LN2; // returns "number"
```

For methods and functions, the `typeof` operator returns results as follows:

```js
typeof blur; // returns "function"
typeof eval; // returns "function"
typeof parseInt; // returns "function"
typeof shape.split; // returns "function"
```

For predefined objects, the `typeof` operator returns results as follows:

```js
typeof Date; // returns "function"
typeof Function; // returns "function"
typeof Math; // returns "object"
typeof Option; // returns "function"
typeof String; // returns "function"
```

### [void](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#void)

The [`void` operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/void) specifies an expression to be evaluated without returning a value. `expression` is a JavaScript expression to evaluate. The parentheses surrounding the expression are optional, but it is good style to use them to avoid precedence issues.

## [Relational operators](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#relational_operators)

A relational operator compares its operands and returns a Boolean value based on whether the comparison is true.

### [in](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#in)

The [`in` operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/in) returns `true` if the specified property is in the specified object. The syntax is:

```js
propNameOrNumber in objectName
```

where `propNameOrNumber` is a string, numeric, or symbol expression representing a property name or array index, and `objectName` is the name of an object.

The following examples show some uses of the `in` operator.

```js
// Arrays
const trees = ["redwood", "bay", "cedar", "oak", "maple"];
0 in trees; // returns true
3 in trees; // returns true
6 in trees; // returns false
"bay" in trees; // returns false
// (you must specify the index number, not the value at that index)
"length" in trees; // returns true (length is an Array property)

// built-in objects
"PI" in Math; // returns true
const myString = new String("coral");
"length" in myString; // returns true

// Custom objects
const myCar = { make: "Honda", model: "Accord", year: 1998 };
"make" in myCar; // returns true
"model" in myCar; // returns true
```

### [instanceof](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#instanceof)

The [`instanceof` operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/instanceof) returns `true` if the specified object is of the specified object type. The syntax is:

```js
object instanceof objectType
```

where `object` is the object to test against `objectType`, and `objectType` is a constructor representing a type, such as [`Date`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Date) or [`Array`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array).

Use `instanceof` when you need to confirm the type of an object at runtime. For example, when catching exceptions, you can branch to different exception-handling code depending on the type of exception thrown.

For example, the following code uses `instanceof` to determine whether `theDay` is a `Date` object. Because `theDay` is a `Date` object, the statements in the `if` statement execute.

```js
const theDay = new Date(1995, 12, 17);
if (theDay instanceof Date) {
  // statements to execute
}
```

## [Basic expressions](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#basic_expressions)

All operators eventually operate on one or more basic expressions. These basic expressions include [identifiers](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Grammar_and_types#declarations) and [literals](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Grammar_and_types#literals), but there are a few other kinds as well. They are briefly introduced below, and their semantics are described in detail in their respective reference sections.

### [this](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#this)

Use the [`this` keyword](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/this) to refer to the current object. In general, `this` refers to the calling object in a method. Use `this` either with the dot or the bracket notation:

```js
this["propertyName"];
this.propertyName;
```

Suppose a function called `validate` validates an object's `value` property, given the object and the high and low values:

```js
function validate(obj, lowVal, highVal) {
  if (obj.value < lowVal || obj.value > highVal) {
    console.log("Invalid Value!");
  }
}
```

You could call `validate` in each form element's `onChange` event handler, using `this` to pass it to the form element, as in the following example:

```html
<p>Enter a number between 18 and 99:</p>
<input type="text" name="age" size="3" onChange="validate(this, 18, 99);" />
```

### [Grouping operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#grouping_operator)

The grouping operator `( )` controls the precedence of evaluation in expressions. For example, you can override multiplication and division first, then addition and subtraction to evaluate addition first.

```js
const a = 1;
const b = 2;
const c = 3;

// default precedence
a + b * c     // 7
// evaluated by default like this
a + (b * c)   // 7

// now overriding precedence
// addition before multiplication
(a + b) * c   // 9

// which is equivalent to
a * c + b * c // 9
```

### [Property accessor](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#property_accessor)

The [property accessor](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Property_accessors) syntax gets property values on objects, using either dot notation or bracket notation.

```js
object.property;
object["property"];
```

The [working with objects](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Working_with_objects) guide goes into more details about object properties.

### [Optional chaining](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#optional_chaining)

The [optional chaining](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Optional_chaining) syntax (`?.`) performs the chained operation on an object if it is defined and non-`null`, and otherwise short-circuits the operation and returns `undefined`. This allows you to operate on a value that may be `null` or `undefined` without causing a `TypeError`.

```js
maybeObject?.property;
maybeObject?.[property];
maybeFunction?.();
```

### [new](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#new)

You can use the [`new` operator](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/new) to create an instance of a user-defined object type or of one of the built-in object types. Use `new` as follows:

```js
const objectName = new ObjectType(param1, param2, /* …, */ paramN);
```

### [super](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#super)

The [`super` keyword](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/super) is used to call functions on an object's parent. It is useful with [classes](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Classes) to call the parent constructor, for example.

```js
super(args); // calls the parent constructor.
super.functionOnParent(args);
```

---
