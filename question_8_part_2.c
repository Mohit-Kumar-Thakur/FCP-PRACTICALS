#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100
#define MAX_ENTRIES 100

// Define a structure for storing name and address
struct Person {
    char name[MAX_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
};

int main() {
    int n;

    // Input the number of entries
    printf("Enter the number of entries (n): ");
    scanf("%d", &n);

    // Check if n is within a valid range
    if (n < 1 || n > MAX_ENTRIES) {
        printf("Invalid input for the number of entries.\n");
        return 1; // Exit with an error code
    }

    // Declare an array of structures
    struct Person people[MAX_ENTRIES];

    // Input names and addresses
    printf("Enter names and corresponding addresses for %d entries:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Entry %d:\n", i + 1);

        // Input name
        printf("Name: ");
        scanf("%s", people[i].name);

        // Input address
        printf("Address: ");
        getchar(); // Consume the newline character left by the previous scanf
        fgets(people[i].address, MAX_ADDRESS_LENGTH, stdin);
        people[i].address[strcspn(people[i].address, "\n")] = '\0'; // Remove the newline character
    }

    // Sort names alphabetically using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(people[j].name, people[j + 1].name) > 0) {
                // Swap the entries if needed
                struct Person temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }

    // Print alphabetically sorted names and addresses
    printf("\nAlphabetically Sorted Entries:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", people[i].name);
        printf("Address: %s\n\n", people[i].address);
    }

    return 0;
}
