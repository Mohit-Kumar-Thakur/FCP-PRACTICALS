#include <stdio.h>
#include <string.h>

// Enum to represent the data type
typedef enum {
    INTEGER,
    FLOAT,
    CHARACTER,
    STRING
} DataType;

// Union to store different types of data
typedef union {
    int integerData;
    float floatData;
    char charData;
    char stringData[50]; // Assuming a fixed-size string for simplicity
} DataValue;

// Structure representing the generic data container
typedef struct {
    DataType type;
    DataValue value;
} GenericDataContainer;

// Function to set data in the container
void setData(GenericDataContainer *container, DataType type, void *data) {
    container->type = type;

    switch (type) {
        case INTEGER:
            container->value.integerData = *((int *)data);
            break;
        case FLOAT:
            container->value.floatData = *((float *)data);
            break;
        case CHARACTER:
            container->value.charData = *((char *)data);
            break;
        case STRING:
            strncpy(container->value.stringData, (char *)data, sizeof(container->value.stringData) - 1);
            break;
        default:
            printf("Invalid data type\n");
    }
}

// Function to get data from the container
void getData(GenericDataContainer *container) {
    switch (container->type) {
        case INTEGER:
            printf("Integer Data: %d\n", container->value.integerData);
            break;
        case FLOAT:
            printf("Float Data: %f\n", container->value.floatData);
            break;
        case CHARACTER:
            printf("Character Data: %c\n", container->value.charData);
            break;
        case STRING:
            printf("String Data: %s\n", container->value.stringData);
            break;
        default:
            printf("Invalid data type\n");
    }
}

int main() {
    // Example usage
    GenericDataContainer container;

    int intValue = 42;
    setData(&container, INTEGER, &intValue);
    getData(&container);

    float floatValue = 3.14;
    setData(&container, FLOAT, &floatValue);
    getData(&container);

    char charValue = 'A';
    setData(&container, CHARACTER, &charValue);
    getData(&container);

    char stringValue[] = "Hello, World!";
    setData(&container, STRING, stringValue);
    getData(&container);

    return 0;
}

