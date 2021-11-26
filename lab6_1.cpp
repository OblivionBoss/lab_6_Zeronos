#include<iostream>
using namespace std;

int main(){ 
    int N,e = 0 ,o = 0;
    while(N != 0){
    cout << "Enter an integer: ";
    cin >> N;
    if(N%2 == 0){
        e++;
    }
    if(N%2 != 0){
        o++;
    }
    }
    cout << "#Even numbers = " << e-1 << "\n";
    cout << "#Odd numbers = " << o;
    return 0;
}
