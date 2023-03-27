#include<iostream>
using namespace std;

int linear_search(int arr[],int key){
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            return i;
        }
        else{
            continue;
        }
    }
    return -1;
}

int main(){
    int arr[10]={1,4,2,5,3,6,7,9,8,10};
    int key=11; 
    cout<<linear_search(arr,key);
}