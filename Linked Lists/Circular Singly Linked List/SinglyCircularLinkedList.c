#include <stdio.h>
#include <stdlib.h>

// structure for singly circular linked list node
struct Node {
    int data;          // data value
    struct Node *next; // link to next node
};

// function to create a singly circular linked list
struct Node *createSCLL(int n) {
    struct Node *head = NULL, *newNode = NULL, *temp = NULL;
    int data, i;

    if (n <= 0) {
        printf("Number of nodes must be greater than 0.\n");
        return NULL;
    }

    for (i = 1; i <= n; i++) {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            printf("Memory allocation failed\n");
            return head;
        }

        printf("Enter data for node %d: ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            newNode->next = head; // circular link
            temp = newNode;
        } else {
            temp->next = newNode;
            newNode->next = head; // last node points back to head
            temp = newNode;
        }
    }
    return head;
}

// function to display the linked list
void displayList(struct Node *head) {
    if (head == NULL) {
        printf("\nList is empty!\n");
        return;
    }

    struct Node *temp = head;
    printf("\nSingly Circular Linked List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

// insert node at beginning
struct Node *insertAtBegin(struct Node *head) {
    int data;
    printf("Insertion At Beginning\n");
    printf("Enter the data: ");
    scanf("%d", &data);

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    if (head == NULL) {
        ptr->next = ptr; // points to itself
        head = ptr;
    } else {
        struct Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        ptr->next = head;
        temp->next = ptr;
        head = ptr; // update head
    }
    return head;
}

// insert node at end
struct Node *insertAtEnd(struct Node *head) {
    printf("Insertion At End\n");
    int data;
    printf("Enter the data: ");
    scanf("%d", &data);

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    if (head == NULL) {
        ptr->next = ptr;
        head = ptr;
    } else {
        struct Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = head;
    }
    return head;
}

// insert at a given position
struct Node *insertAtPos(struct Node *head) {
    int pos, data, i;
    printf("Enter the position you want to insert the element at: ");
    scanf("%d", &pos);

    if (pos == 1) {
        return insertAtBegin(head);
    }

    printf("Enter the element you want to insert: ");
    scanf("%d", &data);

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    struct Node *temp = head;
    for (i = 1; i < pos - 1 && temp->next != head; i++) {
        temp = temp->next;
    }

    if (i != pos - 1) {
        printf("Position out of range!\n");
        free(newNode);
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// delete node at beginning
struct Node *deleteAtBegin(struct Node *head) {
    if (head == NULL) {
        printf("List is already empty!\n");
        return NULL;
    }

    if (head->next == head) {
        printf("Deleted element: %d\n", head->data);
        free(head);
        return NULL;
    }

    struct Node *temp = head;
    struct Node *last = head;
    while (last->next != head) {
        last = last->next;
    }

    head = head->next;
    last->next = head;

    printf("Deleted element: %d\n", temp->data);
    free(temp);

    return head;
}

// delete node at end
struct Node *deleteAtEnd(struct Node *head) {
    if (head == NULL) {
        printf("List is already empty!\n");
        return NULL;
    }

    if (head->next == head) {
        printf("Deleted element: %d\n", head->data);
        free(head);
        return NULL;
    }

    struct Node *temp = head;
    struct Node *prev = NULL;

    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head;
    printf("Deleted element: %d\n", temp->data);
    free(temp);

    return head;
}

// delete node at given position
struct Node *deleteAtPos(struct Node *head) {
    int pos, i;
    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    if (head == NULL) {
        printf("List is empty!\n");
        return NULL;
    }

    if (pos == 1) {
        return deleteAtBegin(head);
    }

    struct Node *temp = head, *prev = NULL;
    for (i = 1; i < pos && temp->next != head; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (i != pos) {
        printf("Position out of range!\n");
        return head;
    }

    prev->next = temp->next;
    printf("Deleted element: %d\n", temp->data);
    free(temp);

    return head;
}

// reverse the circular linked list
struct Node *reverseList(struct Node *head) {
    if (head == NULL || head->next == head) {
        return head; // empty list or single node
    }

    struct Node *prev = NULL, *curr = head, *next = NULL, *last = head;

    // Move last to the last node (tail)
    while (last->next != head) {
        last = last->next;
    }

    struct Node *stop = head;  // to know when we complete a cycle

    do {
        next = curr->next;
        curr->next = prev ? prev : last;  // point to prev, except first node points to last
        prev = curr;
        curr = next;
    } while (curr != stop);

    head = prev; // new head is the old last node
    return head;
}


// concatenate 2 singly circular linked lists
struct Node *concatList(struct Node *head1, struct Node *head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    struct Node *temp1 = head1;
    while (temp1->next != head1) {
        temp1 = temp1->next;
    }

    struct Node *temp2 = head2;
    while (temp2->next != head2) {
        temp2 = temp2->next;
    }

    temp1->next = head2;
    temp2->next = head1;

    return head1;
}

// main function
int main() {
    struct Node *head = NULL;
    int n, choice;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of nodes.\n");
        return 0;
    }

    head = createSCLL(n); // create list
    displayList(head);

    do {
        printf("\n\nMENU:\n");
        printf("1. Insertion at beginning\n");
        printf("2. Insertion at end\n");
        printf("3. Insertion at a position\n");
        printf("4. Deletion at beginning\n");
        printf("5. Deletion at end\n");
        printf("6. Deletion at a position\n");
        printf("7. Reverse of Linked List\n");
        printf("8. Concatenation of 2 linked lists\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            head = insertAtBegin(head);
            displayList(head);
            break;
        case 2:
            head = insertAtEnd(head);
            displayList(head);
            break;
        case 3:
            head = insertAtPos(head);
            displayList(head);
            break;
        case 4:
            head = deleteAtBegin(head);
            displayList(head);
            break;
        case 5:
            head = deleteAtEnd(head);
            displayList(head);
            break;
        case 6:
            head = deleteAtPos(head);
            displayList(head);
            break;
        case 7:
            head = reverseList(head);
            printf("\nReversed list: ");
            displayList(head);
            head = reverseList(head); // again reverse back to original
            break;
        case 8: {
            int k;
            printf("Enter the number of elements in the second list: ");
            scanf("%d", &k);
            struct Node *head2 = createSCLL(k);
            head = concatList(head, head2);
            printf("\nConcatenated list: ");
            displayList(head);
            break;
        }
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid Choice!\n");
            break;
        }
    } while (choice != 0);

    return 0;
}
