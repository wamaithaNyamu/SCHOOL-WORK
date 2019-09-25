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
		cout<<"enter 10 scores \n";
		for(int j=0; j<10; j++)//insert items
   		cin>>arr[j];
   		cout << "\n";
		}	
	void display()
	{
		cout<<"the scores are: \n";
		 for (int j=0; j<10; j++)//display items
  		 cout<<arr[j] <<" ";
	}
	int find(){
		
		cout <<"\n Enter score to search \n";
		cin>>findScore;
		
		for(int i = 0; i < 10; i++){
			if(arr[i] == findScore){ 
				cout << findScore << " " << "is in the array \n";
				return 0; //exit for loop
				
			} //close if statement
						
		} //close the for loop
				cout<<findScore << " " << "is not in the array \n";
				return 0;
}; //close the find function
		
	int deleteElement(){
		int deleteNumber;
		int i;
		cout << "Enter element to delete \n";
		cin>>deleteNumber;
		
		for(i = 0; i < 10; i++){
			if(arr[i] == deleteNumber)
			cout << deleteNumber << " " << "is in the array \n";
			break; //exit for loop
											
		} //close the for loop
		cout << i;
		if(i==10){
			cout<<deleteNumber << " " << "is not in the array \n";
			return 0;	
			
		}
		
		else{ //overwriting loop
			for(int k =i; k<10; k++)
			arr[k] = arr[k+1];
			return 0 ;
			
			
			
		}
		
		
	
	}//close delete function
};
	
		


int main()
{
  score subject1, subject2;
  
  subject1.insert();
  subject1.display();
  subject1.find();
  subject1.deleteElement();
  subject1.display();
  
  subject2.insert();
  subject2.display();
  subject2.find();
  
  
    return 0;
}
