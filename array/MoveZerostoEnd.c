#include "../printarray.h"

void  MoveZerostoEnd (int nums[], int n){

    int j = -1  ;

    for (int i = 0; i < n; i ++) {

        if (nums[i] == 0){

            j = i ;
             
            break;
        }
    }

    for (int i = j + 1 ; i < n ; i ++){

        if (nums[i] != 0){

            int temp = nums[i] ;

            nums[i] = nums[j] ;

            nums[j] = temp ;

            j ++ ;
        }
    }

}


int main(){
    int nums[] = {0, 1, 4, 0, 5, 2} ;
    int n = 5 ;
    MoveZerostoEnd(nums, n) ;
    printArray(nums,n);    
    return  0;
}