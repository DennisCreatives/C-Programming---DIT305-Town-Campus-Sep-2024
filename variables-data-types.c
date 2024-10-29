#include <stdio.h>
#include <float.h>
#include <stdbool.h>
#include <limits.h>

// defined constants
#define PI 3.14159
#define MAX_ARRAY_SIZE 100

// create an enum
enum Color {RED, GREEN, BLUE};

int main () {

    // C Programming Tutorial 

    // 1. Variables and Data Types

    // 1.1 Introduction
    // C is a powerful, efficient, and flexible programming language developed by Dennis Ritchie at Bell Labs in the early 1970s. It has significantly influenced many modern programming languages and is widely used for:

    /*
    - System programming
    - Embedded systems
    - Application development
    - Game development
    - Operating system development
    */

    // C is known for its:

    /*
    - Efficiency and performance
    - Portability across different platforms
    - Low-level memory manipulation capabilities
    - Extensive standard library
    */

    // This tutorial will cover the fundamental concepts of variables and data types in C, providing a solid foundation for your C programming journey.

    // 1.2 Character Sets

    // C programs are written using the ASCII (American Standard Code for Information Interchange) character set. Understanding the character set is crucial for writing valid C code and working with character data.

    // The ASCII character set includes:
    // 1. Lowercase letters (a-z)
    // 2. Uppercase letters (A-Z)
    // 3. Digits (0-9)
    // 4. Special characters:
    // -> Punctuation: . , : ; ? ! ' " ( ) [ ] { } < >
    // -> Mathematical symbols: + - * / = % ^ &
    // -> Other symbols: @ # $ _ | \ ~ `

    // 5. White space characters:
    // -> Space
    // -> Tab (\t)
    // -> Newline (\n)
    // -> Carriage return (\r)
    // -> Form feed (\f)
    // -> Vertical tab (\v)

    // C is case-sensitive, meaning that uppercase and lowercase letters are treated as distinct characters. For example, 'A' and 'a' are different, and variables named 'count' and 'Count' would be considered different variables.

    // 1.3 Keywords
    // Keywords are reserved words in C that have special meanings and cannot be used as identifiers (such as variable names or function names). They are the building blocks of C syntax and are used to define the structure and behavior of your programs.

    // Here's a complete list of keywords in C:
    // 1. Data types:
    // - int
    // - float
    // - double
    // - char
    // - void
    // - _Bool (C99)


    // 2. Type modifiers:
    // - short
    // - long
    // - signed
    // - unsigned

    // 3. Storage class specifiers:
    // auto
    // register
    // static
    // extern

    // 4. Control flow:
    // - if
    // - else
    // - switch
    // - case
    // - default
    // - for
    // - do
    // - while
    // - break
    // - continue
    // - goto

    // 5. Other keywords:
    // - return
    // - sizeof
    // - typedef
    // - const
    // - volatile

    // It's important to note that you cannot use these keywords for any purpose other than their intended use in the language. For example, you cannot name a variable 'int' or create a function called 'if'.


    // 1.4 Variables

    // Variables are named storage locations in memory that hold data. They are fundamental to programming, allowing you to store, retrieve, and manipulate data throughout your program.

    // Key points about variables in C:
    // Declaration: You must declare a variable before using it. The declaration specifies the variable's name and data type.

    // Naming conventions (Rules)
    // 1. Can contain letters, digits, and underscores
    // int _age100;
    // 2. Must start with a letter or underscore
    // float discount;
    // 3. Cannot use keywords as variable names
    // int if;
    // 4. Case-sensitive (age, Age, and AGE are different variables)


    // Initialization: You can optionally initialize a variable when you declare it.
    // Scope: Variables have different scopes (local, global) depending on where they are declared.

    // Examples of variable declarations and initializations: 

    // Declaration without initialization
    int count; 
    // Declaration with initiliazation
    int max_value = 100;
    // Floating-point variable
    float pi = 3.14159;
    // Character variable
    char grade = 'A';
    // Multiple declaration in one line
    int x, y, z;

    // 1.5 Data Types

    // C provides several built-in data types to represent different kinds of data. Understanding these types is crucial for efficient memory usage and accurate calculations.

    // 1. Integer types:

    // a. int: The most commonly used integer type. Typically 4 bytes (32 bits) on modern systems.
    // Range: -2,147,483,648 to 2,147,483,647 (for 32-bit int)

    // b. short: Used for smaller integer values. Typically 2 bytes (16 bits).
    // Range: -32,768 to 32,767

    // c. long: Used for larger integer values. Typically 4 or 8 bytes.
    // Range: At least -2,147,483,648 to 2,147,483,647

    // 2. Unsigned integer types:
    // unsigned int, unsigned short, unsigned long, unsigned long long
    // These types only represent non-negative integers, effectively doubling the positive range


    // 3. Floating-point types:

    // a. float: Single-precision floating-point. Typically 4 bytes (32 bits).
    // Precision: About 7 decimal digits
    // b. double: Double-precision floating-point. Typically 8 bytes (64 bits).
    // Precision: About 15 decimal digits

    // 4. Character type:

    // char: Represents a single character. 1 byte (8 bits).
    // Range: -128 to 127 or 0 to 255 (depending on whether it's signed or unsigned)


    // 5. Boolean type (C99 and later):

    // _Bool: Represents true (1) or false (0)
    // You can use the bool type by including <stdbool.h>

    // Examples:

    // integer
    int myInt = 42;

    // U suffix for unsigned
    unsigned int ui = 3000000000U;

    // L suffix for long
    long myLong = 1234567890L;

    // F suffix for float
    float myFloat = 3.14159f;

    // double
    double myDouble = 2.7182818284590452;

    // character
    char myChar = 'C';

    // boolean 
    bool myBool = true; // true is 1, false is 0

    // Output these variables
    printf("My integer: %d\n", myInt);
    printf("Unsigned Integer: %u\n", ui);
    printf("My Long: %ld\n", myLong);
    printf("My Float: %f\n", myFloat);
    printf("My Double: %f\n", myDouble);
    printf("My Charcater: %c\n", myChar);
    printf("My Boolean: %d\n", myBool);


    // Printing size and range of integer types
    printf("Size of an int: %zu bytes", sizeof(int));
    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);

    // Printing the size and range of float
    printf("Size of a float: %zu\n", sizeof(float));
    printf("Range of float: %e to %e\n", FLT_MIN, FLT_MAX);

    // 1.6 Qualifiers
    // Qualifiers modify the properties of variables, providing additional information to the compiler about how the variable should be treated or stored.

    // 1. Type qualifiers:
    // const: Makes a variable read-only after initialization.
    const int MAX_USERS = 1000; // cannot be modified after initialization
    printf("The maximum number of users is: %d\n", MAX_USERS);

    // volatile: Indicates that a variable can change unexpectedly (e.g., by hardware).
    volatile int sensor_value; // may change without explicit assignment in the code

    // 1.7 Constants
    // Constants are fixed values that do not change during program execution. They can improve code readability and make maintenance easier.

    // Types of constants:
    // 1. Integer constants:
    // Decimal: 42, 1000, -5
    // Octal (base 8): 052 (starts with 0)
    // Hexadecimal (base 16): 0x2A, 0xFF (starts with 0x or 0X)

    // 2. Floating-point constants:
    // 3.14, 2.5e-3 (scientific notation)

    // 3. Character constants:
    // 'A', '\n' (newline), '\t' (tab), '\0' (null character)

    // 4. String constants:
    // "Hello, World!"

    // 5. Enumeration constants:
    enum DAYS {MON, TUE, WED, THURS, FRI, SAT, SUN};

    // 6. Defined constants
    #define PI 3.14159
    #define MAX_BUFFER_SIZE 1024

    // Example of using varioustypes of constants
    const int MAX_VOTERS = 1000;

    printf("Integer constant: %d\n", 42);
    printf("Octal constant: %o\n", 052);
    printf("Hexadecimal Constant: %x\n", 0x2A);

    printf("Floating-point constant: %f\n", 3.14);
    printf("Scientific Notation: %e\n", 2.5e-3);

    printf("Character constant: %c\n", 'A');
    printf("String constant: %s\n", "Hello Everyone!");

    printf("Defined constant PI: %f\n", PI);
    printf("Constant variable MAX_VOTERS: %d\n", MAX_VOTERS);

    enum Color my_color = RED;
    printf("Enumeration constant: %d\n", my_color);

    // 1.8 Statements
    // Statements are instructions that perform actions in a C program. They are the building blocks of your program's logic.
    // Types of statements:

    // 1. Declaration statements:
    int x;
    float y = 3.14;

    // 2. Assignment statements
    x = 5;
    y += 2; // Compound statement: same as y = y + 2;

    // 3. Function call statements
    // 4. Control flow statements
    // 5. Jump statements
    // 6. Compound statements (blocks)
    // 7. Null Statements

    // 1.9 Expressions
    // Expressions are combinations of variables, constants, operators, and function calls that yield a value. They are the core of computations in C.

    // Types of expressions:
    // 1. Arithmetic expressions:
    // 2. Relational expressions:
    // 3. Logical expressions
    // 4. Bitwise expressions
    // 5. Assignment expressions
    // 6. Increment and Decrement expressions
    // 7. Conditional expressions (ternary operator) -> int a = (b > c) ? b : c;
    // 8. Comma expressions -> int p, q, r; x = 10, y = 20;

    // Next -> 2. Operators in C



    return 0;
}