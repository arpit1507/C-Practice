#include <iostream>
using namespace std;

int withdraw(int x){
    cout<<x<<" ";
    return 0;
}

int main(){
    for(int i=0;i<=5;i++){
        cout<<i<<" ";
        withdraw(i+1);
    }
    return 0;
}