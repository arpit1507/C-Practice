

using namespace std;

#include <iostream>
using namespace std;
int main() {
    string name="Hello";
    string *ptr=&name;

    cout<<name<<endl;
    cout<<&name<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}

