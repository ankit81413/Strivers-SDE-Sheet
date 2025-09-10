// TWO SUM

#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;


// vector<int> twoSum(vector<int>& arr,int target){
//     unordered_map<int, int> mapp;

//     for (int i = 0 ; i < arr.size(); i++){
//         int a = arr[i];
//         int b = target - a;

//         if (mapp.find(b) != mapp.end()){
//             return{mapp[b] , i};
//         }
//         mapp[arr[i]]=i;
//     }
//     return {};

// }

// SELF
vector<int> twoSum(vector<int> arr, int target){
    unordered_map<int , int> m;
    for(int i = 0 ; i < arr.size(); i++){
        int complement = target - arr[i];
        if (m.find(complement) != m.end()){
            return {m[complement] , i};
        }
        m[arr[i]] = i;
    }
    return {};
}




// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

 

// Example 1:
// Input: nums = [1,1,1], k = 2
// Output: 2

// Example 2:
// Input: nums = [1,2,3], k = 3
// Output: 2
 

// Constraints:

// 1 <= nums.length <= 2 * 104
// -1000 <= nums[i] <= 1000
// -107 <= k <= 107

// int subarraySum(vector<int>& arr, int k){
//     int n = arr.size();
//     int count = 0;
//     vector<int> prefixsum(n,0);
    
//     prefixsum[0] = arr[0];
//     for(int i = 1; i<n; i++){
//         prefixsum[i] = prefixsum[i-1]+arr[i];
//     }

//     unordered_map<int, int> m;

//     for(int i = 0 ;i<n; i++){
//         int complement = prefixsum[i] - k;
//         if(prefixsum[i] == k){
//             count++;
//         }

//         if(m.find(complement) != m.end()){
//             count += m[complement];

//         }

//         if(m.find(complement) == m.end()){
//             m[complement] = 0;
//         }
//         m[prefixsum[i]]++;

//     }
//     return count;

// }




// int subarraySum(vector<int>& arr , int target){
//     int count = 0;
//     int n = arr.size();
//     vector<int> prefixsum(n,0);

//     prefixsum[0] = arr[0];

//     for (int i=1 ; i<n; i++){
//         prefixsum[i] = prefixsum[i-1]+arr[i];
//     }

//     unordered_map<int, int> m;

//     for(int i=0; i<n; i++){
//         int val = prefixsum[i] - target;
//         if (prefixsum[i] == target) count++;
//         // 1 2 3 4  5
//         // 1 3 6 10 15 target = 7
//         if (m.find(val) != m.end()){
//             count += m[val];
//         }

//         if(m.find(val) == m.end()){
//             m[val] = 0;
//         }

//         m[val]++;



        
//     }
//     return count;
// }


// int subarraySum(vector<int>& arr , int target){
//     int count = 0;
//     int presum = 0;
//     map<int, int> m;
//     m[0] = 1;

//     for(int i = 0; i<arr.size(); i++){
//         presum +=arr[i];
//         int removal = presum-target;
//         count+=m[removal];
//         m[presum]+=1;

//     }
//     return count;
// }


int largestelement(vector<int>& arr){
    int largest = arr[0];
    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int secondlargestelement(vector<int>& arr){
    int largest = arr[0];
    int second = arr[1];
    // 1,2,3,8,6,3,4,5
    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i]>largest){
            second =largest;
            largest = arr[i];
        }else if(arr[i]<largest && arr[i]>second){
            second = arr[i];
        }
    }
    cout<<"largest : "<<largest<<" second "<<second <<endl;
    return second;
}




int main(){
    vector<int> arr = {1,2,3,8,3,4,5};
    int target = 7;

    int result = secondlargestelement(arr);
    cout << "Ans : " << result << endl;

}