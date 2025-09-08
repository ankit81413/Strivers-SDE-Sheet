#include <iostream>
using namespace std;

int recur(int a = 1){
    if(a>5){
        return 0;
    }
    cout<<"Ankit\n";
    a++;
    recur(a);
}

int main(){
    recur();
};


