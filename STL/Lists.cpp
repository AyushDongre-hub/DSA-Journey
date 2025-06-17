#include<list>
#include<iostream>

using namespace std;

int main(){
    list<int> l={1,2,3,4,5};
    list<int> l1;

    l1.push_front(1);
    l1.push_back(2);
    l1.emplace_back(3);
    l1.pop_back();

    for(int val:l){
        cout<<val;
    }
    
    cout << endl;

    for(int val:l1){
        cout<<val;
    }

    


    return 0;
}