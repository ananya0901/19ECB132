#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
class number
{
	private:
		float value;
		
	public:
		void setdata()
		{
			cout<<"enter value:";
			cin>>this->value;
			
		}
		void displaydata();
		void addition(number a,number b);
		void subtraction(number c,number d);
		void multiplication(number a,number b);
		void division(number c,number d);
		void module(number a,number b);
};
void number::displaydata()
{
	cout<<"operations:"<<this->value<<endl;
}
	void number::addition(number a,number b)
	{
	this->value=a.value+b.value;
} 
void number::subtraction(number a,number b)
{
		this->value=a.value-b.value;
}
	void number::multiplication(number a,number b)
	{
	this->value=a.value*b.value;
} 
void number::division(number a,number b)
{
		this->value=a.value/b.value;
}
	void number::module(number a,number b)
	{
	this->value=(int)a.value%(int)b.value;
} 


int main(int arge,char* argv[])
{
	number p,q,r,s,t,u,v;
	p.setdata();
	cout<<"object p-details"<<endl;
	p.displaydata();
	cout<<endl;
	q.setdata();
	cout<<"object q-detils"<<endl;
    q.displaydata();
	cout<<endl;
	r.addition(p,q);
	cout<<"addition "<<endl;
	r.displaydata();
	cout<<endl;
	s.subtraction(p,q);
	cout<<"subtreaction "<<endl;
	s.displaydata();
	cout<<endl;
	t.multiplication(p,q);
	cout<<"multiplication"<<endl;
	t.displaydata();
	cout<<endl;
	u.division(p,q);
	cout<<"division "<<endl;
	u.displaydata();
	cout<<endl;
	v.module(p,q);
	cout<<"module "<<endl;
	v.displaydata();
	cout<<endl;	
	}
