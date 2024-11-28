`static` keyword is used to create variables that retain their value for each function call.
```c
int increase(void) {
	static int i = 0;
	i++;
	return i;
}

int main(void) {
	printf("increasing the first time %i", increase());
	printf("increasing the second time %i", increase());
}
```

## Static functions
By default, functions are global in C. If we declare a function with `static`, the scope of that function is reduced to the file containing it.
The syntax looks like this:

```c
static void fun(void) {
   printf("I am a static function.");
}
```

## Static vs Global?
While static variables have scope over the file containing them making them accessible only inside a given file, global variables can be accessed outside the file too.