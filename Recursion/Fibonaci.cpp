#include <iostream>
using namespace std;

int fibonaci(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    return (fibonaci(n-2) + fibonaci(n-1));
}

int main(){
    int n;
    cout << "Enter n";
    cin >> n;
    int result = fibonaci(n);
    cout << "\n" << result;
    return 0;
}