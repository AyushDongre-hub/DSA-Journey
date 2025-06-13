#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);      //Add values
    vec.push_back(3);

    for(int var:vec){
        cout << var << "";//Print Values
    }
    
    vec.pop_back();       //Remove from last

    cout << vec[1] << " or " << vec.at(1);   //Same


    return 0;
}