#include<iostream>
#include<iomanip>
#include<string>
 
using namespace std;
class complexnumber
{
	private:
		int r,i;
	public:
		void setdata()
		{
			cout<<"enter real value of the complex:";
			cin>>this->r;
			cout<<"enter imaginary value of complex:";
			cin>>this->i;
		}
		void displaydata();
};
void complexnumber::displaydata()
{
	cout<<r;
	if(i!=0)
	{
		if(i>0)cout<<"+"<<i<<"i"<<endl;
		else cout<<i<<"i"<<endl;
	}
}
int main(int arge,char* argv[])
{
	complexnumber x;
	cout<<"entered number"<<endl;
	x.setdata();
	cout<<"entered complex number:"<<endl;
	x.displaydata();
	cout<<endl;
	return 0;
}
