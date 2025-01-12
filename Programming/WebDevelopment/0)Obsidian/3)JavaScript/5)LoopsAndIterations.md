# Loops
- Loops allow for a piece of code to be executed iteratively.
- There are different types of loops.

## [for statement](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Loops_and_iteration#for_statement)
- A [`for`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/for) loop repeats until a specified condition evaluates to false.
```js
for (initialization; condition; afterthought) {
  statement
}
```
- When a `for` loop executes, the following occurs:
	1. The initializing expression `initialization`, if any, is executed. This expression usually initializes one or more loop counters, but the syntax allows an expression of any degree of complexity. This expression can also declare variables.
	2. The `condition` expression is evaluated. If the value of `condition` is true, the loop statements execute. Otherwise, the `for` loop terminates. (If the `condition` expression is omitted entirely, the condition is assumed to be true.)
	3. The `statement` executes. To execute multiple statements, use a [block statement](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/block) (`{ }`) to group those statements.
	4. If present, the update expression `afterthought` is executed.
	5. Control returns to Step 2.

---
## [do...while statement](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Loops_and_iteration#do...while_statement)

- The [`do...while`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/do...while) statement repeats until a specified condition evaluates to false.
- A `do...while` statement looks as follows:

```js
do
  statement
while (condition);
```

- `statement` is always executed once before the condition is checked. (To execute multiple statements, use a block statement (`{ }`) to group those statements.)
- If `condition` is `true`, the statement executes again. At the end of every execution, the condition is checked. When the condition is `false`, execution stops, and control passes to the statement following `do...while`.

---
## [while statement](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Loops_and_iteration#while_statement)

- A [`while`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/while) statement executes its statements as long as a specified condition evaluates to `true`. A `while` statement looks as follows:

```js
while (condition)
  statement
```

- If the `condition` becomes `false`, `statement` within the loop stops executing and control passes to the statement following the loop.
- The condition test occurs _before_ `statement` in the loop is executed. If the condition returns `true`, `statement` is executed and the `condition` is tested again. If the condition returns `false`, execution stops, and control is passed to the statement following `while`.
- To execute multiple statements, use a block statement (`{ }`) to group those statements.

---
## [labeled statement](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Loops_and_iteration#labeled_statement)

- A [`label`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/label) provides a statement with an identifier that lets you refer to it elsewhere in your program. For example, you can use a label to identify a loop, and then use the `break` or `continue` statements to indicate whether a program should interrupt the loop or continue its execution.
- The syntax of the labeled statement looks like the following:

```js
label:
  statement
```

- The value of `label` may be any JavaScript identifier that is not a reserved word. The `statement` that you identify with a label may be any statement. For examples of using labeled statements, see the examples of `break` and `continue` below.

---
## [for...in statement](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Loops_and_iteration#for...in_statement)

- The [`for...in`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/for...in) statement iterates a specified variable over all the enumerable properties of an object. For each distinct property, JavaScript executes the specified statements. A `for...in` statement looks as follows:

```js
for (variable in object)
  statement
```
---
## [for...of statement](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Loops_and_iteration#for...of_statement)

- The [`for...of`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/for...of) statement creates a loop Iterating over [iterable objects](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Iteration_protocols) (including [`Array`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array), [`Map`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Map), [`Set`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Set), [`arguments`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions/arguments) object and so on), invoking a custom iteration hook with statements to be executed for the value of each distinct property.

```js
for (variable of iterable)
  statement
```

---
# Extras
## [break statement](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Loops_and_iteration#break_statement)

- Use the [`break`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/break) statement to terminate a loop, `switch`, or in conjunction with a labeled statement.
- When you use `break` without a label, it terminates the innermost enclosing `while`, `do-while`, `for`, or `switch` immediately and transfers control to the following statement.
- When you use `break` with a label, it terminates the specified labeled statement.
- The syntax of the `break` statement looks like this:

```js
break;
break label;
```

1. The first form of the syntax terminates the innermost enclosing loop or `switch`.
2. The second form of the syntax terminates the specified enclosing labeled statement.

---
## [continue statement](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Loops_and_iteration#continue_statement)

- The [`continue`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/continue) statement can be used to restart a `while`, `do-while`, `for`, or `label` statement.
- When you use `continue` without a label, it terminates the current iteration of the innermost enclosing `while`, `do-while`, or `for` statement and continues execution of the loop with the next iteration. In contrast to the `break` statement, `continue` does not terminate the execution of the loop entirely. In a `while` loop, it jumps back to the condition. In a `for` loop, it jumps to the `increment-expression`.
- When you use `continue` with a label, it applies to the looping statement identified with that label.
- The syntax of the `continue` statement looks like the following:

```js
continue;
continue label;
```

---
