#include <iostream>
#include <vector>
using namespace std;

vector<int> totall(vector<int>& arr) {
    // Find max element to size the frequency array properly
    int maxVal = *max_element(arr.begin(), arr.end());
    vector<int> freq(maxVal + 1, 0);

    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }
    return freq;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,2,5,6,8,4,5,8,4,1};

    int a = 8;

    vector<int> freq = totall(arr);

    cout << "Total number of " << a << " in arr is " << freq[a] << endl;

    return 0;
}
