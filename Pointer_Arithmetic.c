#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // a. Increment a pointer
    printf("a. Increment a pointer: %d\n", *(++ptr));

    // b. Decrement a pointer
    printf("b. Decrement a pointer: %d\n", *(--ptr));

    // c. Add an integer to a pointer
    int offset = 2;
    printf("c. Add an integer to a pointer: %d\n", *(ptr + offset));

    // d. Subtract an integer from a pointer
    printf("d. Subtract an integer from a pointer: %d\n", *(ptr - offset));

    // e. Subtract two pointers of the same type
    int *ptr2 = arr + 3;
    printf("e. Subtract two pointers: %ld\n", ptr2 - ptr);

    return 0;
}
