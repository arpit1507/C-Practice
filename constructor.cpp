using namespace std;

#include <iostream>

class constructor
{
public:
int a,b;
constructor(int x,int y){
    a=x;
    b=y;
}
void print(){
    cout<<a<<" "<<b;
}
};

int main(){
    
    constructor c(10,20);
    c.print();
}
