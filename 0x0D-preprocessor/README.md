The compilation process in C programming is a series of steps that transform the C source code into an executable program that can be run on a computer.
Editing: the first step is writing your C source code.
Preprocessing: Before the actual compilation begins, the C preprocessor (part of the compiler) performs some tasks. These include handling #include directives to include header files, macro expansion, and conditional compilation using #ifdef and #ifndef	 directives. The preprocessor generates an intermediate file with a `.i` extension.
 /* preprocessing */
#include <stdio.h>
int main()
{ 
printf("Hello, World!\n"); 
return 0;
}
Compilation: In this phase the preprocessed code (from the .i file) is translated into assembly code or an intermediate language by the C compiler. The compiler performs syntax checking and generates an object file (with .o or .obj extension) which contains machine code specific to the target platform but is not yet an executable program.
Linking: Most C programs consist of multiple source files and may use functions from standard libraries or other libraries. The linker combines the object files generated in the compilation step with the necessary libraries to create an executable file. It resolves references to functions and variables in other source files and libraries.
#Compilation
gcc –c myprogram.c –o myprogram.o

#Linking
gcc myprogram.o –o myprogram

myprogram.c is the source code file
myprogram.o is the object file generated after compilation
myprogram is the final executable
--------------------------------------------------------------------------------------------------------------------------------------
OBJECT-LIKE MACROS
Object-like macros in C are a type of preprocessor macro that do not take any arguments and used to define constants or simple text substitutions. They are called “object-like” because they act like objects or values in your code, and they don’t involve any parameterized processing.
An object-like macro is like a shortcut for a piece of code in C. It's called "object-like" because it looks like a regular variable or constant in your code. People often use them to give names to numbers or other values.
You make macros using the #define directive. This #define thing tells the compiler, "Hey, I'm defining a shortcut!" After #define, you put the name of your shortcut (macro) and then what it stands for. This part you're defining is like the replacement for your shortcut.
For example:
#define BUFFER_SIZE 1024
Here, we’re making a macro called BUFFER_SIZE and it stands for the number 1024. Whenever we write BUFFER_SIZE in our code, the compiler will understand it as if we wrote 1024.

If we wrote:
foo = (char *) malloc (BUFFER_SIZE);
It’s the same as if we wrote:
foo = (char *) malloc (1024);
Macros help you make your code easier to read and change because you give meaningful name to values or code fragments you use frequently. It’s like using a nickname for something, so you don’t have to remember the actual value or code every time you use it.
Macro names are conventionally written in uppercase so that people can quickly recognize that a word is a macro when they see the code.
When defining a macro using `#define` everything after the macro’s name and until the end of the line is considered part of the macro’s definition.
If you need to continue the definition on multiple lines, you can use a backslash followed by a newline. However, when you actually use the macro in your code, it will be treated as if it’s all on one line.
For e.g.
#define NUMBERS 1, \
		     2, \
		     3
int x[] = { NUMBERS };
This is equivalent to:
int x[] = { 1, 2, 3 };
YOU CAN put almost anything you want in a macro’s definition, as long as it’s made up of valid “preprocessing tokens” (basically the building blocks of code)
----------------------------------------------------------------------------------------------------------------------------------------
Macro Definitions: When you define a macro using #define, it starts working right where you wrote it in your code. So, if you use the macro before defining it, the preprocessor won't understand it.

