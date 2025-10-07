#include <stdio.h>
#include <stdlib.h>

// structure for doubly linked list node
struct Node
{
    struct Node *prev; // link to previous node
    int data;          // data value
    struct Node *next; // link to next node
};

// function to create a doubly linked list
struct Node *createdll(int n)
{
    struct Node *head = NULL, *newNode = NULL, *temp = NULL;
    int data, i;

    if (n <= 0)
    {
        printf("Number of nodes must be greater than 0.\n");
        return NULL;
    }

    for (i = 1; i <= n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node)); // allocate memory
        if (newNode == NULL)
        {
            printf("Memory allocation failed\n");
            return head;
        }

        printf("Enter data for node %d: ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL)
        {
            // first node becomes head
            head = newNode;
            temp = newNode;
        }
        else
        {
            // link with previous node
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
    return head;
}

// function to display the linked list
void displaylist(struct Node *head)
{
    struct Node *temp = head;
    printf("\nDoubly Linked List: ");
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data); // print data
        temp = temp->next;
    }
    printf("NULL\n");
}

// insert node at beginning
struct Node *insertatbegin(struct Node *head)
{
    int data;
    printf("Insertion At Beginning\n");
    printf("Enter the data: ");
    scanf("%d", &data);

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = head;

    if (head != NULL)
    {
        head->prev = ptr; // connect old head back to new node
    }
    head = ptr; // new head
    return head;
}

// insert node at end
struct Node *insertAtEnd(struct Node *head)
{
    printf("Insertion At End\n");
    int data;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d", &data);

    ptr->data = data;
    ptr->next = NULL;
    ptr->prev = NULL;

    if (head == NULL)
    {
        // if list empty
        head = ptr;
        return head;
    }

    struct Node *temp = head;
    while (temp->next != NULL) // go till last node
    {
        temp = temp->next;
    }

    temp->next = ptr; // link new node
    ptr->prev = temp;

    return head;
}

// insert at a given position
struct Node *insertAtPos(struct Node *head)
{
    int pos, data, i;
    printf("Enter the position you want to insert the element at: ");
    scanf("%d", &pos);

    if (pos == 1)
    { // if first position
        return insertatbegin(head);
    }

    printf("Enter the element you want to insert: ");
    scanf("%d", &data);

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    struct Node *temp = head;
    for (i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next; // move to position-1
    }

    if (temp == NULL)
    {
        printf("Position out of range!\n");
        free(newNode);
        return head;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;

    return head;
}

// delete node at beginning
struct Node *deleteAtBegin(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is already empty!\n");
        return NULL;
    }

    struct Node *temp = head;
    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL;
    }

    printf("Deleted element: %d\n", temp->data);
    free(temp);

    return head;
}

// delete node at end
struct Node *deleteAtEnd(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is already empty!\n");
        return NULL;
    }

    struct Node *temp = head;

    if (head->next == NULL)
    {
        // only one node
        printf("Deleted element: %d\n", head->data);
        free(head);
        return NULL;
    }

    while (temp->next != NULL)
    {
        temp = temp->next; // move to last node
    }

    printf("Deleted element: %d\n", temp->data);

    temp->prev->next = NULL; // remove last node
    free(temp);

    return head;
}

// delete node at given position
struct Node *deleteAtPos(struct Node *head)
{
    int pos, i;
    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    if (head == NULL)
    {
        printf("List is empty!\n");
        return NULL;
    }

    struct Node *temp = head;

    if (pos == 1)
    {
        // deleting first node
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        printf("Deleted element: %d\n", temp->data);
        free(temp);
        return head;
    }

    // move to that position
    for (i = 1; i < pos && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position out of range!\n");
        return head;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    printf("Deleted element: %d\n", temp->data);
    free(temp);

    return head;
}

// reverse the linked list
struct Node *reversel(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return NULL;
    }

    struct Node *temp = NULL;
    struct Node *current = head;

    // swap prev and next for all nodes
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev; // move to next (actually prev now)
    }

    if (temp != NULL)
    {
        head = temp->prev; // new head after reverse
    }

    return head;
}

// concatenate 2 doubly linked lists
struct Node *concatel(struct Node *head, struct Node *head1)
{
    if (head == NULL)
        return head1;
    if (head1 == NULL)
        return head;

    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next; // go to last node of first list
    }
    head1->prev = temp;
    temp->next = head1;
    return head;
}

// main function
int main()
{
    struct Node *head = NULL;
    int n, choice;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of nodes.\n");
        return 0;
    }

    head = createdll(n); // create list
    displaylist(head);

    do
    {
        // menu driven program
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

        switch (choice)
        {
        case 1:
            head = insertatbegin(head);
            displaylist(head);
            break;
        case 2:
            head = insertAtEnd(head);
            displaylist(head);
            break;
        case 3:
            head = insertAtPos(head);
            displaylist(head);
            break;
        case 4:
            head = deleteAtBegin(head);
            displaylist(head);
            break;
        case 5:
            head = deleteAtEnd(head);
            displaylist(head);
            break;
        case 6:
            head = deleteAtPos(head);
            displaylist(head);
            break;
        case 7:
            head = reversel(head);
            printf("\nReversed list: ");
            displaylist(head);
            head = reversel(head); // again reverse back to original
            break;
        case 8:
        {
            int k;
            printf("Enter the number of elements in the second list: ");
            scanf("%d", &k);
            struct Node *head1 = createdll(k);
            head = concatel(head, head1);
            printf("\nConcatenated list: ");
            displaylist(head);
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
