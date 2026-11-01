/**
 * Practical No. 8(D)
 * Title: Implement various operations on a Binary Search Tree, such as insertion,
 * deletion, display (inorder traversal), and search.
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* newNode(int x) {
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    p->data = x;
    p->left = p->right = NULL;
    return p;
}

struct Node* insert(struct Node *root, int x) {
    if (root == NULL) return newNode(x);

    if (x < root->data)
        root->left = insert(root->left, x);
    else if (x > root->data)
        root->right = insert(root->right, x);

    return root;
}

void inorder(struct Node *root) {
    if (root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

struct Node* search(struct Node *root, int x) {
    if (root == NULL || root->data == x)
        return root;

    if (x < root->data)
        return search(root->left, x);
    return search(root->right, x);
}

struct Node* deleteNode(struct Node *root, int x) {
    struct Node *temp;

    if (root == NULL) return root;

    if (x < root->data)
        root->left = deleteNode(root->left, x);
    else if (x > root->data)
        root->right = deleteNode(root->right, x);
    else {
        if (root->left == NULL) {
            temp = root->right;
            free(root);
            return temp;
        }
        if (root->right == NULL) {
            temp = root->left;
            free(root);
            return temp;
        }

        temp = root->right;
        while (temp->left)
            temp = temp->left;

        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    struct Node *root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("BST: ");
    inorder(root);

    printf("\nSearch 40: ");
    printf(search(root, 40) ? "Found" : "Not Found");

    root = deleteNode(root, 30);

    printf("\nAfter deletion: ");
    inorder(root);
    printf("\n");

    return 0;
}
