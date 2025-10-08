#include <stdio.h>
#include <stdlib.h>

// Define structure for a Binary Search Tree (BST) Node
struct Node {
    int data;              // Value stored in the node
    struct Node *left;     // Pointer to the left child
    struct Node *right;    // Pointer to the right child
};

// Function to create a new node
struct Node *createnode(int data) {
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    if (newnode == NULL) {   // Check for memory allocation failure
        printf("Memory Allocation Failed!\n");
        exit(1);
    }
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// Function to insert a value into the BST
struct Node *insert(struct Node *root, int data) {
    if (root == NULL) {  // If tree is empty, create a new node
        return createnode(data);
    }
    if (data < root->data) {   // Insert in left subtree
        root->left = insert(root->left, data);
    } else if (data > root->data) {  // Insert in right subtree
        root->right = insert(root->right, data);
    }
    // Duplicate values are not inserted
    return root;
}

// Inorder Traversal (Left → Root → Right)
void inorder(struct Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Preorder Traversal (Root → Left → Right)
void preorder(struct Node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder Traversal (Left → Right → Root)
void postorder(struct Node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Function to search for a key in BST
struct Node *search(struct Node *root, int key) {
    // Base case: root is NULL or key is found
    if (root == NULL || root->data == key) {
        return root;
    }
    if (key < root->data) {  // Search in left subtree
        return search(root->left, key);
    } else {  // Search in right subtree
        return search(root->right, key);
    }
}
// Function to print BST in tree format using arrows
void printBST(struct Node *root, int space) {
    if (root == NULL)
        return;

    // Increase indentation for each level
    space += 6;

    // Print right subtree first
    printBST(root->right, space);

    // Print current node
    printf("\n");
    for (int i = 6; i < space; i++)
        printf(" ");
    printf("--> %d\n", root->data);

    // Print left subtree
    printBST(root->left, space);
}
int main() {
    struct Node *root = NULL;   // Initially tree is empty
    int n, value, i, choice, key;

    // Input number of nodes
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of nodes must be positive!\n");
        return 0;
    }

    // Input node values
    printf("Enter values of nodes:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &value);
        root = insert(root, value);  // Insert nodes into BST
    }
    printf("BST Created Successfully!");
    printBST(root,5);

    // Menu-driven program for BST operations
    while (1) {
        printf("\n--- BST Menu ---\n");
        printf("1. Inorder Traversal\n");
        printf("2. Preorder Traversal\n");
        printf("3. Postorder Traversal\n");
        printf("4. Search a Node\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Inorder Traversal: ");
            inorder(root);
            printf("\n");
            break;
        case 2:
            printf("Preorder Traversal: ");
            preorder(root);
            printf("\n");
            break;
        case 3:
            printf("Postorder Traversal: ");
            postorder(root);
            printf("\n");
            break;
        case 4:
            printf("Enter value to search: ");
            scanf("%d", &key);
            if (search(root, key) != NULL)
                printf("Value %d found in BST!\n", key);
            else
                printf("Value %d NOT found in BST!\n", key);
            break;
        case 5:
            printf("Exiting program.\n");
            exit(0);   // Exit from program
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
