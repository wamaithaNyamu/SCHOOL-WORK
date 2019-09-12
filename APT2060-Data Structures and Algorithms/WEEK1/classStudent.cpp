//
// Created by wamaitha on 9/12/19.
//

#include <iostream>
using namespace std;

class Student{
private:
    string name;
    int GPA;

public:
    void insert(){
        cout << "Enter stiudent name: \n";
        cin >> name;

        cout << "Enter student GPA \n";
        cin >> GPA;

    };


    void display(){
        cout << " Student Name :\n" << name;
        cout<< "Student GPA :\n"<< GPA;
    }
};

int main(){

    Student student1, student2;

    student1.insert();
    student2.insert();

    student2.display();
    student2.display();
}