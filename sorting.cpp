#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionsort(vector<int> arr){
    int n = arr.size();
    

    for(int i =0 ; i <= n-1; i++){
        int min = i;
        for(int j = i+1 ; j < n; j++){
            if (arr[j]<arr[i]){
                min = j;
            }

            if(min!= i){
                swap(arr[i],arr[min]);
            }
            
        }
     }

    return arr;
}



int main() { vector<int> arr = {23, 45, 34, 67, 6, 87, 45}; 
    vector<int> sortedArr = selectionsort(arr); 
    cout << "Sorted array: "; 
    for (int num : sortedArr) { 
        cout << num << " ";
    } 
    cout << endl; 
    return 0; 
}