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


// vector<int> insertionsort(vector<int> arr){
//     int n = arr.size();
    
//     for(int i = 0 ; i<n; i++){
//         for(int j = 1; j<=i;j++){
//             if(arr[i]>arr[j-1]){
//                 break;
//             }
//             // cout<<arr[i]<<" and " <<arr[j-1]<<" " ;
//             swap(arr[i],arr[j-1]);
//         }
//         cout<<endl;
//     }
//     return arr;
// }


vector <int> insertionsort(vector<int> arr){
    int n = arr.size();
    
    for(int i = 1; i<n; i++){
        int key = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>key){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = key;
    }
    return arr;
}


// void merge(vector<int>& arr, int low, int mid, int high){
//     vector<int> temp;
//     int left = low;
//     int  right = mid+1;

//     while(left <= mid && right <=high){

//         if(arr[left]>arr[right] ){
//             temp.push_back(arr[right]);
//             right++;
//         }else{
//             temp.push_back(arr[left]);
//             left++;
//         }

//     }
//     while(left <= mid){
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right <= high){
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for(int k = low; k<= high; k++){
//         arr[k] = temp[k-low];
//     }

// }

// void mergesort(vector<int>& arr, int low, int high){
//     if(low >= high) return;
//     int mid = (low+high)/2;
//     mergesort(arr, low, mid);
//     mergesort(arr, mid+1, high);
//     merge(arr,low,mid,high);

// }


void merge(vector<int>& arr, int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;

    while(left<=mid && right<=high){
        if(arr[left]>arr[right]){
            temp.push_back(arr[right]);
            right++;
        }else{
            temp.push_back(arr[left]);
            left++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++; 
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int k = low; k<= high; k++){
        arr[k] = temp[k-low];
    }
}

void mergesort(vector<int>& arr,int low, int high){
    if(low >= high) return;
    int mid = (low+high)/2;
    mergesort(arr, low, mid);
    mergesort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main() { vector<int> arr = {23, 45, 34, 67, 6, 87, 45}; 
    // vector<int> sortedArr = mergesort(arr , 0 , 6); 
    mergesort(arr , 0 , 6); 
    cout << "Sorted array: "; 
    for (int num : arr) { 
        cout << num << " ";
    } 
    cout << endl;
    return 0; 
}