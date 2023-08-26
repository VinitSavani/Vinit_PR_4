#include<iostream>
using namespace std;

class Distance
{
	private:
		int a ;
	
	public:
		void set()
		{
			cout << "Enter Distance :- " ;
			cin >> this->a ;
		}
		
		Distance operator+(Distance n)
		{
			Distance demo;
			demo.a = this->a + n.a ;
			return demo;
		}
		
		void get()
		{
			cout << "Sum of two distance :- " << this->a;
		}
};

int main()
{
	Distance d1,d2,d3;
	
	d1.set();
	d2.set();
	
	d3 = d1 + d2 ;
	
	d3.get();
	
	return 0;
}
