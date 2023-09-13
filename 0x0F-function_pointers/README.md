Function pointers are a powerful and fundamental concept
in the C programming language, as well as in many other programming languages.
They allow you to treat functions as first-class citizens,
just like variables, and are essential for implementing various advanced programming techniques.

Function Pointers in C:
-----------------------
In C, a function pointer is a variable that stores the address
of a function instead of storing a regular data value.
It allows you to call a function indirectly through the pointer,
providing a flexible & dynamic way to select which function to
execute at runtime.

#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}
int subtract(int a, int b)
{
	return a - b;
}
int main()
{
	int (*operation)(int, int) /*declare a function pointer*/
	
	operation = add;	/*assign the address of the 'add' function*/
	int result = operation(5, 3) ; /*call the function indirectly thro' the pointer*/
	printf("Result: %d\n", result); /*output: Result: 8*/

	operation = subtract; /*change the function pointer to point to `subtract`*/
	result = operation(5, 3); /*call `subtract` indirectly*/
	printf("Result: %d\n", result); /*Output: Result: 2*/
	
	return (0);
}

Operation is a function pointer that can point to either the `add` or
`subtract` function.
Depending on which function it points to, you can call that function
indirectly.

#include <stdio.h>
/* a normal function with an int paramter & void return type*/
void fun(int a)
{
	printf("Value of a is %d\n", a);
}
int main()
{
/*fun_ptr is a pointer to function fun()*/
void (*fun_ptr)(int) = &fun;

/*the above line is equivalent of following
   two void (*fun_ptr)(int);
   fun_ptr = &fun;
*/
// invoking fun() using fun_ptr
	(*fun_ptr)(10);
	return (0);
}

Output: Value of a is 10

Why is an extra bracket needed around function pointers like fun_ptr
in the above example?
If the bracket is removed, then the expression `void(*fun_ptr)(int)` becomes
`void *fun_ptr(int)` which is declaration of a function that returns void
pointer

