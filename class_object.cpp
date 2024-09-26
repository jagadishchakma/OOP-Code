#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
    Car(){
        cout << "constructor method" << endl;
    }
    void carName(string carName){
       cout << carName << endl;
    }
    string display(string carColor){
        return carColor;
    }
    ~Car(){
        cout << "destrcutor method" << endl;
    }
};

int main(){
    Car c1;
    c1.carName("BMW");
    c1.carName("BOLVO");
    cout << c1.display("Red") << endl;
    return 0;
};