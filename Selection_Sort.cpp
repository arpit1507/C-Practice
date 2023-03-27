#include<iostream>
using namespace std;
;
void Selection_sort(int arr[],int size){
    for(int i=0;i<=size;i++){
        int current=i;
        for (int j=current+1;j<=size;j++){
            if (arr[j]<arr[current]){
                current=j;
            }
            if (current!=i){
                int c=arr[current];
                arr[current]=arr[i];
                arr[i]=c;
            }
        }
    }
}
int main(){
    int arr[]={10,20,40,60,30,50,70};
    int size=6;
    Selection_sort(arr,size);
    for (int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}