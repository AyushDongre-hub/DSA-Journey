#include<deque>
#include<iostream>

using namespace std;

int main(){
    deque<int> d={1,2,3,4,5};
    deque<int> d1;

    d1.push_front(1);
    d1.push_back(2);
    d1.emplace_back(3);
    d1.pop_back();

    for(int val:d){
        cout<<val;
    }

    cout << endl;
    
    for(int val:d1){
        cout<<val;
    }

    


    return 0;
}