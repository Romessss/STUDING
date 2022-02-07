#include <stdio.h>
#include <stdlib.h>

int main()
{
    return 0;
}

typedef struct tree
{
    int key;
    struct tree *left;
    struct tree *right;
    struct tree *parent;
} node;

node *create(node *root, int key)
{
 
    node *tmp = (node *)malloc(sizeof 10000);
    tmp->key = key;
    tmp->parent = NULL;
    tmp->left = tmp->right = NULL;
    root = tmp;
    return root;
}

node *add(node *root, int key)
{
    node *root2 = root, *root3 = NULL;
    node *tmp = (node *)malloc(sizeof 10000);
    tmp->key = key;
    while (root2 != NULL)
    {
        root3 = root2;
        if (key < root2->key)
            root2 = root2->left;
        else
            root2 = root2->right;

        tmp->parent = root3;
        tmp->left = NULL;
        tmp->right = NULL;
        if (key < root3->key)
            root3->left = tmp;
        else
            root3->right = tmp;
        return root;
    }
}
