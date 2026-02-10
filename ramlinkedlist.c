#include <stdio.h>
#include <stdlib.h> // Required for dynamic memory allocation (malloc)
//I have added a comment in line 3
//I have added a comment in line 4
// Define the structure for a node in the linked list
struct Node {
    int data;          // Data part
    struct Node* next; // Pointer to the next node
};

// Function to traverse and print the linked list
void traverse_and_print(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Initialize nodes
    struct Node* head = NULL;
    struct Node* one = NULL;
    struct Node* two = NULL;
    struct Node* three = NULL;

    // Allocate memory for nodes dynamically
    one = (struct Node*)malloc(sizeof(struct Node));
    two = (struct Node*)malloc(sizeof(struct Node));
    three = (struct Node*)malloc(sizeof(struct Node));

    // Assign data values
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL; // NULL indicates the end of the list

    // Save address of the first node in head
    head = one;

    // Traverse and print the list
    printf("Created linked list:\n");
    traverse_and_print(head);

    // Free allocated memory (good practice)
    free(one);
    free(two);
    free(three);

    return 0;
}
