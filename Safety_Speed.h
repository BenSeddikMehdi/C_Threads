//
// Created by El Mehdi Benseddik on 12/15/2019.
//

#ifndef C_THREADS_SAFETY_SPEED_H
#define C_THREADS_SAFETY_SPEED_H

#define BIG 1000000000UL
uint32_t counter = 0;

pthread_mutex_t pthreadMutex = PTHREAD_MUTEX_INITIALIZER;

void* countUpToBIG(void* arg) {
    for (uint32_t i = 0; i < BIG; ++i) {
        pthread_mutex_lock(&pthreadMutex);
        counter++;
        pthread_mutex_unlock(&pthreadMutex);
    }
    return NULL;
}

#endif //C_THREADS_SAFETY_SPEED_H
