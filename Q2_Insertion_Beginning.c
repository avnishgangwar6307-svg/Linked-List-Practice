#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *second, *third, *newNode;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    newNode = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Insert 5 at beginning
    newNode->data = 5;
    newNode->next = head;
    head = newNode;

    printf("Linked List after insertion: ");

    struct Node *temp = head;

    while (temp != NULL) {
        printf("%d", temp->data);

        if (temp->next != NULL)
            printf(" -> ");

        temp = temp->next;
    }

    return 0;
}