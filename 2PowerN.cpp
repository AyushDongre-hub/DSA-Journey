#include<iostream>
using namespace std;

int recursive(int n){
    if(n==1){
        return 2;
    }
    return 2*recursive(n-1);
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int result = recursive(n);
    cout << "\n" <<result;

}