foo = X;      // It doesn't know what X is yet
#define X 4   // Defining X
bar = X;      // Now it knows X is 4
Expanding Macros: When the preprocessor sees a macro name, it replaces it with the value or code you defined for that macro. Then, it looks at the replacement to see if there are more macros inside it.
#define TABLESIZE BUFSIZE
#define BUFSIZE 1024
TABLESIZE
First, it replaces TABLESIZE with BUFSIZE, and then it replaces BUFSIZE with 1024. So, TABLESIZE eventually becomes 1024.
It's like opening a box, finding another box inside, and opening that one too until you reach the final item.
Macro Definitions Are Fixed: When you define a macro, it uses the exact thing you put in its definition. It doesn't look inside that definition to see if there are more macros.
#define TABLESIZE BUFSIZE
#define BUFSIZE 1024
TABLESIZE is defined as BUFSIZE, and it doesn't care what's inside BUFSIZE. Only when you use TABLESIZE does it start looking inside BUFSIZE.
No Endless Loops: To prevent endless loops, if a macro's expansion includes its own name, directly or through other macros, it won't be expanded again when looking for more macros.
So, you won't get stuck in an infinite loop like this:
#define A A
A   /* It won't keep expanding A forever*/
Macros are like shortcuts, and they work where you define them. When you use a macro, it replaces the name with its definition and keeps doing that until there are no more macros left to replace. But it won't go on forever, and it doesn't look inside the definitions while defining.
----------------------------------------------------------------------------------------------------------------------------------------
Macro w/ Parameters: function-like macros are like functions in that they can take inputs (called arguments). To create one, you add parameters inside the parentheses in the macro definition. These parameters are like placeholders for values you’ll provide later.
Using the Macro: when you want to use a macro with arguments, you write the macro’s name followed by the actual values you want to pass in, all enclosed in parentheses. This part can spread across multiple lines in your code if needed.
Matching Arguments to Parameters: The number of arguments you give in the macro call must match the number of parameters defined in the macro. When the macro is used, each parameter in its definition is replaced with the corresponding argument values.
Optional Use of Parameters: You don't have to use all the parameters defined in the macro. If a parameter is not used in the macro's body, you can still call the macro without providing an argument for that parameter.
function-like macros with arguments allow you to create reusable code blocks where you can replace certain parts with values you provide when you use the macro. It's like having a customizable recipe where you can change some ingredients while keeping the rest of the instructions the same.
Basics of a function-like macro
A function-like macro is a way to create a shortcut for performing a specific task in the C code
It can take one or more arguments just like a real function
Example of a function-like macro
Here’s an example of a function-like macro that finds the minimum of two numbers
#define min(X, Y) ((X)< (Y) ? (X) : (Y))
Using the Macro
To use the macro, you write its name followed by arguments in parentheses
The macro replaces its name w/ the actual code defined in it, replaces the arguments where necessary
For example, if you have x = min(a, b); it’s the same as writing x = ((a) < (b) ? (a) : (b));
Quirks of Macro Arguments
When using macro arguments any leading or trailing spaces are removed and multiple spaces between arguments become a single space.
Parentheses inside an argument must balance, but square brackets and braces don’t need to.
For example, macro (array[x = y, x + 1]) passes two arguments: `array[x = y` and `x + 1]`
If you want to pass `array[x = y, x + 1]` as one argument, you should write it as `array[(x = y, x + 1)]`
Macro Expansion
All macro arguments are expanded before they are substituted into the macro body.
After substitution, the entire text is scanned again for more macros to expand, including the arguments.
This ensures that you don’t need to worry about whether a function call is actually a macro invocation.
Empty and Missing Arguments
You can leave macro arguments empty (not specifying anything), but his may lead to invalid code.
You cannot omit arguments entirely; if a macro expects two arguments, you must provide them separated by a comma.
Examples:
min(, b) expands to (() < (b) ? () : (b))
min(a, ) expands to ((a) < () ? (a ) : ())
min(,) expands to (() < () ? () : ())


Handling Errors
If you do not provide the correct number of arguments to a macro, you will get an error:
min() results in an error because it requires 2 arguments but only 1 is given
min(,,) results in an error because it’s given 3 arguments, but it only takes 2
Whitespace and Macros
Whitespace is not considered a preprocessing token, so macros that expect one argument are still considered valid when passed an empty argument.
For example `foo()` and `foo()` both supply an empty argument to the macro `foo`
Macros inside string literals
Macros parameters appearing inside string literals are not replaced by their corresponding actual arguments
For example #define foo(x) x, “x” with foo(bar) results in bar, “x” because the `x` inside the string “x” is not replaced by the macro argument.

