#ifndef PRINT_ARRAY_H
#define PRINT_ARRAY_H

#include <stdio.h>


static inline void printArray(int nums[], int length) {
    
    for (int i = 0; i < length; i++) {
        printf("%d\n", nums[i]);
    }
}

#endif
