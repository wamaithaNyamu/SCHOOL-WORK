//
// Created by wamaitha on 9/12/19.
//
#include <iostream>

using namespace std;

void myAddition(int a, int b){

    int sum = a + b;

    cout << "The sum is " << sum;
}

int main(){
    int x ,y ;
    cout << "Enter first number \n";
    cin >> x;

    cout << "Enter second number \n";
    cin >>y;
    myAddition(x,y);

    return 0;
}