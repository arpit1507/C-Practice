using namespace std;

#include <iostream>

class Student{
    public:

    string name;
    int rollno;

    void get_details(){
        cout<<name<<endl;
    }
};

int main(){
    
    Student s1;

    s1.name="Arpit";
    s1.rollno=2;

    s1.get_details();
}



