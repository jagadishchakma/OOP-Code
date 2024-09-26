#include <bits/stdc++.h>
using namespace std;

class Calculator{
    public:
    int sum(int a, int b){
       return a+b;
    }
    int sum(int a, int b, int c){
        return a+b+c;
    }
};

int main(){
    Calculator c1;
    cout << c1.sum(1,2) << endl;
    cout << c1.sum(1,2,3) << endl;
}