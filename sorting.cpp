#include <iostream>
#include <vector>
using namespace std;

// vector<int> selectionsort(vector<int> arr){
//     int n = arr.size();
    

//     for(int i =0 ; i <= n-1; i++){
//         int min = i;
//         for(int j = i+1 ; j < n; j++){
//             if (arr[j]<arr[i]){
//                 min = j;
//             }

//             if(min!= i){
//                 swap(arr[i],arr[min]);
//             }
            
//         }
//      }

//     return arr;
// }



vector<int> bubblesort(vector<int> arr){
    int n = arr.size();
    bool swaped = false;
    for(int i = 0; i< n ; i++){
        for(int j =1 ; j<(n-i);j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
                swaped = true;
            }
        }
            if(swaped != true){
                return arr;
            }
    }
    return arr;
}


vector<int> insertionsort(vector<int> arr){
    int n = arr.size();
    
    for(int i = 0 ; i<n; i++){
        for(int j = 1; j<=i;j++){
            if(arr[i]>arr[j-1]){
                break;
            }
            // cout<<arr[i]<<" and " <<arr[j-1]<<" " ;
            swap(arr[i],arr[j-1]);
        }
        cout<<endl;
    }
    return arr;
}



int main() { vector<int> arr = {23, 45, 34, 67, 6, 87, 45}; 
    vector<int> sortedArr = insertionsort(arr); 
    cout << "Sorted array: "; 
    for (int num : sortedArr) { 
        cout << num << " ";
    } 
    cout << endl;
    return 0; 
}