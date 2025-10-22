#include <stdio.h>
#include <stdbool.h>

bool  CheckiftheArrayisSorted(int nums[], int n){

    int start = 0 ;
    
    for (int i = 1; i < n; i++) {

        if (nums[start] > nums[i]){
            start ++ ;
        }
        else {
            return 0;
        }
    }

    return  1;

}


int main(){
    int nums[] = {1, 2, 1, 4, 5} ;
    int n = 5 ;
    int result = CheckiftheArrayisSorted(nums, n) ;
    printf("largest number is %d",result);    
    return  0;
}