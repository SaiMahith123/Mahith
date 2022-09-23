#include<iostream>
using namespace std;
class add
{	
	public:
		int x,y,c;
		void getdata()
		{
			cout<<"enter the two number "<<endl;
			cin>>x>>y;
			c=x+y;
			cout<<"sum is "<<c<<endl;
		}
};
class MUL:public add
{
	public:
		void getdata1()
		{
			c=x*y;
			cout<<"product is "<<c;
		}
};
int main()
{
	MUL mul;
	mul.getdata();
	mul.getdata1();
}
