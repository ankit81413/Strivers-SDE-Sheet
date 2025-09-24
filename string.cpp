#include <iostream>
#include<string>
using namespace std;


// string reverse_string(string str){
//     int left = 0;
//     int right = str.size()-1;

//     while(left < right){
//         swap(str[left],str[right]);
//         left++;
//         right--;
//     }
//     return str; 

// }



string reverse_string(string str){
    int left = 0;
    int right = str.size()-1;
    while(left<right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
    return str;
}


int main(){
    string str = "rang";
    // string reverse= reverse_string(str);
    cout<<"reverse of "<<str<<" is "<< reverse_string(str);
}