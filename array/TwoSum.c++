#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> optimalbruteforce(int nums[],int tagret,int n){
    vector<int> answer;

    map<int, int> Numbers_Index;

    for (int i = 0; i < n; i++) {

        int rem = tagret - nums[i] ;

        if (Numbers_Index.find(rem) != Numbers_Index.end()){

            answer.push_back(Numbers_Index[rem]);

            answer.push_back(i) ;

        }
        
        Numbers_Index[nums[i]] = i ;
    
      
    }

    return  answer;
    

}
//space complexit 0(n) and time complexity o(N+answer)

// vector<int> bruteforceTwoSum(int nums[], int t, int n) {
//     vector<int> answer;

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (nums[i] + nums[j] == t) {
//                 answer.push_back(i);
//                 answer.push_back(j);
//                 return answer;
//             }
//         }
//     }
    
//     return answer; 
// }

//time complexity 0(n^2) and space complexity 0(answer)

int main() {
    int nums[] = {1, 6, 2, 10, 3};
    int target = 7;
    
    
    vector<int> answer_indices = optimalbruteforce(nums, target, 5); 

   
    if (!answer_indices.empty()) {
        cout << "Indices of the two numbers that sum to the target: ";
        for (int index : answer_indices) { 
            cout << index << " ";
        }
        cout << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}
