#include "priority_queue.h"
#include "binary_heap.h"

#include <stdlib.h>

struct PriorityQueue {
    BinaryHeap* heap;
};

PriorityQueue* pq_create(int capacity) {
    PriorityQueue* pq = malloc(sizeof(PriorityQueue));

    pq->heap = bheap_create(capacity);

    return pq;
}

void pq_destroy(PriorityQueue* pq) {
    bheap_destroy(pq->heap);
    free(pq);
}

void pq_insert(PriorityQueue* pq, Element data) {
    bheap_insert(pq->heap, data);
}

Element pq_extract(PriorityQueue* pq) {
    return bheap_extract(pq->heap);
}

bool pq_isEmpty(PriorityQueue* pq) {
    return bheap_isEmpty(pq->heap);
}

int pq_size(PriorityQueue* pq) {
    return bheap_size(pq->heap);
}

bool pq_isFull(PriorityQueue* pq) {
    return bheap_isFull(pq->heap);
}

void pq_print(PriorityQueue* pq) {
    bheap_print(pq->heap);
}