#include <stdio.h>
#include <stdbool.h>

#include "binary_heap.h"

int main() {
    // int elements[] = {72, 54, 63, 27, 36, 45, 61, 18};
    int elements[] = {18, 27, 36, 45, 54, 61, 63, 72};

    BinaryHeap* heap = bheap_create(10);

    printf("Inserting elements:\n");
    for (int i = 0; i < 8; i++) {
        bheap_insert(heap, elements[i]);
        bheap_print(heap);
    }

    printf("\n");

    printf("Extracting elements:\n");
    while (!bheap_isEmpty(heap)) {
        element_print(bheap_extract(heap));
        printf(" ");
    }
    printf("\n");

    

    bheap_destroy(heap);
}
		