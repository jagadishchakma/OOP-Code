#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    string carName;
    string carColor;
    Car(){
        carName = "BMW";
        carColor = "Red";
    }
};

int main(){
    Car car1;
    cout << car1.carName << endl;
}