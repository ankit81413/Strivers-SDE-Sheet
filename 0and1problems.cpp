#include <iostream>
#include <vector>
using namespace std;

void sort01(vector<int>& arr){
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;
    
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
        
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<int> arr = {2, 0, 1, 2, 1, 0, 2, 1, 0};
    sort01(arr);
    for(int j=0;j<4;j++){
        cout<<endl;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}