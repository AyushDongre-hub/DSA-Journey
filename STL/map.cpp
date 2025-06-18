#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string,int> m;
    m["Camera"] = 100;
    m["TV"] = 50;
    m.insert({"Laptop",100});
    m.emplace("Mobile",70);
    
    for(auto p:m){
        cout << p.first << " "<< p.second << endl;
    }

    if(m.find("Tv") != m.end()){
        cout << "Found\n";
    }
    else{
        cout << "Not Found\n";
    }

    cout << "Count of Camera = " << m["Camera"] << endl << m.count("Camera");


    return 0;
}