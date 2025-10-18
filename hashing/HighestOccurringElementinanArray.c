#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int element;
    int count;
} FreqPair;

void Frequency(int arr[], int n) {
    FreqPair* freq = (FreqPair*) malloc(n * sizeof(FreqPair));
    int uniqueCount = 0;
    
    
    for (int i = 0; i < n; i++) {
        int found = 0;
        
        // Check if element already counted
        for (int j = 0; j < uniqueCount; j++) {
            if (freq[j].element == arr[i]) {
                freq[j].count++;
                found = 1;
                break;
            }
        }
        
        // If new element, add it
        if (!found) {
            freq[uniqueCount].element = arr[i];
            freq[uniqueCount].count = 1;
            uniqueCount++;
        }
    }
    
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    
    // Find max and min frequency elements
    for (int i = 0; i < uniqueCount; i++) {
        if (freq[i].count > maxFreq) {
            maxEle = freq[i].element;
            maxFreq = freq[i].count;
        }
        if (freq[i].count < minFreq) {
            minEle = freq[i].element;
            minFreq = freq[i].count;
        }
    }
    
    printf("The highest frequency element is: %d\n", maxEle);
    printf("The lowest frequency element is: %d\n", minEle);
    
    free(freq);
}


int brute_force_Highest_Occurring_Element_in_and_Array(int nums[],int n){
    int max = nums[0] ;
    int max_count = 1;

    for (int i = 0 ; i < n ; i ++) {

        int count = 1; 

        for (int j = i + 1; j < n ; j ++){

            if (nums[i] == nums[j]){

                count ++ ;
            }
        }

        if (count >= max_count){
            max_count = count;
            max = nums[i] ;
        }

    }

    printf("%d",max);
    return 0;
}

int main (){
    int arr[] = {3, 1, 3, 2, 1, 3, 2, 1, 1};
    Frequency(arr,6);
    return 0 ;
}