#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
    void carName(string cname){
        cout << cname << endl;
    }
};



int main(){
    Car c1;
    c1.carName("BMW");
    return 0;
}