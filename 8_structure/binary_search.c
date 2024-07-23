#include <stdio.h>
#include <malloc.h>

struct tree {
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree* add_node(struct tree *p, int data) {
    if (p == NULL) {
        p = (struct tree *)malloc(sizeof(struct tree));
        p->data = data;
        p->left = NULL;
        p->right = NULL;
    } else {
        if (data <= p->data) {
            p->left = add_node(p->left, data);
        } else {
            p->right = add_node(p->right, data);
        }
    }
    return p;
}

void print_tree(struct tree *p) {
    if (p != NULL) {
        print_tree(p->left);
        printf("%d ", p->data);
        print_tree(p->right);
    }
}

int main() {
    struct tree *p = NULL;
    p = add_node(p, 50);
    p = add_node(p, 75);
    p = add_node(p, 25);
    p = add_node(p, 60);

    print_tree(p);
    printf("\n");

    return 0;
}

