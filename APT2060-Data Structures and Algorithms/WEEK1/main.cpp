#include <iostream>
using namespace std;

int main() {
//    Required: base, height, area
    int base, height , area;
    cout << "Enter base length \n";
    cin >> base;
    cout<< "Enter the height of the triangle \n";
    cin >> height;

    //calculate the area
    area = 0.5 * base * height;

//    display area to user
    cout << "The area is : " << area;
    return 0;
}