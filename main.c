#include <stdio.h>

#include "binary_heap.h"

int main() {
    BinaryHeap* bh = bheap_create(10);

    Element e1 = 1;
    Element e2 = 2;
    Element e3 = 3;
    Element e4 = 4;
    Element e5 = 5;

    bheap_insert(bh, e3);
    bheap_insert(bh, e1);
    bheap_insert(bh, e5);
    bheap_insert(bh, e4);
    bheap_insert(bh, e2);

    pq_print(bh);

    while (!pq_isEmpty(bh)) {
        Element e = bheap_extract(bh);
        element_print(e);
        printf(" ");
    }
    printf("\n");

    bheap_destroy(bh);

    return 0;
}