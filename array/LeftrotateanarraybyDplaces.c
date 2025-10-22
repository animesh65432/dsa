#include "../printarray.h"
#include <stdio.h>

//Brute force

// void LeftrotateanarraybyDplaces(int nums[],int n , int  k){

//     int rotate = k % n;

//     int temp[rotate] ;

//     int start  = 0;

//     for (int i = n - rotate ; i < n; i ++) {
//         temp[start] = nums[i] ;
//         start ++ ;
//     }

//     for (int i = n - 1 ; i >= rotate ; i--) {
//         nums[i] = nums[i - rotate] ;
//     }

//     for (int i = 0; i < rotate; i ++) {
//         nums[i] = temp[i] ;
//     }
// }

void LeftrotateanarraybyDplaces(int nums[],int n , int  k){

    int rotate = k % n;

    int temp[rotate] ;

    int start = 0 ;
    int end = n ;

    while (start < end) {
        int temp = nums[start] ;
        nums[start] = nums[end] ;
        nums[end] = temp ;
        start ++ ;
        end -- ;
    }

    start = 0 ;
    end = rotate  ;

    while (start < end) {
        int temp = nums[start] ;
        nums[start] = nums[end] ;
        nums[end] = temp ;
        start ++ ;
        end -- ;
    }

    start = rotate;
    end = n ;

    while (start < end) {
        int temp = nums[start] ;
        nums[start] = nums[end] ;
        nums[end] = temp ;
        start ++ ;
        end -- ;
    }

}




int main(){
    int nums[] = {1,2,3,4,5,6,7} ;
    int array[] = {3,7,8,9,10,11} ;
    int k1 =3 ;

    int size = sizeof(nums) / sizeof(nums[0]);

    int k = 2 ;

    // LeftrotateanarraybyDplaces(nums, size,k);
    
    LeftrotateanarraybyDplaces(array, 6,k1);

    printArray(array,6);

    return  0;
}