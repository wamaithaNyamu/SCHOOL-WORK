//ordered and unordered arrays
#include <iostream>
using namespace std;


class score
{
	private:
	int v[100];//data structure-array

	public:

	void display()
	{
			cout<< "....................................................\n";
		cout<<"the scores are: \n";
		 for (int j=0; j<10; j++)//display items
    	 cout<<v[j] <<"\n";
    	cout<< "....................................................\n";
	}
	
		void insert()
	{
		int j;
		cout<<"enter 10 scores \n";
		for(j=0; j<10; j++){
				cout << "Enter the " << j + 1<< "  "<< "number: \n";
   				cin>>v[j];
		}//insert items
	
   	
		}	
	
	void orderedinsert(){
	
		int j ,value;
		
		for(int n=0; n<10; n++){
		cout <<"Enter a number: \n";
		cin >> value;
		for(j=0; j<10; j++)
		if(v[j] > value)
		break;
		for(int k=10; k>j; k--)
		v[k] = v[k-1];
		v[j] = value;
		}
	
	}
	
	//binary search
		int binarySearch(){
		int searchKey;
		cout<<"Enter number to search using binary search: \n";
		cin>>searchKey;
		
		int lowerBound = 0;
		int upperBound = 9;
		int mid;
		
		while(true){
			mid = (lowerBound + upperBound) / 2;
			
			if(v[mid]==searchKey){
				cout<<"Found \n";
				return 0;	
			}
		
			else if(lowerBound > upperBound){
					cout<< "Not found \n";
					return 0;
				
			}
		
			else{
				if(v[mid] < searchKey)
				lowerBound = mid + 1;
				else 
				upperBound = mid - 1;
				
			}
		}
		
	}
	
	//sorting
	
	void bubblesort(){
		int out, in;
		for(out=9; out>1; out--){
		for(in =0; in < out; in++) //loop through array
		if(v[in] > v[in+1]){ //out of order
			double temp = v[in];
			v[in] = v[in+1];
			v[in+1] = temp;
		}	
		}

		
		
	}
	
		
};

int main()
{
  score subject1;
 subject1.insert();
 // subject1.orderedinsert();
  subject1.display();
  subject1.bubblesort();
  subject1.display();
  subject1.binarySearch();
  

  
    return 0;
}
