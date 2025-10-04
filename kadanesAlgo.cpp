#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kadane(const vector<int>& arr) {
    int sum = 0;
    int max = arr[0];

    for(int i=0; i<arr.size();i++){
        sum = sum+arr[i];
        if(sum<0){
            sum = 0;
        }
        if(sum > max){
            max = sum;
        }
    }

    return max;
}

int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << "Maximum Subarray Sum: " << kadane(arr) << endl;
    return 0;
}
