#include "../printarray.h"

void LeftRotateArraybyOne(int nums[],int n){

    int temp = nums[0] ;

    for (int i = 1; i < n; i ++) {

        nums[i-1] = nums[i] ;

    }

    nums[n-1] = temp ;
    
}


int main(){
    int nums[] = {1, 2, 3, 4, 5} ;

    int size = sizeof(nums) / sizeof(nums[0]);

    LeftRotateArraybyOne(nums, size);

    printArray(nums,size);

    return  0;
}