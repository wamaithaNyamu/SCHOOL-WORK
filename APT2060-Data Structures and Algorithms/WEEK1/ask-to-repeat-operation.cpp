//
// Created by wamaitha on 9/12/19.
//

//
// Created by wamaitha on 9/12/19.
//
/*library for input and output */
#include <iostream>

/*variations of input and output. Grouping of input output commands*/
/*global scoping*/
using namespace std;


int summation(int x,int y){
    int c ;
    c = x+y;
    return c;
};
int subtraction(int x,int y){
    int c ;
    c = x -y;
    return c;
};

int division(int x,int y){
    int c ;
    c = x /y;
    return c;
};

int multiplication (int x,int y){
    int c ;
    c = x*y;
    return c;
};

void askInput(){
    int a, b;
    cout << "Enter the first number \n";
    cin >> a;
    cout << "Enter the second number \n";
    cin >> b;
    char choice;
    cout << "Which operation would you like to perform\n";
    cout << "1. Add \n 2. Subtract \n 3. Division \n 4. Multiply\n";
    cin >> choice;
    if (choice == '1'){
        int sum = summation(a,b);
        cout << sum;
    }else if (choice == '2') {
        int sub = subtraction(a,b);
        cout << sub;

    }else if (choice == '3'){
        int div = division(a,b);
        cout << div;

    }else if ( choice == '4'){
        int mux = multiplication(a,b);
        cout << mux;

    }else {
        cout << "Invalid choice ";

    };

}


int main(){
    askInput();
    int instruction;
    //ask user if to repeat or exit
    cout<<"-------------------------------------------\n";
    cout<<"Would you like to enter perform another operation\n"
          "press 1 for YES \n"
          "press 2 for EXIT \n";
    cin >> instruction;
    if(instruction == 1){
        askInput();
    }
    return 0;


};