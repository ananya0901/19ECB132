#include<iostream>
#include<iomanip>
#include<string>
 
using namespace std;
class time
{
	private:
		int min,sec,hrs;
	public:
		void setdata()
		{
			cout<<"enter seconds:";
			cin>>this->sec;
			cout<<"enter minutes:";
			cin>>this->min;
			cout<<"enter hours:";
			cin>>this->hrs;
		}
		void displaydata();
};
void time::displaydata()
{
	cout<<this->sec<<"sec:"<<this->min<<"min:"<<this->hrs<<"hrs:";
}
int main(int arge,char* argv[])
{
	time x;
	x.setdata();
	cout<<"time is:"<<endl;
	x.displaydata();
	cout<<endl;
	return 0;
}
