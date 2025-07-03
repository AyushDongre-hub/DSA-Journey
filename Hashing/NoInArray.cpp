#include<iostream>

using namespace std;

int main(){
    int n;                         //Making initial Array
    cin >> n;                             
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    //Precompute
    int hash[13] = {0};            //Making Hash Array where all ferquency of array numbers will be stored
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin >>  q;
    while(q--){
        int number;
        cin >> number;

        //Fetch                     //Recalling the hash value to know the frequency
        cout << hash[number] <<endl;
    }

    return 0;

}