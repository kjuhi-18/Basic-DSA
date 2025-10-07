#include <stdio.h>
#include <stdlib.h>

// Structure for a node in linked list
struct Node {
    int data;              // data part of node
    struct Node* next;     // pointer to next node
};

// ================== CREATION & DISPLAY ==================

// Function to create a linked list with n nodes
struct Node* createList(int n) {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int value, i;

    for (i = 1; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        if (newNode == NULL) { // check for memory allocation failure
            printf("Memory allocation failed!\n");
            exit(1);
        }

        printf("Enter data for node %d: ", i);
        scanf("%d", &value);

        newNode->data = value;   // assign value
        newNode->next = NULL;    // next initially NULL

        if (head == NULL) {
            // first node → make it head
            head = newNode;
            temp = head;
        } else {
            // link new node at the end
            temp->next = newNode;
            temp = newNode;
        }
    }

    return head; // return starting node
}

// Function to display linked list
void displayList(struct Node* head) {
    struct Node* temp = head;

    printf("\nThe linked list is: ");
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

// ================== INSERTION FUNCTIONS ==================

// Insert node at beginning
struct Node* insertatfirst(struct Node* head) {
    int data;
    printf("Insertion At Beginning\n");
    printf("Enter the data: ");
    scanf("%d", &data);

    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;   // new node points to old head
    return ptr;         // new node becomes head
}

// Insert node at end
struct Node* insertatend(struct Node* head) {
    int data;
    printf("Insertion At End\n");
    printf("Enter the data: ");
    scanf("%d", &data);

    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = NULL;

    struct Node* p = head;
    while (p->next != NULL) { // move to last node
        p = p->next;
    }
    p->next = ptr; // link new node
    return head;
}

// Insert node at a given position (index starts from 1)
struct Node* insertatbetween(struct Node* head) {
    int data, index;
    printf("Insertion At Specified Position\n");
    printf("Enter the position: ");
    scanf("%d", &index);

    if (index <= 1) { // if pos = 1 -> same as insertion at beginning
        return insertatfirst(head);
    }

    printf("Enter the data: ");
    scanf("%d", &data);

    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node* p = head;
    int i = 1;

    // traverse to node just before desired position
    while (i < index - 1 && p->next != NULL) {
        p = p->next;
        i++;
    }
if(p==NULL){
    printf("Out of bounds");
    free(ptr);
    return head;
}
    // insert new node
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

// ================== DELETION FUNCTIONS ==================

// Delete first node
struct Node* deleteatfirst(struct Node* head) {
    if (head == NULL) return NULL; // empty list
    struct Node* ptr = head;
    head = head->next;
    free(ptr);  // free memory
    return head;
}

struct Node* deleteAtEnd(struct Node* head) {
    if (head == NULL) return NULL;        // empty list
    if (head->next == NULL) {             // only one node
        free(head);
        return NULL;
    }

    struct Node* p = head;     // first pointer
    struct Node* q = head->next; // second pointer

    // move p and q until q is the last node
    while (q->next != NULL) {
        p = q;
        q = q->next;
    }

    free(q);          // delete last node
    p->next = NULL;   // update second last node
    return head;
}


// Delete node at given position
struct Node* deleteatposition(struct Node* head) {
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);

    if (head == NULL) {
        printf("List is empty!\n");
        return NULL;
    }

    if (pos <= 1) { // first node deletion
        return deleteatfirst(head);
    }

    struct Node* p = head;
    int i = 1;

    // move to (pos-1)th node
    while (i < pos - 1 && p->next != NULL) {
        p = p->next;
        i++;
    }

    if (p->next == NULL) { // invalid pos
        printf("Position out of range!\n");
        return head;
    }

    struct Node* q = p->next;
    p->next = q->next; // unlink node
    free(q);
    return head;
}

// ================== OTHER OPERATIONS ==================

// Reverse linked list
struct Node* reversel(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* curr = head;
    struct Node* next = NULL;

    while (curr != NULL) {
        next = curr->next; // save next
        curr->next = prev; // reverse pointer
        prev = curr; // move prev forward
        curr = next; // move curr forward
    }
    return prev;    //new head
}

// Concatenate 2 lists
struct Node* concatel(struct Node* head, struct Node* head1) {
    if (head == NULL) return head1;  
    if (head1 == NULL) return head;  

    struct Node* temp = head;
    while (temp->next != NULL) {  
        temp = temp->next;
    }
    temp->next = head1;  
    return head;
}

// ================== MAIN FUNCTION ==================

int main() {
    struct Node* head = NULL;
    int n, choice;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of nodes.\n");
        return 0;
    }

    head = createList(n);
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

        switch(choice) {
            case 1:
                head = insertatfirst(head);
                displayList(head);
                break;
            case 2:
                head = insertatend(head);
                displayList(head);
                break;
            case 3:
                head = insertatbetween(head);
                displayList(head);
                break;
            case 4:
                head = deleteatfirst(head);
                displayList(head);
                break;
            case 5:
                head = deleteatend(head);
                displayList(head);
                break;
            case 6:
                head = deleteatposition(head);
                displayList(head);
                break;
            case 7:
                printf("\nOriginal list: ");
                displayList(head);
                head = reversel(head);
                printf("\nReversed list: ");
                displayList(head);
                break;
            case 8: {
                int k;
                printf("Enter the number of elements in the second list: ");
                scanf("%d", &k);
                struct Node* head1 = createList(k);
                head = concatel(head, head1);
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
    } while(choice != 0);

    return 0;
}
