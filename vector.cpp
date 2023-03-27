#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    // Create a new vector to store the rotated elements
    vector<int> rotated(arr.size());

    // Copy the elements that need to be rotated to the new vector
    copy(arr.begin(), arr.begin() + d, rotated.end() - d);
    copy(arr.begin() + d, arr.end(), rotated.begin());

    // Return the rotated vector
    return rotated;
}

int main() {
    // create a vector of integers
    //vector<int> myVector;

    // add some elements to the vector
    //myVector.push_back(1);
    //myVector.push_back(2);
    //myVector.push_back(3);

    // access the elements of the vector
    //myVector=rotateLeft(1,myVector);
    //cout<<myVector[0]<<endl;
    //cout<<myVector[1]<<endl;
    //cout<<myVector[2]<<endl; 
    // iterate over the elements of the vector using a for loop
    //cout<<myVector.size();
    // get the size of the vector
    float v=1.00000;
    int n=3;
    float x=8.88023;
    while(n>0){
        v=v*x;
        n=n-1;
    }
    cout<<v;
}
