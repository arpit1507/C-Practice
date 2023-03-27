#include<iostream>
using namespace std;
;
void Selection_sort(int arr[],int size){
     int i, key, j;
    for (i = 1; i <= size; i++)
    {
        key = arr[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            for(int l=0;l<=size;l++){
                cout<<arr[l]<<" ";
            }
            cout<<endl;
        }
        arr[j + 1] = key;
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