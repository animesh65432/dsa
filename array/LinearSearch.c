#include "../printarray.h"
#include <stdio.h>

int  LinearSearch(int nums[],int n,int k){

    for (int i = 0; i < n; i++) {

        if (nums[i] == k){

            return  i;
        }
    }

    return  -1;

}


int main(){
    int nums [5] = {2, 3, 4, 5, 3} ;

    int n  = 5  ;

    int k = 3  ;

    int res = LinearSearch(nums,n,k) ;

    printf("%d",res);

    return  0;
}

