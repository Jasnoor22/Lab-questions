#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

// Create node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// a) Insert at beginning
void insertBeginning(int data) {
    struct Node* newNode = createNode(data);

    if (head != NULL) {
        head->prev = newNode;
        newNode->next = head;
    }
    head = newNode;
}

// b) Insert at end
void insertEnd(int data) {
    struct Node* newNode = createNode(data);

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// c) Insert at position
void insertAtPosition(int data, int pos) {
    if (pos == 1) {
        insertBeginning(data);
        return;
    }

    struct Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }

    struct Node* newNode = createNode(data);
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

// d) Delete from beginning
void deleteBeginning() {
    if (head == NULL) return;

    struct Node* temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    free(temp);
}

// e) Delete from end
void deleteEnd() {
    if (head == NULL) return;

    struct Node* temp = head;

    if (temp->next == NULL) {
        free(temp);
        head = NULL;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;
    free(temp);
}

// f) Delete at position
void deleteAtPosition(int pos) {
    if (head == NULL) return;

    struct Node* temp = head;

    if (pos == 1) {
        deleteBeginning();
        return;
    }

    for (int i = 1; i < pos && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    free(temp);
}

// g) Search
void search(int key) {
    struct Node* temp = head;
    int pos = 1;

    while (temp != NULL) {
        if (temp->data == key) {
            printf("Found at position %d\n", pos);
            return;
        }
        temp = temp->next;
        pos++;
    }

    printf("Not found\n");
}

// h) Display
void display() {
    struct Node* temp = head;

    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
