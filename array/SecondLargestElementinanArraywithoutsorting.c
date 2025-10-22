#include <stdio.h>

int SecondLargestElementinanArraywithoutsorting(int nums[],int n){
    int largest_element = nums[0] ;
    int SecondLargestElement = -1 ;

    for (int i = 0; i < n; i++) {

        if (nums[i] > largest_element && nums[i] != SecondLargestElement){
            SecondLargestElement = largest_element ;
            largest_element = nums[i] ;
        }
        else if (nums[i] > SecondLargestElement && nums[i] !=largest_element){
            SecondLargestElement = nums[i] ;
        }
    }

    return SecondLargestElement;
}

int main(){
    int nums[] = {8,10,5,7,9} ;
    int n = 5 ;
    int result = SecondLargestElementinanArraywithoutsorting(nums, n) ;
    printf("Second largest number is %d",result);   
    return 0;
}