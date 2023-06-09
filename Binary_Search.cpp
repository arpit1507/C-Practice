#include<iostream>
using namespace std;
int binary_search(int arr[],int size,int key){
    int start=0;
    int end=size;
    while (start<=end){
        int mid=(start+end)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int key=60;
    cout<<binary_search(arr,6,key);
}