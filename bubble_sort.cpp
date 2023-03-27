#include<iostream>
using namespace std;
void bubble_sort(int arr[],int size){ 
    for (int i=0;i<=size-1;i++){
        for (int j=0;j<=size-1;j++){
            if (arr[j]>arr[j+1]){
                int c;
                c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        }
    }
}
int main(){
    int arr[]={10,20,50,30,40,70,60,90,80};
    int size=8;
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr,size);
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}
