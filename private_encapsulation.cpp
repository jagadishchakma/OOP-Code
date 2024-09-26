#include<bits/stdc++.h>

using namespace std;

class Car{
    private:
    string carName;
    string carColor;
    public:
    Car(){
        carName = "BMW";
        carColor = "Red";
    }
    string displayCarName(){
        return carName;
    }
};


int main(){
    Car c1;
    cout <<  c1.displayCarName() << endl;
}