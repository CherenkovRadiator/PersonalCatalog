# Linear Search
Linear search is a search algorithm in which you look for an item by looking at each item in order one by one.

---
# Binary Search
Binary search is more complex search algorithm compared to the linear search. In binary search, the search starts from the middle of the array and move to the middle of the half to which the value might lie, and continue the same until the value is found. This type of search only works for sorted array but is faster than linear search.

---
# Running time
It is the amount of time an algorithm takes relative to the number of total items. The maximum amount a function takes is represent using big-O notation represent as `O(time)` where as the minimum amount of time it can take is represented using Greek letter "Ω" (omega) as `Ω(time)`. The constants aren't represented in this notation. And if max and min time a function takes same then it is represent in Θ-notation `Θ(time)`.

---
# Structures and typedef
A structure in c is a definition of a custom data structure, a single variable that can hold multiple variable in the way defined. `struct` keyword used to create new custom data structure. The syntax is:
```c
struct struct_name {
	data_type1 var1;
	data_type2 var2;
	...
};
```
This works a data type of it's own i.e. you can create a new variable with the data type as the structure created and the variable itself will have the structure as defined like:
```c
struct struct_name struc1;
```
Each defined variable for the structure variable can be accessed using `.` operator like:
```c
struc1.car1 = val1;
struc1.var2 = val2;
```
Note that when using `.` operator to access the values of structure variable, the names used to access are the name defined in the structure definition (i.e. `var1`, `var2`).

`typedef` keyword is used to create a new name for a data type. It can be used along side structures to create a structure as new data type of it's own like:
```c
typedef struct {
	struct defintion;
} new_data_type_name;
```
Now a new structure variable can be created simply using the new name defined like any other data type name:
```c
new_data_type_name struc1;
```
[[10) Structures]]

---
# Sorting
## Selection sort
In ***selection sort***, the algorithm runs n number of times over the array and looks for the smallest number between i-th location and n-1 location and replace the smallest number with the i-th number where i starts from 0 and increases by 1 each iteration. It is on the order of n^2 (*O(n^2)*).
## Bubble sort
In ***bubble sort***, the algorithm runs through the array comparing two consecutive items and swap them if they're no sorted. It run *n* number of times to sort each item and is in order of n^2 (*O(n^2)*) time.
# Merge sort
***Merge sort*** divides an array of items in half and sorts each half by calling itself which further divides the items. Once the it reaches the point where there are only two items left the algorithm starts to merge the divided half in sorted manner i.e. looking at each item of each half, compare them and then arrange them in the sorted manner.
Merger sort is on the order of nlogn (*O(nlogn)*) i.e it is faster compared to ***selection sort*** or ***bubble sort***.

---
# Recursion
Recursion occurs when a functions calls itself, creating a loop. This allows to solve a problem using the same logic in itself.
Note that in recursion a base condition is need so that the recursion won't go on forever. The base condition defines the condition in which the the recursion will stop.
[[13) Recursion]]

---
