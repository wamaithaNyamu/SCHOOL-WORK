#include <iostream>
using namespace std;

class employee {
	private:
		string empName, empNumber;
		
	public :
		void empDisplay(){
			cout<<"Employee Name="<<empName<<"\n";
			cout<<"Employee Number="<<empNumber<<"\n";
		}
		void empAdd(){
			cout<<"Enter Name";
			cin >>empName;
			cout<<"Enter Number";
			cin >>empNumber;
		}
		void empDelete(){
			//delete
		}
};

int main(){
	employee emp1, emp2;
	emp1.empAdd();
	emp2.empAdd();
	
	emp1.empDisplay();
	emp2.empDisplay();
	
	return 0;
}





