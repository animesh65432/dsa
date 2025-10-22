#include <stdio.h>


int  LargestElementinanArray(int nums[], int n){

    int largest_element = nums[0];

    for (int i = 1 ; i < n; i ++) {

        if (nums[i] > largest_element){

            largest_element = nums[i] ; 
        }
    }

    return  largest_element;

}


int main(){
    int nums[] = {8,10,5,7,9} ;
    int n = 5 ;
    int result = LargestElementinanArray(nums, n) ;
    printf("largest number is %d",result);    
    return  0;
}