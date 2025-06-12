#include <iostream>
using namespace std;

bool palindrome(string s,int start, int end){
    if(start >= end){
        return true;
    }
    if(s[start] != s[end]){
        return false;
    }
    return palindrome(s,start + 1,end - 1);
}

int main(){
    string s;
    cout << "Enter s: ";
    cin >> s;
    int l = s.size() - 1;
    
    bool result = palindrome(s,0,l);
    cout << s << "\n";
    cout << "\n" << boolalpha << result;

    return 0;

}