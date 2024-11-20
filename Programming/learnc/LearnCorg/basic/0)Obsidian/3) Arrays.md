Arrays are one variables that can store multiple data of same type. Arrays can be defined using the syntax:
```
int NumArray[10] = {11,12,13,14,15,16,17,18,19,20};
```
This creates an integer array of name `NumArray` that can store 10 values. If no number is defined inside `[]` the compiler will automatically define the number of items in the array.
Similar syntax is also used to access a specific item in the array:
```
NumArray[0] = 21;
```
This will change the value of 1st item of the `NumArray` (since indexing starts at 0) array to 21. The values can be accessed the same way to print out the values.
```
printf("The second value is %i\n", NumArray[1]);
```
## Multidimensional Array
In c you can also create multidimensional Array. These are arrays who's members are also individual arrays. The syntax of creating the multidimensional array is similar to one dimensional array:
```
int multiArray[3][2][1] = {
{ {11}, {12} }, 
{ {13), {14} }, 
{ {15}, {16} }
}
```
The syntax creates a multidimensional array that is an array of 3 elements, these elements are a size 2 array who's elements are size 1 arrays. Conversely it is a three dimensional array which has a capacity of 3 elements on x-axis, 2 elements on y-axis and 1 elements on z-axis.
And the values can be accessed in the similar way as well:
```
int val = multiArray[2][1][0]; // 16
```
