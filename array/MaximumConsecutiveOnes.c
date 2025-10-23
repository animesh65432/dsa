#include <stdio.h>

// brutefroce
// int MaximumConsecutiveOnes(int nums[], int n) {
//     int MaxiCount = 0;
//     int MaxiConsecutive = -1;

//     for (int i = 0; i < n; i++) {
//         int Count = 1; // start with 1 for the current element

//         // count consecutive identical numbers starting at i
//         for (int j = i + 1; j < n; j++) {
//             if (nums[j] == nums[i]) {
//                 Count++;
//             } else {
//                 break; // streak ended
//             }
//         }

//         if (Count > MaxiCount) {
//             MaxiCount = Count;
//             MaxiConsecutive = nums[i];
//         }
//     }

//     return MaxiConsecutive;
// }

int MaximumConsecutiveOnes(int nums[],int n){

    int MaxiCount = 0 ;
    int MaxiConsecutive = -1 ;
    int lst_ele = -1 ;
    int Count = 0 ;

    for (int i = 0; i < n; i++) {

        if (nums[i] != lst_ele) {
            lst_ele = nums[i] ;
            Count = 1 ;
        }
        else {
            Count ++ ;
        }

        if (Count > MaxiCount){

            MaxiCount = Count ;

            MaxiConsecutive = nums[i] ;
        }
    }

    return MaxiConsecutive;
}


int main(){

    int nums[] ={1, 1, 0, 0, 1, 1, 1, 0};

    int res = MaximumConsecutiveOnes(nums, 8);
    

    printf("%d",res) ;

    return 0;
}