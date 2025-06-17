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

    cout << vec[1] << " or " << vec.at(1) << endl;   //Same

    vector<int> vec1 = {1,2,3,4,5};

    vector<int>::iterator itr;    //Forward Iterator
    for(itr = vec1.begin(); itr != vec1.end(); itr++){
        cout << *(itr) << " "; 
    }   

    cout<<endl;

    vector<int>::reverse_iterator it;   //Reverse Iterator
    for(it = vec1.rbegin(); it !=  vec1.rend(); it++){
        cout << *(it) << " "; 
    } 
    return 0;
}