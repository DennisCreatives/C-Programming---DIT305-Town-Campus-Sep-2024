// 2. Operators in C

#include <stdio.h>

// create a student struct
struct Student {
    char name[50];
    int age;
};

int main () {

    // 2. Operators in C
    // Operators are symbols that tell the compiler to perform specific mathematical or logical manipulations. C is rich in built-in operators and provides the following types of operators:
    // Arithmetic Operators
    // Relational Operators
    // Logical Operators
    // Bitwise Operators
    // Assignment Operators
    // Increment and Decrement Operators
    // Conditional Operator
    // Special Operators

    // 2.1 Arithmetic Operators
    // Arithmetic operators are used to perform mathematical operations.
    // addition (+)
    // subtraction (-)
    // multiplication (*)
    // division (/)
    // modulus (remainder) (%)

    // Examples
    int a = 10;
    int b = 3;

    printf("a + b = %d\n", a + b); // Outputs 13
    printf("a - b = %d\n", a - b); // Outputs 7
    printf("a * b = %d\n", a * b); // Outputs 30
    printf("a / b = %d\n", a / b); // Outputs 3 (integer division)
    printf("a %% b = %d\n", a % b); // Outputs 1 (remainder)

    // Note: When using the modulus operator with printf, you need to use %% to print a single %

    // 2.2 Relational Operators
    // Relational operators are used to compare two values.

    int x = 10;
    int y = 5;

    // Equal to (==)
    printf("x == y: %d\n", x == y); // Output: 0 (false)

    // Not equal to (!=)
    printf("x != y: %d\n", x != y); // Output: 1 (true)

    // Greater than (>)
    printf("x > y: %d\n", x > y); // Output: 1 (true)

    // Less than (<)
    printf("x < y: %d\n", x < y); // Output: 0 (false)

    // Greater than or equal to (>=)
    printf("x >= y: %d\n", x >= y); // Output: 1 (true)

    // Less than or equal to (<=)
    printf("x <= y: %d\n", x <= y); // Output: 0 (false)

    // 2.3 Logical Operators
    // Logical operators are used to combine conditional statements.
    int i = 1;
    int j = 0;

    // Logical AND (&&) -> returns true(1) if both operands evaluates to true
    printf("i && j: %d\n", i && j); // output: 0 (false)

    // Logical OR (||) -> returns true(1) if at least one operand evaluates to true
    printf("i || j: %d\n", i || j); // output: 1 (true)

    // Logical NOT (!) -> negates an expression
    printf("!j: %d\n", !j); // output: 1 (true)

    // 2.4 Bitwise Operators
    // Bitwise operators perform bit-level operations on integer values.

    unsigned int p = 60; // 0011 1100 in binary
    unsigned int q = 13; // 0000 1101 in binary

    // Bitwise AND (&)
    printf("p & q: %u\n", p & q); // Output: 12 (0000 1100)

    // Bitwise OR (|)
    printf("p | q: %u\n", p | q); // Output: 61 ()

    // Bitwise XOR (^)
    printf("p ^ q: %u\n", p ^ q); // Output: 49 ()

    // Bitwise NOT (~)
    printf("~q: %u\n", ~q); // Output: 4294967282 (  in 32-bit)

    // Left shift (<<)
    printf("p << 2: %u\n", p << 2); // Output: 240 ()

    // Right shift (>>)
    printf("p >> 2: %u\n", p >> 2); // Output: 15 ()


    // 2.5 Assignment Operators
    // Assignment operators are used to assign values to variables.

    
    // simple assignment (=)
    int a = 10;

    // add and assign (+=)
    a += 5;  // Equivalent to: a = a + 5
    printf("a after a += 5: %d\n", a);  // Output: 15

    // subtract and assign (-=)
    a -= 3;  // Equivalent to: a = a - 3
    printf("a after a -= 3: %d\n", a);  // Output: 12

    // multiply and assign (*=)
    a *= 2;  // Equivalent to: a = a * 2
    printf("a after a *= 2: %d\n", a);  // Output: 24

    // divide and assign (/=)
    a /= 4;  // Equivalent to: a = a / 4
    printf("a after a /= 4: %d\n", a);  // Output: 6

    // modulus and assign (%=)
    a %= 4;  // Equivalent to: a = a % 4
    printf("a after a %%= 4: %d\n", a); // Output: 2

    // 2.6 Increment and Decrement Operators
    // These operators are used to increment or decrement the value of a variable by 1.

    int a = 5, b = 5;
    int result;
    
    // increment (++)
    result = ++a;  // Pre-increment
    printf("After ++a: a = %d, result = %d\n", a, result);  // Output: a = 6, result = 6
    
    result = b++;  // Post-increment
    printf("After b++: b = %d, result = %d\n", b, result);  // Output: b = 6, result = 5
    
    // decrement (--) TODO

    // 2.7 Conditional Operator
    // The conditional operator is the only ternary operator in C. It's a shorthand for an if-else statement.
    // Syntax: condition ? expression1 : expression2
    // Example:

    int a = 10, b = 5;
    int max = (a > b) ? a : b;
    
    printf("The maximum of %d and %d is %d\n", a, b, max);  // Output: The maximum of 10 and 5 is 10

    // 2.8 Special Operators
    // C has some special operators for specific purposes.

    // Operator     Description                                     Example
    // sizeof()     Returns the size of a data type                 sizeof(int)
    // &            Returns the address of a variable               &a
    // *            Pointer to a variable                           *p
    // .            Accesses members of a struct                    student.name
    // ->           Accesses members of a struct through a pointer  student->name
    
    // Example:
    int a = 10;
    int *z = &a;
    
    struct Student s1 = {"John", 20};
    struct Student *ptr = &s1;
    
    printf("Size of int: %zu bytes\n", sizeof(int));  // Output: 4 bytes (typically)
    printf("Address of a: %p\n", (void*)&a);          // Output: Memory address of 'a'
    printf("Value of a through pointer: %d\n", *z);   // Output: 10
    
    printf("Student name: %s\n", s1.name);            // Output: John
    printf("Student age through pointer: %d\n", ptr->age); // Output: 20
    
    return 0;

    // Next -> Program Control Structures
}