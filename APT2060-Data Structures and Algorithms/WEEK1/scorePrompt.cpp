//
// Created by wamaitha on 9/12/19.
//

#include <iostream>
using namespace std;

int main(){
    int score;

//    Ask user for score
    cout << "Enter score: \n";
    cin >> score;
//determine if fail or pass
    if (score >= 50){
        cout << "passed!";
    } else if (score < 50 && score >= 0 ){
        cout<<"Failed";

    }else{
        cout << "Invalid input";
    }
//display to the user whether fail or pass using cout
    return 0;
}