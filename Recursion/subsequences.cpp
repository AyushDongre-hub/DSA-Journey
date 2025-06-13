#include<iostream>
using namespace std;

void helper(string s, string  tempAs, int index){
    if(s.size()==index){
        cout << tempAs << " ";
        return;
    }
    helper(s,tempAs+s[index],index+1);
    helper(s,tempAs,index+1);

    return;
}

int main(){
    string s;
    cout << "Enter s: ";
    cin >> s;
    int l = s.size() - 1;
    helper(s,"",0);
    return 0;
}
