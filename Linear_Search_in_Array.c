#include <stdio.h>

int main() {
    int size, key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int index = -1; // Initialize index to -1

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            index = i;
            break; // Element found, exit the loop
        }
    }

    if (index != -1) {
        printf("Element %d found at index %d.\n", key, index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
