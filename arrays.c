// 4. Arrays in C

#include <stdio.h>

#define ARRAY_SIZE 5

int main () {

    // An array in C is a fixed-size collection of elements of the same data type, stored in contiguous memory locations. Arrays provide an efficient way to store and access multiple values under a single variable name.

    // 4.1 One-Dimensional Arrays

    // 4.1.1 Declaration of Arrays
    // The general syntax for declaring an array is:

    // syntax
    // data_type array_name[array_size];

    // Example
    // Declares an integer array of size 5
    int numbers[5];

    // Declares a float array of size 100
    float prices[100];

    // Declares a character array of size 20
    char name[20];

    // 4.1.2 Array Initialization
    // You can initialize arrays at the time of declaration
    int nums[5] = {1, 2, 3, 4, 5};

    // Size is automatically determined
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    // If you provide fewer initializers than the array size, the remaining elements are initialized to 0
    int partial[5] = {1, 2, 3}; // Equivalent to {1, 2, 3, 0, 0}

    // 4.1.3 Accessing Array Elements
    // Array elements are accessed using their index, which starts from 0
    // syntax
    // array_name[index];

    // Example
    int my_numbers[5] = {10, 20, 30, 40, 50};

    // Access the first element in the array
    printf("First element: %d\n", my_numbers[0]); // Output: 10
    // Access the third element in the array
    printf("Third element: %d\n", my_numbers[2]); // Output: 30
    // Access the fifth element in the array
    printf("Fifth element: %d\n", my_numbers[4]); // Output: 50

    // Modifying an element in ana array
    // change 30 to 25
    my_numbers[2] = 25;
    printf("Modified Third element: %d\n", my_numbers[2]); // Output: 25

    // change 50 to 55
    my_numbers[4] = 55;
    printf("Modified Fifth element: %d\n", my_numbers[4]); // Output: 55

    // 4.1.4 Array Bounds
    // C does not perform bounds checking on array accesses. Accessing an array out of its bounds leads to undefined behavior

    int ages[5] = {16, 17, 18, 19, 20};

    printf("%d\n", ages[5]); // Undefined behavior: accessing out of bounds

    // 4.2 Multi-Dimensional Arrays
    // C supports multi-dimensional arrays. The most common is the two-dimensional array, which can be thought of as a table with rows and columns.

    // 4.2.1 Declaration of 2D Arrays

    // syntax
    // data_type array_name[rows][columns];

    // Example
    int two_d[3][4]; // Declares a integer array

    // 4.2.2 Initialization of 2D Arrays
    // You can initialize 2D arrays at declaration
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int new_matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Element at row 1, column 2 is 
    printf("Element at new_matrix[1][2]: %d\n", new_matrix[1][2]);

    printf("Element at new_matrix[2][1]: %d\n", new_matrix[2][1]);

    // Modifying an element
    // modify 8 to 18
    new_matrix[2][1] = 18;
    printf("Modified Element at new_matrix[2][1]: %d\n", new_matrix[2][1]);

    // 4.4 Common Array Operations

    // 4.4.1 Iterating Through an Array
    // You can use loops to iterate through array elements

    // create an array of temperatures
    float temperatures[ARRAY_SIZE] = {17.0, 23.3, 37.6, 55.4, 7.6};

    for (int i = 0; i < 5; i++) {
        printf("%f ", temperatures[i]); 
        // Output: 17.0 23.3 37.6 55.4 7.6
    }

    printf("\n");

    // 4.4.2 Finding the Length of an Array
    // You can use the sizeof operator to find the length of an array
    int new_array[] = {10, 20, 30, 40, 50, 60, 70};
    int length = sizeof(new_array) / sizeof(new_array[0]);

    printf("Array Length: %d\n", length);

    // 4.5 Common Pitfalls and Best Practices

    // 1. Array Index Out of Bounds: Always ensure that array indices are within the declared bounds.
    // 2. Uninitialized Arrays: Elements of uninitialized arrays contain garbage values. Always initialize arrays or set their values before use.
    // 3. Array Size: Use symbolic constants or #define for array sizes to make your code more maintainable.
    // 4. Array Decay: When passing arrays to functions, the size information is lost. Always pass the size as a separate parameter.
    // 5. Stack Overflow: Be cautious when declaring large arrays on the stack. Consider using dynamic memory allocation for very large arrays.

    // In conclusion:-
    // Arrays are a fundamental concept in C programming, essential for managing collections of data efficiently. Understanding how to declare, initialize, and manipulate arrays is crucial for effective C programming.

    // Next -> Procedures and Functions

    return 0;
}