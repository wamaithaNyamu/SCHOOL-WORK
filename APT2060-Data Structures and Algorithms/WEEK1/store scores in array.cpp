#include <iostream>
using namespace std;

class score{
	private:
		int array[100];
	public:
		void scoreInsert(){
		
			for(int i=0; i<10; i++ ){
				cout << "Enter Score"  ;
				cin >> array[i];
			}
			
		}
		void scoreDisplay(){
			cout<<"Your scores are:" ;
			for(int i=0; i<10; i++ ){
				cout << array[i];
		}
		}
};

int main(){

	score subject1, subject2;
	subject1.scoreInsert();
	subject1.scoreDisplay();
	subject2.scoreInsert();

	subject2.scoreDisplay();

return 0;
}
