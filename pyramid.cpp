

using namespace std;
#include<iostream>

// Simple Half Pyramid

/*int main(){
    for (int i=0;i<=5;i++){
        for (int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}*/

//inverted Pyramid

/*int main(){
    for(int i=5;i>=0;i--){
        for (int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}*/

// simple pyramid 180 degree 

/*int main(){
    for(int i=0;i<=5;i++){
        for (int j=0;j<=5;j++){
            if (j<5-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}*/

// inverted pyramid 180 degree













// inverted pyramid

/*int main(){
    for(int i=0;i<=6;i++){
        for (int j=0;j<=6;j++){
            if(j<=6-i && j>=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}*/

//pyramid

/*int main(){
    for (int i=0;i<=4;i++){
        for (int j=0;j<=4;j++){
            if (j>4-i && j<i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}*/

//Diamond

/*int main(){
    for (int i=0;i<=4;i++){
        for (int j=0;j<=4;j++){
            if (j>4-i && j<i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<=4;i++){
        for (int j=0;j<=4;j++){
            if(j<=4-i && j>=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}*/

/*int main(){
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            if (j<=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=5;i>=0;i--){
        for(int j=5;j>=0;j--){
            if (j>=5-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}*/

/*int main(){
    for (int i=0;i<=4;i++){
        for (int j=0;j<=4;j++){
            if (j>4-i && j<i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<=4;i++){
        for (int j=0;j<=4;j++){
            if(j<=4-i && j>=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}*/ 

int main(){
    for(int i=0;i<=4;i++){
        for(int j=4;j>=0;j--){
            if (j>i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        for(int j=4;j<=i+3;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<=4;i++){
        cout<<" ";
        for(int j=0;j<=3;j++){
            if (i<=j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for (int j=7;j>=3;j--){
            if (j>i+4){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
