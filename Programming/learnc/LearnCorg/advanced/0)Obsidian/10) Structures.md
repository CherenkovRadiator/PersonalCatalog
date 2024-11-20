C structures are special, large variables which contain several named variables inside. Structures are the basic foundation for objects and classes in C. Structures are used for:
- Serialization of data
- Passing multiple arguments in and out of functions through a single argument
- Data structures such as linked lists, binary trees, and more
Syntax for structure:
```c
struct point {
	int x;
	int y;
};
```
This creates a structure named point which can hold two integer variable namely x and y.
Using pointers.
```c
struct point p;
p.x = 12;
p.y = 15;

printf("x is %i, y is %i", p.x, p.y);
```
This creates a structure of point named p. The value of p (x and y) can be used using `.` operator.
## Typedefs
 Typedefs allow us to define types with a different name. This can be used along side a structures to create an alias for it. Like:
```c
// syntax for typedef
// typedef data_type new_name;

typedef struct {
	int x;
	int y;
} point;
```
Here we create a structure with no name but only it's definition and use `typedef` along with it to give that structure an alias. Now, we can use that alias to refer to the structure like:
```c
point p;
p.x = 12;
p.y = 13;

printf("The x is %i and the y is %i", p.x, p.y);
```

**NOTE**:- if using pointers in structures the value has to be accessed using `->` instead of `.` like:
```c
struct point {
	int * x;
	int * y;
}

struct point p;
p->x = 10;
p->y = 15;

printf("The x is %i and the y is %i", p->x, p->y);
```
