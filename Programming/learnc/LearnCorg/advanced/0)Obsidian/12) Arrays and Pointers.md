Pointer can be used to create arrays without a fixed size, Like:
```c
char * alpha = {'a', 'b', 'c', 'd', 'e'};
```
Now when the pointer `alpha` is accessed it will point to the first value of the array, from there each subsequent value can be accessed using pointer arithmetic. like:
```c
printf("second value is %i", *(alpha+1));
```

Creating an array without a pointer acts the same way since the name of an array is a pointer as well
```c
char aplhaa[] = {'a', 'b', 'c', 'd', 'e'};

printf("second value is %i", *(aplhaa+1));
```

## Dynamic Memory Allocation For Arrays
Same can be used for an array created using dynamic memory allocation:
```c
int n = 5;
char * dynamicAr = (char *)malloc(n * sizeof(char));

dynamicAr[0] = 'A';
*(dynamicAr+1) = 'B';
dynamicAr[2] = 'C';
*(dynamicAr+3) = 'D'
dynamicAr+4 = 'E';

free(dynamicAr);
```

Here `n` is the number of items this array is going to have.
