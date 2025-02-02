# [What is an array?](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Arrays#what_is_an_array)

- Arrays are generally described as "list-like objects"; they are basically single objects that contain multiple values stored in a list. 
- Array objects can be stored in variables and dealt with in much the same way as any other type of value, the difference being that we can access each value inside the list individually, and do super useful and efficient things with the list, like loop through it and do the same thing to every value.

---
# [Creating arrays](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Arrays#creating_arrays)

- Arrays consist of square brackets and items that are separated by commas.

	1. Suppose we want to store a shopping list in an array. Paste the following code into the console:

	```js
    const shopping = ["bread", "milk", "cheese", "hummus", "noodles"];
    console.log(shopping);
    ```
 
	1. In the above example, each item is a string, but in an array we can store various data types — strings, numbers, objects, and even other arrays. We can also mix data types in a single array — we do not have to limit ourselves to storing only numbers in one array, and in another only strings. For example:

	```js
    const sequence = [1, 1, 2, 3, 5, 8, 13];
    const random = ["tree", 795, [0, 1, 2]];
    ```

---
# [Finding the length of an array](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Arrays#finding_the_length_of_an_array)

- You can find out the length of an array (how many items are in it) in exactly the same way as you find out the length (in characters) of a string — by using the [`length`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/length) property. Try the following:

```js
const shopping = ["bread", "milk", "cheese", "hummus", "noodles"];
console.log(shopping.length); // 5
```

---
# [Accessing and modifying array items](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Arrays#accessing_and_modifying_array_items)

- Items in an array are numbered, starting from zero.
- This number is called the item's _index_. So the first item has index 0, the second has index 1, and so on.
- You can access individual items in the array using bracket notation and supplying the item's index, in the same way that you [would the letters in a string](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Useful_string_methods#retrieving_a_specific_string_character).

1. Enter the following into your console:
	```js
    const shopping = ["bread", "milk", "cheese", "hummus", "noodles"];
    console.log(shopping[0]);
    // returns "bread"
    ```

2. You can also modify an item in an array by giving a single array item a new value. Try this:
	```js
    const shopping = ["bread", "milk", "cheese", "hummus", "noodles"];
    shopping[0] = "tahini";
    console.log(shopping);
    // shopping will now return [ "tahini", "milk", "cheese", "hummus", "noodles" ]
    ```
    - **Note:** We've said it before, but just as a reminder — JavaScript starts indexing arrays at zero!

3. Note that an array inside an array is called a multidimensional array. You can access an item inside an array that is itself inside another array by chaining two sets of square brackets together. For example, to access one of the items inside the array that is the third item inside the `random` array (see previous section), we could do something like this:
	 ```js
    const random = ["tree", 795, [0, 1, 2]];
    random[2][2];
	    ```

# [Finding the index of items in an array](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Arrays#finding_the_index_of_items_in_an_array)

- If you don't know the index of an item, you can use the [`indexOf()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/indexOf) method. The `indexOf()` method takes an item as an argument and will either return the item's index or `-1` if the item is not in the array:

```js
const birds = ["Parrot", "Falcon", "Owl"];
console.log(birds.indexOf("Owl")); //  2
console.log(birds.indexOf("Rabbit")); // -1
```

## [Adding items](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Arrays#adding_items)

- To add one or more items to the end of an array we can use [`push()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/push). Note that you need to include one or more items that you want to add to the end of your array.

```js
const cities = ["Manchester", "Liverpool"];
cities.push("Cardiff");
console.log(cities); // [ "Manchester", "Liverpool", "Cardiff" ]
cities.push("Bradford", "Brighton");
console.log(cities); // [ "Manchester", "Liverpool", "Cardiff", "Bradford", "Brighton" ]
```

- The new length of the array is returned when the method call completes. If you wanted to store the new array length in a variable, you could do something like this:

```js
const cities = ["Manchester", "Liverpool"];
const newLength = cities.push("Bristol");
console.log(cities); // [ "Manchester", "Liverpool", "Bristol" ]
console.log(newLength); // 3
```

- To add an item to the start of the array, use [`unshift()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/unshift):

```js
const cities = ["Manchester", "Liverpool"];
cities.unshift("Edinburgh");
console.log(cities); // [ "Edinburgh", "Manchester", "Liverpool" ]
```

## [Removing items](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Arrays#removing_items)

