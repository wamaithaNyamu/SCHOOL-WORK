#include <iostream>
using namespace std;


class score
{
	private:
	int arr[100];//data structure-array
		
	public:
	void insert()
	{
		cout<<"enter 10 scores";
		for(int j=0; j<10; j++)//insert items
    cin>>arr[j];
		}	
	void display()
	{
		cout<<"the scores are:";
		 for (int j=0; j<10; j++)//display items
    cout<<arr[j] <<"";
	}
	
		
};

int main()
{
  score subject1, subject2;
  
  subject1.insert();
  subject1.display();
  
  subject2.insert();
  subject2.display();
  
    return 0;
}
