//
// Created by wamaitha on 9/12/19.
//

#include <iostream>
using namespace std;

void detScore(){
    int score;
//    Ask user for score
    cout << "Enter score: \n";
    cin >> score;
//determine if fail or pass
    if (score >= 50){
        cout << "passed! \n";
    } else if (score < 50 && score >= 0 ){
        cout<<"Failed \n";

    }else{
        cout << "Invalid input \n";
    }

}
int main(){
    detScore();
     int choice;

//ask user if to repeat or exit
    cout<<"-------------------------------------------\n";
    cout<<"Would you like to enter another score\n"
          "press 1 for YES \n"
          "press 2 for EXIT \n";
    cin >> choice;
    if (choice ==1){
        detScore();
    }


    return 0;
}