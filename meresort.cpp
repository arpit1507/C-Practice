# include<iostream>
using namespace std;

void merge(int array[],int leftindex,int mid,int rightindex){
    int leftarraysize=mid-leftindex+1;
    int rightarraysize=rightindex-mid;
    int leftarray[leftarraysize];
    int rightarray[rightarraysize];
    for (int i=0;i<leftarraysize;i++){
        leftarray[i]=array[leftindex+i];
    }
    for(int j=0;j<rightarraysize;j++){
        rightarray[j]=array[mid+j+1];
    }
    int index=leftindex;
    int i=0;
    int j=0;
    while (i<leftarraysize && j<rightarraysize)
    {
        if(leftarray[i]<rightarray[j]){
            array[index]=leftarray[i];
            i++;
            index++; 
        }
        else{
            array[index]=rightarray[j];
            j++;
            index++; 
        }  
    }
    while (i<leftarraysize){
        array[index]=leftarray[i];
        i++;
        index++; 
    }
    while (j<rightarraysize){
        array[index]=leftarray[j];
        j++;
        index++; 
    }
}

void  mergesort(int array[],int leftindex,int rightindex){
    if(leftindex>=rightindex) return;
    int mid=leftindex + (rightindex-leftindex)/2;
    mergesort(array,leftindex,mid);
    mergesort(array,mid+1,rightindex);
    merge(array,leftindex,mid,rightindex);
}

int main(){
    int array[]={1,3,4,8,6,5};
    int size=sizeof(array)/sizeof(array[0]);
    int leftindex=0;
    int rightindex=size-1;
    mergesort(array,leftindex,rightindex);
    for (auto value: array){
        cout<<value<<" ";
    }
}