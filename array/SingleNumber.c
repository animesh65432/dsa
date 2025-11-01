#include <stdio.h>
#include <stdbool.h>

// BRUTE FORCE
// int SingleNumber(int nums[],int n){
    
//     int number = -1 ;

//     for (int i = 0; i < n; i++) {

//         int count = 1 ;

//         for (int j = 0; j < n; j ++) {

//             if (nums[i] == nums[j] && i != j){

//                 count ++ ;

//             }
        
//         }

//         if (count == 1){
//             number = nums[i] ;
//         }
    
//     }

//     return number;
// };

int SingleNumber(int nums[],int n){

    int number = 0 ;

    for (int i = 0; i < n; i++) {
        number = number ^ nums[i];
    }
    
    return number;
}


int main(){
    int nums[7] = {1, 2, 2, 4, 3, 1, 4} ;

    int n = 7 ;

    int res = SingleNumber(nums, n) ;

    printf("single number %d",res) ;

    return  0;
}