- To remove the last item from the array, use [`pop()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/pop).

```js
const cities = ["Manchester", "Liverpool"];
cities.pop();
console.log(cities); // [ "Manchester" ]
```

- The `pop()` method returns the item that was removed. To save that item in a new variable, you could do this:

```js
const cities = ["Manchester", "Liverpool"];
const removedCity = cities.pop();
console.log(removedCity); // "Liverpool"
```

- To remove the first item from an array, use [`shift()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/shift):

```js
const cities = ["Manchester", "Liverpool"];
cities.shift();
console.log(cities); // [ "Liverpool" ]
```

- If you know the index of an item, you can remove it from the array using [`splice()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/splice):

```js
const cities = ["Manchester", "Liverpool", "Edinburgh", "Carlisle"];
const index = cities.indexOf("Liverpool");
if (index !== -1) {
  cities.splice(index, 1);
}
console.log(cities); // [ "Manchester", "Edinburgh", "Carlisle" ]
```

- In this call to `splice()`, the first argument says where to start removing items, and the second argument says how many items should be removed. So you can remove more than one item:

```js
const cities = ["Manchester", "Liverpool", "Edinburgh", "Carlisle"];
const index = cities.indexOf("Liverpool");
if (index !== -1) {
  cities.splice(index, 2);
}
console.log(cities); // [ "Manchester", "Carlisle" ]
```

## [Accessing every item](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Arrays#accessing_every_item)

- Very often you will want to access every item in the array. You can do this using the [`for...of`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/for...of) statement:

```js
const birds = ["Parrot", "Falcon", "Owl"];

for (const bird of birds) {
  console.log(bird);
}
```

- Sometimes you will want to do the same thing to each item in an array, leaving you with an array containing the changed items. You can do this using [`map()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/map). The code below takes an array of numbers and doubles each number:

```js
function double(number) {
  return number * 2;
}
const numbers = [5, 2, 7, 6];
const doubled = numbers.map(double);
console.log(doubled); // [ 10, 4, 14, 12 ]
```

- We give a function to the `map()`, and `map()` calls the function once for each item in the array, passing in the item. It then adds the return value from each function call to a new array, and finally returns the new array.
- Sometimes you'll want to create a new array containing only the items in the original array that match some test. You can do that using [`filter()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/filter). 
- The code below takes an array of strings and returns an array containing just the strings that are greater than 8 characters long:

```js
function isLong(city) {
  return city.length > 8;
}
const cities = ["London", "Liverpool", "Totnes", "Edinburgh"];
const longer = cities.filter(isLong);
console.log(longer); // [ "Liverpool", "Edinburgh" ]
```

- Like `map()`, we give a function to the `filter()` method, and `filter()` calls this function for every item in the array, passing in the item. If the function returns `true`, then the item is added to a new array. Finally it returns the new array.

## [Converting between strings and arrays](https://developer.mozilla.org/en-US/docs/Learn_web_development/Core/Scripting/Arrays#converting_between_strings_and_arrays)

- Often you'll be presented with some raw data contained in a big long string, and you might want to separate the useful items out into a more useful form and then do things to them, like display them in a data table. To do this, we can use the [`split()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/split) method. 
- In its simplest form, this takes a single parameter, the character you want to separate the string at, and returns the substrings between the separator as items in an array.
- **Note:** Okay, this is technically a string method, not an array method.
1. Let's play with this, to see how it works. First, create a string in your console:
    
	```js
    const data = "Manchester,London,Liverpool,Birmingham,Leeds,Carlisle";
    ```
    
2. Now let's split it at each comma:
    
    ```js
    const cities = data.split(",");
    cities;
    ```
    
3. Finally, try finding the length of your new array, and retrieving some items from it:

	```js
    cities.length;
    cities[0]; // the first item in the array
    cities[1]; // the second item in the array
    cities[cities.length - 1]; // the last item in the array
    ```
    
4. You can also go the opposite way using the [`join()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/join) method. Try the following:
    
	```js
    const commaSeparated = cities.join(",");
    commaSeparated;
    ```
    
5. Another way of converting an array to a string is to use the [`toString()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/toString) method. `toString()` is arguably simpler than `join()` as it doesn't take a parameter, but more limiting. 
6. With `join()` you can specify different separators, whereas `toString()` always uses a comma. (Try running Step 4 with a different character than a comma.)

```js
const dogNames = ["Rocket", "Flash", "Bella", "Slugger"];
dogNames.toString(); // Rocket,Flash,Bella,Slugger
```

---
