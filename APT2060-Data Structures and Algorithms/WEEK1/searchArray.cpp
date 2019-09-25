#include <iostream>
using namespace std;


class score
{
	private:
	int arr[100];//data structure-array
	int findScore;
		
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
	int find(){
		
		cout <<"Enter score to search";
		cin>>findScore;
		
		for(int i = 0; i < 10; i++){
			if(arr[i] == findScore){
				cout << findScore << " " << "is in the array";
				return 0;
				
			}
						
			}
				cout<<findScore << " " << "is not in the array";
				return 0;
		};
		
		
	};
	
		


int main()
{
  score subject1, subject2;
  
  subject1.insert();
  subject1.display();
  subject1.find();
  
  subject2.insert();
  subject2.display();
  subject2.find();
  
  
    return 0;
}
