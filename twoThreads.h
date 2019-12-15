//
// Created by HP-EliteBook on 12/15/2019.
//

#ifndef C_THREADS_TWOTHREADS_H
#define C_THREADS_TWOTHREADS_H

#include <pthread.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>

void* myTurn(void* arg) {
    uint8_t i = 0, *i_ptr = (uint8_t*) malloc(sizeof(uint8_t));
    *i_ptr = 10;
    while (i < 3) {
        sleep(1);
        printf("Hello from the first Thread = %d ; %d \n", i, *i_ptr);
        ++i;
        ++*i_ptr;
    }
    printf("i_ptr inside myTurn function = %p\n", i_ptr);
    return i_ptr;
}
void yourTurn() {
    uint8_t i = 0;
    while (i < 3) {
        sleep(2);
        printf("\n******Second Thread = %d ;\n", i);
        ++i;
    }
}

/* @ main:
 *  pthread_t pthread;
    uint8_t *result;
    pthread_create(&pthread, NULL, myTurn, NULL);
    //myTurn();
    yourTurn();
    pthread_join(pthread, (void*) &result);
    printf("After the threads are finished num = %d\n", *result);
*/

#endif //C_THREADS_TWOTHREADS_H
