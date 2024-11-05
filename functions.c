// 6. Procedures and Functions in C

#include <stdio.h>
#include <time.h>
#include <stdarg.h>

// function prototype
int addNumbers(int a, int b);

// create your function here

// Function Definition Example
int addNumbers(int a, int b) {
    return a + b;
}

// Function Types
// function with no parameters and return value
void greet() {
    printf("Hello, Everyone!\n");
}

// function with parameters and no return value
void printSum(int x, int y) {
    int sum = x + y;
    printf("Sum: %d\n", sum);
}

// function with no parameters but with return value
int getCurrentYear() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    return tm.tm_year + 1900;
}

// Functions with Parameters and Return Value
int multiply(int a, int b) {
    return a * b;
}

// Pass by Value Paramater
// a function to modify the value of a variable
void modifyValue(int x) {
    x = x * 2;
    printf("Inside modifyValue function: %d\n", x);
}

// Pass by Reference
void modifyValue2(int *x) {
    *x = *x * 2;
    printf("Inside function: %d\n", *x);
}

// Function prototype
int add(int, int);

// Function definition
int add(int a, int b) {
    return a + b;
}

// recursive
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

inline int max(int a, int b) {
    return (a > b) ? a : b;
}


int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    
    va_end(args);
    return total;
}

int main () {
    // In C, procedures and functions are blocks of code that perform specific tasks. They help in organizing code, promoting reusability, and breaking down complex problems into smaller, manageable parts. In C, the term "function" is used for both procedures (which don't return a value) and functions (which return a value).

    // 6.1 Function Basics

    // 6.1.1 Function Declaration

    // A function declaration tells the compiler about a function's name, return type, and parameters. The general syntax is:

    // return_type function_name(parameter_list);

    // example
    // Function Declaration
    // int addNumbers(int a, int b); 

    // 6.1.2 Function Definition
    // A function definition includes the actual body of the function. The general syntax is:

    // return_type function_name(parameter_list) {
    //     // function body
    //     return value; // for non-void functions
    // }

    // Example
    // int addNumbers(int a, int b) {
    //     return a + b;
    // }

    // 6.1.3 Function Call
    // To use a function, you call it in your code: (type the function name followed by parentheses)

    // function call example
    int result = addNumbers(5, 3);
    printf("Result is: %d\n", result);

    // 6.2 Types of Functions

    // 6.2.1 Functions with No Parameters and No Return Value (void)
    // These functions don't take any input and don't return any value

    // call the void function
    greet();

    // 6.2.2 Functions with Parameters and No Return Value
    // These functions take input but don't return any value:

    // call the printSum function
    printSum(5, 3); // Output: 8

    // 6.2.3 Functions with No Parameters but with Return Value
    // These functions don't take input but return a value

    // call the getCurrentYear() function
    printf("Current Year is: %d\n", getCurrentYear());

    // 6.2.4 Functions with Parameters and Return Value
    // These functions take input and return a value:

    // call the multiply() function
    int product = multiply(4, 5);
    printf("The product is: %d\n", product);

    // 6.3 Function Parameters

    // 6.3.1 Pass by Value

    // In C, arguments are typically passed by value, meaning a copy of the data is passed to the function
    int num = 10;
    modifyValue(num);
    printf("In main function: %d\n", num);

    // 6.3.2 Pass by Reference
    // To modify the original value, you can pass a pointer
    int num2 = 10;
    modifyValue2(&num2);
    printf("In main: %d\n", num2);  // num2 is modified

    // 6.4 Function Prototypes
    // Function prototypes are declarations of functions before they are defined. They allow you to use functions before their actual definition in the code

    printf("Sum: %d\n", add(5, 3));

    // 6.5 Recursive Functions
    // Recursive functions are functions that call themselves:
    printf("Factorial of 5: %llu\n", factorial(5));  // Output: 120

    // 6.6 Inline Functions
    // Inline functions are a request to the compiler to insert the function's code directly at the call site, potentially improving performance for small, frequently called functions:
    printf("Max of 10 and 20: %d\n", max(10, 20));  // Output: 20

    // Note: The inline keyword is a suggestion to the compiler, which may or may not inline the function.


    // 6.7 Variable-Length Argument Lists
    // C supports functions with a variable number of arguments:
    printf("Sum: %d\n", sum(4, 10, 20, 30, 40));  // Output: 100
    
    return 0;

    // 6.8 Best Practices

    // 1. Function Naming: Use descriptive names that indicate the function's purpose.
    // 2. Single Responsibility: Each function should perform a single, well-defined task.
    // 3. Function Length: Keep functions relatively short and focused.
    // 4. Parameter Passing: Be clear about whether a function modifies its parameters.
    // 5. Return Values: Always check return values, especially for functions that can fail.
    // 6. Error Handling: Use return values or global variables (like errno) to indicate errors.
    // 7. Consistency: Maintain a consistent style in function declarations and definitions.

    // Functions are a fundamental building block in C programming. 
    
    // They allow you to 
    // - structure your code, 
    // - promote reusability, and 
    // - create more maintainable programs. 

    // Understanding how to effectively use functions is crucial for writing efficient and organized C code.

}

// Or create functions here ...
