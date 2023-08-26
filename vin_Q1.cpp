#include<iostream>
using namespace std;

class message
{
	private:
		string v1 = "welcome" ;
		string 	v2;
	
	public:
		
		void print()
		{
			cout << this->v1 << endl;
		}
		
		void print(string v2)
		{
			cout << this->v1 << " , " << v2 ;
		}
};

int main()
{
	string v2;
	
	cout << "Enter any message to print :- " ;
	cin >> v2;
	
	message obj;
	
	obj.print();
	obj.print(v2);
	
	return 0;

}
