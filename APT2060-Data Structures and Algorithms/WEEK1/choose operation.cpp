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

void choices(char x){
	
	char choice;
	cout << "Which operation would you like to perform";
	cout << "1. Add \n 2. Subtract \n 3. Division \n 4. Mu=ultiply";
				
	if (choice == '1'){
		int sum = summation(a,b);
	}else if (choice == '2') {
		int sum = subtraction(a,b);
	}else if (choice == '3'){
		int sum = division(a,b);
	}else if ( choice == '4'){
		int sum = multiplication(a,b);
	}else {
		cout << "Invalid choice ";
	};
	
}



int main(){
	choices();
	int a, b;
	cout << "Enter the first number \n";
	cin >> a;
	cout << "Enter the second number \n";
	cin >> b;
	int sum = summation(a,b);
	cout << "Your sum is:" << sum;
	return 0;
	
	
}
