#include<iostream>
#include<iomanip>
#include<string>
 
using namespace std;
class book
{
	private:
		int price;
		string title,auothername,publisher,usedfor;
		float edition;
		
	public:
		void setdata()
		{
			cout<<"title:";
			cin>>this->title;
			cout<<"auother name:";
			cin>>this->auothername;
			cout<<"publisher:";
			cin>>this->publisher;
			cout<<"edition:";
			cin>>this->edition;
			cout<<"price:";
			cin>>this->price;
			cout<<"used for:";
			cin>>this->usedfor;
		}
		void displaydata();
};
void book::displaydata()
{
	cout<<this->title<<"title:"<<this->auothername<<"auothername:"<<this->publisher<<"publisher:"
	     <<this->edition<<"edition:"<<this->price<<"price:"<<this->usedfor<<"usedfor:";
}
int main(int arge,char* argv[])
{
	book x;
	cout<<"enter details of book:"<<endl;
	x.setdata();
	cout<<"details of book:"<<endl;
	x.displaydata();
	cout<<endl;
	return 0;
}
