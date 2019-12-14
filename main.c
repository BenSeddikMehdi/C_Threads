#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdint.h>

void* myTurn(void* arg) {
    int8_t i = 0;
    while (i < 5) {
        sleep(1);
        printf("My turn\n");
        ++i;
    }
    return NULL;
}
void yourTurn() {
    int8_t i = 0;
    while (i < 5) {
        sleep(2);
        printf("Your turn\n");
        ++i;
    }
}

int main() {
    pthread_t pthread;
    pthread_create(&pthread, NULL, myTurn, NULL);
    //myTurn();
    yourTurn();
    pthread_join(pthread, NULL);
    return 0;
}