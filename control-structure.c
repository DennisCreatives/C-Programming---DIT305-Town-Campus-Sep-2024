// Program Control Flow Structures

#include <stdio.h>

int main () {

    // 3. Program Control Structures
    // Control structures in C allow you to control the flow of your program's execution. They enable you to make decisions, repeat actions, and organize your code into logical blocks. The main types of control structures in C are:

    // i. Conditional Statements (Decision Making)
    // ii. Loops (Iteration)
    // iii. Jump Statements

    // 3.1 Conditional Statements
    // Conditional statements allow your program to make decisions based on certain conditions.

    // 3.1.1 if Statement
    // The if statement is used to execute a block of code only if a specified condition is true.
    // Syntax:
    // if (condition) {
        // code to be executed if condition is true
    // }

    // Example
    int age = 20;

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    }

    // 3.1.2 if-else Statement
    // The if-else statement allows you to execute one block of code if the condition is true and another if it's false.
    // Syntax:
    // if (condition) {
        // code to be executed if condition is true
    // } else {
        // code to be executed if condition is false
    // }

    // Example: A program to check if a number is even or odd
    int number = 16;

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    // 3.1.3 if-else if-else Ladder
    // When you need to check multiple conditions, you can use the if-else if-else ladder.
    // Syntax:
    // if (condition1) {
        // code to be executed if condition1 is true
    // } else if (condition2) {
        // code to be executed if condition1 is false and condition2 is true
    // } else if (condition3) {
        // code to be executed if condition1 is false and condition2 are false and condition3 is true
    // } else {
        // code to be executed if all conditions are false
    // }


    // Next Week 29/10/2024
    // Example:

    int score = 75;

    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    // Write a C program that checks if a number is 0, negative or positive.
    // solution
    // create a number (integer) of your choice
    int num = 0;
    // use the ladder for this
    // use the number line to solve this
    if (num > 0) {
        int x = 10;
        printf("The number is positive\n");
    } else if (num == 0) { 
        printf("The number is zero\n");
    } else if (num < 0) {
        printf("The number is negative\n");
    } else {
        printf("Invalid number");
    }


    // 3.1.4 switch Statement
    // The switch statement is used when you have multiple possible execution paths based on the value of a variable or expression.
    // Syntax:

    // switch (expression) {
        // case constant1:
            // code to be executed if expression equals constant1
            // break;
        // case constant2:
            // code to be executed if expression equals constant2
            // break;
        // ...
        // default:
            // code to be executed if expression doesn't match any cases
    // }

    // Example:

    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good Job!\n");
            break;
        case 'C':
            printf("Well Done!\n");
            break;
        case 'D':
            printf("Pass!\n");
            break;
        default:
            printf("Better try again!\n");
            break;
    }

    // Key points about switch:
    // The break statement is important to prevent fall-through to the next case.
    // The default case is optional and is executed if no case matches.
    // Only integer types (including char) can be used in the switch expression.



    // 3.2 Loops
    // Loops allow you to execute a block of code repeatedly.
    // There are three types of loops in C name: while loop, do-while loop and for loop

    // 3.2.1 while Loop
    // The while loop executes a block of code as long as a specified condition is true.
    // Syntax:

    // while (condition) {
        // code to be executed if the condition is true
    // }

    // Example:
    // Expected Output: 1 2 3 4 5 6 7 8 9 10
    int y = 1;

    while (y <= 10) {
        // printf("%d ", y); // on the same line
        printf("%d\n", y); // on its own line 1
        y++; // same as y = y + 1 or y += 1
    }

    printf("=====================================================\n");

    // 3.2.2 do-while Loop
    // The do-while loop is similar to the while loop, but it executes the code block at least once before checking the condition.
    // Syntax:

    // do {
        // code to execute
    // } while (condition);

    // Example:
    // Expected Output: 1 2 3 4 5 6 7 8 9 10
    int n = 1;

    do {
        printf("%i ", n); // output is 1 (the loop executes at least once)
        n++;
    } while (n >= 10); // Condition is false

    printf("\n=================================================\n");

    // 3.2.3 for Loop (bounded loop)
    // The for loop is used when you know in advance how many times you want to execute a block of code.

    // Syntax:
    // for (initialization; condition; update) {
        // code to execute
    // }

    // Initialization happens only once
    // code executes if the condition is true
    // update is used to update the loop counter


    // Example:
    // Expected Output: 1 2 3 4 5 6 7 8 9 10

    for (int i = 1; i <= 10; i++) {
        printf("%d ", i); // 
    }

    printf("\n=================================================\n");

    // Challenge:
    // Expected Output: -60 -45 -30 -15 0 15 30 45 60
    for (int i = -60; i <= 60; i+=15) {
        printf("%d ", i);
    }

    printf("\n=================================================\n");

    // challenge
    // Expected output: 10 8 6 4 2 0 using a while loop

    int p = 10;

    while (p >= 0) {
        printf("%d ", p);
        p = p - 2;
    }


    printf("\n=================================================\n");


    // 3.3 Jump Statements
    // Jump statements allow you to transfer control of the program to another part of your code. (break, continue and goto)

    // 3.3.1 break Statement
    // The break statement is used to exit a loop or switch statement prematurely.

    // Example:

    for (int x = 1; x <= 10; x++) {
        if (x == 5) {
            break;
        }
        printf("%d ", x); // 1 2 3 4
    }

    printf("\n=================================================\n");


    // 3.3.2 continue Statement
    // The continue statement skips the rest of the current iteration of a loop and continues with the next iteration.
    // Example:

    for (int x = 1; x <= 5; x++) {
        if (x == 3) {
            continue;
        }
        printf("%d ", x); // 1 2 4 5
    } 


    printf("\n=================================================\n");

    // 3.3.3 goto Statement
    // The goto statement allows you to jump to a labeled statement within the same function. However, its use is generally discouraged as it can make code harder to read and maintain.
    // Example:
    int z = 0;

    start:
        if (z < 5) {
            printf("%d ", z);
            z++;
            goto start;
        }

    printf("\n=================================================\n");

    // 3.4 Nested Control Structures
    // You can nest control structures within each other to create more complex program flows.
    // Example of nested loops:

    for (int x = 1; x <= 12; x++) {
        for (int y = 1; y <= 12; y++) {
            printf("%d X %d = %d\n", x, y, x * y);
        }
        printf("------------------------------------------------\n");
    }


    printf("\n=================================================\n");

    // Next Lecture: 4. Arrays in C

    return 0;
}