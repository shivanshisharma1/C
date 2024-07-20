#include <stdio.h>
#include <malloc.h>

struct list {
    int data;
    struct list *next;
};

struct list *add_node(struct list *q, int data) {
    if (q == NULL) {
        q = (struct list *)malloc(sizeof(struct list));
        q->data = data;
        q->next = NULL;
    } else {
        q->next = add_node(q->next, data);
    }
    return q;
}

void print_list(struct list *p) {
    if (p== NULL) {
        return;
    }
    printf("\n%d",p->data);
    print_list(p->next);
}

int main() {
    struct list *p = NULL;
    p = add_node(p, 1);
    p = add_node(p, 2);
    p = add_node(p, 3);
    p = add_node(p, 4);

    print_list(p);

    return 0;
}
