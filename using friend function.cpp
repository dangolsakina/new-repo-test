//using two class and friend function to find sum 
/*#include<iostream>
using namespace std;
class moon1;
	class moon{
		private:
			int a;
		public:
		friend void sum(moon,moon1);
		void get()
		{
			cout<<"eneter a number for a: ";
			cin>>a;
		}
	};
	class moon1{
		private:
			int b;
		public:
		friend void sum(moon,moon1);
		void get()
	{
		cout<<endl<<"eneter a number for b: ";
			cin>>b;
	}
	};
	 void sum(moon n,moon1 m)
	{
		cout<<"the sum is"<<n.a+m.b;
			}		
int main()
{
	moon obj;
	moon1 obj1;
	obj.get();
	obj1.get();
	sum(obj,obj1);
	return 0;
}*/
//finding the higest salary of employee using class and array of object
/*#include<iostream>
using namespace std;
class employee{
	private:
		int s;
		int a;
		int b;
		int t;
	public:
	   void get()
	   {
	   	cout<<endl<<"enter salary allopwance and bonus";
	   	cin>>s>>a>>b;
		   }
		  void sum()
		  {
		  	t=s+a+b;
			   }
		void show(employee m)
		{
			cout<<"the employee with highest salartyt is ",m;
			 } 	
};
int main()
{
	int i=0,j=0,k=0;
	employee a[3];
	for(i=0;i<3;i++)
	{
	a[i].get();
	a[i].sum();
    }
    for(i=0;i<3;i++)
    {
    	for(j=i+1;j<3;j++)
    	{
    		if(a[i].sum()<a[j].sum())
    		{
    			a[i]=a[j];
			}
		}
	}
	a.show(a);
	
	return 0;
	}*/
/*#include<iostream>
using namespace std;
class test1;
class test{
	private:
		int a;
	public:
		void get()
		{
			cout<<"enter a";
			cin>>a;
		}
		friend class test1;
}obj;
class test1{
	private:
		int b;
	public:
			void get()
		{
			cout<<"enter b";
			cin>>b;
		}
		void add()
		{
			//int sum;
			//obj.a+b;
			cout<<"the sum is"<<obj.a+b;
		}
}obj1;
int main()
{
	//test obj;
	//test1 obj1;
	obj.get();
	obj1.get();
	obj1.add();
	return 0;
}*/
//using static data member and static member functyion 
/*#include<iostream>
using namespace std;
class simple{
 private:
 
 	float q;
  float t;
  static float r;
 	public:
 	void get()
 	{
 		cout<<endl<<"enter p and t";
 		cin>>q>>t;
	 }
	 static void let()
	 {
	 	cout<<"rate"<<r;
	 }
 	
	  void calculate()
 	{
 		float si;
 		si=(q*t*r)/100;
 		cout<<"si ="<<si;
	 }
	  
	 
}obj1,obj2,obj3;
float simple::r=8;
int main()
{
	obj1.get();
	obj1.calculate();
	obj2.get();
	obj2.calculate();
	obj3.get();
	obj3.calculate();
	return 0;
	
}*/

/*#include<iostream>
using namespace std;
class test{
	public:
		static int r;
		int p;
		int t;
        int si;
		}obj[3];
 int test::r=8;
 int main()
 {
// 	int si;
int i=0;
for(i=0;i<3;i++)
{
 	cout<<"enter principle";
 	cin>>obj[i].p;
 	cout<<"enter time";
 	cin>>obj[i].t;
 	obj[i].si=obj[i].p*obj[i].t*test::r/100;
 	cout<<"si="<<obj[i].si;
 }
 	return 0;
 	
 }
*/
/*#include <iostream>
using namespace std;
class Demo
{
	public:	
		static int ABC;
};

//defining
int Demo :: ABC =10;


int main()
{
   Demo obj; 
	cout<<"\nValue of ABC: "<<obj.ABC;
	return 0;
}*/
/*#include<iostream>
using namespace std;
class main{
	int p;
	int t;
	int r;
	int si;
	public:
	void get()
	{
		cout<<"enter p t and r";
		cin>>p>>t>>r;
	}
	int calculate()
	{
		si=(p*t*r)/100;
		return si;
	}
	void show()
	{
		cout<<"data"<<calculate();
	}
}obj;
int main()
{
	obj.get();
	//obj.calculate();
	obj.show();
	return 0;
}*/
/*#include<iostream>
using namespace std;
class test1;
class test()
{
	int a;
	public:
	void
}*/





//ASSIGNMENT
//INLINE
//calculate the factorial of number using inline function.
/*#include<iostream>
using namespace std;
class Factorial{
	private:
		int num;
		public:
	inline void get()
	{
		cout<<"enter a number";
		cin>>num;
		}
	inline void calculate()
	{
		int i=0;
		int fact=1;
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		
		}
			cout<<"the factorial is ="<<fact;
	}	
}s;

int main()
{
	s.get();
	s.calculate();
//	s.show();
	return 0;
}*/
//2.find square of number and display
/*#include<iostream>
#include<math.h>
using namespace std;
class square{
	private:
		int num;
	     int tot;
	public:
	inline void get()
	{
		cout<<"enter number";
		cin>>num;
		}	
	inline void calculate()
	{
		tot=pow(num,2);
		}	
	inline void show()
	{
		cout<<"the square is"<<tot;
	}
}s;
int main()
{
	s.get();
	s.calculate();
	s.show();
	return 0;
}*/
//3.given no is odd or even
/*#include<iostream>
using namespace std;
class Sa{
	private:
		int num;
	public:
	inline void get()
	{
		cout<<"enter a number: ";
		cin>>num;
		}	
	inline void show()
	{
		if(num%2==0)
		{
			cout<<"the number is even";
		}
		else
		{
			cout<<"the number is odd";
		}
	}	
}s;
int main()
{
	s.get();
	s.show();
	return 0;
	
}*/
//4.area of rectangle
#include<iostream>
using namespace std;
class Rectangle{
	int l;
	int b;
	int area;
	public:
		inline void get()
		{
			cout<<"enter l and b";
			cin>>l>>b;
		}
		inline void calculate()
		{
			area=l*b;
		}
		inline void show()
		{
			cout<<"area="<<area;
		}
}s;
int main()
{
	s.get();
	s.calculate();
	s.show();
	return 0;
}
