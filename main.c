#include <stdio.h>
#include "twoThreads.h"
#include "Safety_Speed_Issues_Threads.h"

int main() {
    uint32_t counter = 0;
    clock_t begin = clock();
    countUpToBIG(&counter);
    countUpToBIG(&counter);
    clock_t end = clock();
    printf("Done. counter %u\n", counter);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time spent: %f", time_spent);
    return 0;
}