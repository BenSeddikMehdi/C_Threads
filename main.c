#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdint.h>

void* myTurn(void* arg) {
    uint8_t i = 0;
    while (i < 3) {
        sleep(1);
        printf("Hello from the first Thread %p\n", (uint8_t*) arg);
        ++i;
    }
    return NULL;
}
void yourTurn() {
    uint8_t i = 0;
    while (i < 3) {
        sleep(2);
        printf("******Second Thread\n");
        ++i;
    }
}

int main() {
    pthread_t pthread;
    uint8_t num = 123;
    pthread_create(&pthread, NULL, myTurn, &num);
    //myTurn();
    yourTurn();
    //pthread_join(pthread, NULL);
    return 0;
}