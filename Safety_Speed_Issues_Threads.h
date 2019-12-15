//
// Created by El Mehdi Benseddik on 12/15/2019.
//

#ifndef C_THREADS_SAFETY_SPEED_ISSUES_THREADS_H
#define C_THREADS_SAFETY_SPEED_ISSUES_THREADS_H

#define BIG 1000000000UL

void countUpToBIG(uint32_t* counter) {
     *counter = 0;
    for (uint32_t i = 0; i < BIG; ++i) {
        (*counter)++;
    }
}

#endif //C_THREADS_SAFETY_SPEED_ISSUES_THREADS_H
