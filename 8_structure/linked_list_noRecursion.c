#include <stdio.h>
#include <malloc.h>

struct list {
    int data;
    struct list *next;
};

struct list *add_node(struct list *p, int data) {
    struct list *node = (struct list *)malloc(sizeof(struct list));
    node->data = data;
    node->next = p;
    return node;
}

int main() {
    struct list *p = NULL;

    for (unsigned int i = 0; i < 100000; i++) {
        p = add_node(p, i);
    }

    struct list *q = p;
    while (q != NULL) {
        printf("%d \n ", q->data);
        q = q->next;
    }
    
    return 0;
}

