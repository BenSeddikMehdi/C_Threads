#include <stdio.h>
#include "twoThreads.h"
#include "Safety_Speed.h"
#include <pthread.h>

int main() {
    clock_t begin = clock();
    pthread_t pthread;
    pthread_create(&pthread, NULL, countUpToBIG, NULL);
    countUpToBIG(NULL);
    pthread_join(pthread, NULL);
    clock_t end = clock();
    printf("Done. counter %u\n", counter);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time spent: %.4f", time_spent);
    return 0;
}