8.1
  #include<iostream>
using namespace std;
class B
{
	int a;
	public:
		int b;
		void set_ab();
		int get_a(void);
		void show_a(void);
};
class D : public B
{
	int c;
	public:
		void mul(void);
		void display(void);
};
void B::set_ab(void)
{
	a=5;b=10;
}
int B::get_a()
{
	return a;
}
void B::show_a()
{
	cout<<"a="<<a<<"\n";
}
void D::mul()
{
	c=b*get_a();
 }

 void D::display()
 {
 	cout<<"a="<<get_a()<<"\n";
 	cout<<"b="<<b<<"\n";
 	cout<<"c="<<c<<"\n\n";
 }
 int main()
 {
 	D d;
 	d.set_ab();
 	d.mul();
 	d.show_a();
 	d.display();
 	d.b=20;
 	d.mul();
 	d.display();
 	return 0;
 }

8.2
  #include<iostream>
using namespace std;
class B
{
	int a;
	public:
		int b;
		void get_ab();
		int get_a(void);
		void show_a(void);
};
class D:private B
{
	int c;
		public:
			void mul(void);
			void display(void);
};
void B::get_ab(void)
{
	cout<<"enter values for a and b:";
	cin>>a>>b;
}
int B::get_a()
{
	return a;
}
void B::show_a()
{
	cout<<"a="<<a<"\n";
}
void D::mul()
{
	get_ab();
	c=b*get_a();
}
void D::display()
{
	show_a();
	cout<<"b="<<b<<"\n"
        <<"c="<<c<<"\n\n";
}
int main()
{
	D d;
	d.mul();
	d.display();
	d.mul();
	d.display();
	return 0;
}

8.4
  
  #include<iostream>
using namespace std;
class M
{
	protected:
		int m;
		public:
			void get_m(int);
};
class N
{
	protected:
		int n;
		public:
			void get_n(int);
};
class P: public M, public N
{
	public:
		void display(void);
};
void M::get_m(int x)
{
	m=x;
}
void N::get_n(int y)
{
 n=y;	
 } 
 void P::display(void)
 {
 	cout<<"m="<<m<<"\n";
 	cout<<"n="<<n<<"\n";
 	cout<<"m*n="<<m*n<<"\n";
 }
 int main()
 {
 	P p;
 	p.get_m(10);
 	p.get_n(20);
 	p.display();
 	return 0;
 }

8.5
  
  #include<iostream>
using namespace std;
class student
{
	protected:
		int roll;
		public:
			void getnumber(int a)
			{
				roll=a;
			}
			void putnumber(void)
			{
				cout<<"rroll no:"<<roll<<"\n";
			}
};
class test: public student
{
	protected:
		float part1,part2;
		public:
			void getmarks(float x,float y)
			{
				part1=x;
				part2=y;
			}
			void putmarks(void)
			{
				cout<<"marks obtained:"<<"\n"
				<<"part1="<<part1<<"\n"
				<<"part2="<<part2<<"\n";
			}
};
class sports
{
	protected:
		float score;
		public:
			void getscore(float s)
			{
				score = s;
			}
			void putscore(void)
			{
				cout<<"sports wt:"<<score<<"\n\n";
			}
};
class result:public test,public sports
{
	float total;
	public:
		void display(void);
};
void result::display(void)
{
	total=part1+part2+score;
	putnumber();
	putmarks();
	putscore();
	cout<<"total score:"<<total<<"\n";
}
int main()
{
	result student1;
	student1.getnumber(1234);
	student1.getmarks(27.5,33.0);
	student1.getscore(6.0);
	student1.display();
	return 0;
}

8.6:

#include<iostream>
using namespace std;
class student
{
	protected:
		int rool_number;
		public:
	   void get_number(int a)
		{
		rool_number=a;	
		}
		void put_number(void)
		{
			cout<<"ROLL NO:"<<rool_number<<"\n";
		}
};
    class test:virtual public student
    {
    	protected:
    		float part1,part2;
    		public:
    			void get_marks(float x,float y)
    			{
    				part1=x;
    				part2=y;
				}
				void put_marks(void)
				{
					cout<<"marks obtained:"<<"\n"
					<<"part1="<<part1<<"\n"
					<<"part2="<<part2<<"\n";
				}
	};
	class sports:public virtual student
	{
		protected:
			float score;
			public:
				void get_score(float a)
				{
					score=a;
				}
				void put_score(void)
				{
					cout<<"sports wt:"<<score<<"\n\n";
				}
	};
	class result :public test,public sports
	{
		float total;
		public:
			void display(void);
	};
	void result::display(void)
	{
		total=part1+part2+score;
		put_number();
		put_marks();
		put_score();
		cout<<"total score:"<<total<<"\n";
	}
	int main()
	{
		result student_1;
		student_1.get_number(678);
		student_1.get_marks(30.5,25.5);
		student_1.get_score(7.0);
		student_1.display();
		return 0;
	}



8.7
	
#include<iostream>
using namespace std;
class alpha
{
	int x;
	public:
		alpha(int i)
		{
			x=i;
			cout<<"alpha initilized \n";
		}
		void show_x(void)
		{
			cout<<"x="<<x<<"\n";
		}
};
  class beta
{
	float y;
	public:
		beta(float j)
		{
			y=j;
			cout<<"beta initialize \n";
		}
		void show_y(void)
		{
			cout<<"y="<<y<<"\n";
		}
};
class gamma:public beta ,public alpha
{
	int m,n;
	public:
		gamma(int a,float b,int c,int d):
		alpha(a),beta(b)
		{
			m=c;
			n=d;
			cout<<"gamma initialized \n";
		}
		void show_mn(void)
		{
			cout<<"m="<<m<<"\n";
			cout<<"n="<<n<<"\n";
		}
};
 int main()
  {
  	gamma g(5,10.75,20,30);
  	cout<<"\n";
  	g.show_x();
  	g.show_y();
  	g.show_mn();
  	return 0;
  }	


8.8

#include<iostream>
using namespace std;
class alpha
{
	int x;
	public:
		alpha(int i)
		{
			x=i;
			cout<<"\n alpha constructor";
		}
		void show_alpha(void)
		{
			cout<<"x="<<x<<"\n";
		}
};
class beta
{
	float p,q;
	public:
		beta(float a,float b):p(a),q(b+p)
		{
			cout<<"\n beta constructed";
		}
		void show_beta(void)
		{
			cout<<"p="<<p<<"\n";
			cout<<"q="<<q<<"\n";
		}
};
class gamma :public beta,public alpha
{
	int u,v;
	public:
		gamma(int a,int b,float c):
			alpha(a*2),beta(c,c),u(a)
			{
				v=b;
				cout<<"\n gamma constructed";
			}
		void show_gamma(void)
		{
			cout<<"u="<<u<<"\n";
			cout<<"v="<<v<<"\n";
		}
};
int main()
{
	gamma g(2,4,2.5);
	cout<<"\n\n display member values"<<"\n\n";
	g.show_alpha();
	g.show_beta();
	g.show_gamma();
	
	
}
