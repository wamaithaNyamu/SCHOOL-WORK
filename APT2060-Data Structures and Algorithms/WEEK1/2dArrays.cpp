//
// Created by wamaitha on 9/13/19.
//

#include <iostream>
using namespace std;

class Register {
private:
    int registration[10][1];
    int numberID;
    int count = 0;

public:
    void insert() {

        cout << "Enter ID number  for student. \n";
        // Inserting the values into the registration array
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 1; ++j) {
                cout << "Student " << i + 1 << ", ID number " << " : ";
                cin >> registration[i][j];
            }
        }

    };

    void display() {
        cout << "\n\nDisplaying Values:\n";
        // Accessing the values from the registration array
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 1; ++j) {
                cout << "STUDENT " << i + 1 << ", ID number " << " is " << registration[i][j] << endl;
            }
        }

    };

    void search() {
        cout << "Search student by ID \n";
        cin >> numberID;

        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 1; ++j) {
                if (registration[i][j] == numberID) {
                    cout << "The student is in the database \n";

                }

            }
        }

    };

    void mydelete() {
        cout << "Enter student id to delete:";
        cin >> numberID;

        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 1; ++j) {
                if (registration[i][j] == numberID) {
                    for (int i = 0; i < 9; ++i) {
                        registration[i][j] = registration[i + 1][j];

                    }
                    count++;
                    break;

                }

            }
        };
        if (count == 0) {
            cout << "Element not found..!!";
        } else {
            cout << "Element deleted successfully..!!\n";
            cout << "Now the new array is :\n";
            for (int i = 0; i < 9; ++i) {
                for (int j = 0; j < 1; ++j) {
                    cout << "STUDENT " << i + 1 << ", ID number " << " is " << registration[i][j] << endl;
                }
            }

        }

    };
};

    int main(){
        Register classOne;
        classOne.insert();
        classOne.display();
        classOne.search();
        classOne.mydelete();

    };

