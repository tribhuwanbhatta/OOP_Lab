//QN.4 Write a program in CPP to illustrate the concept of constructor(default, parameterized and copy
//constructor) and destructor taking class complex as an example.

#include<iostream>

using namespace std;


class hello
{
	int num1;
	int num2;
	
	public:

//Default Constructor
		
		hello()
		{
			num1=0;
			num2=0;
		}

//Parameterized Constructor
		
		hello(int a, int b)
		{
			num1=a;
			num2=b;
		}
		
// Copy Constructor

		hello(hello &c)
		{
			num1=c.num1;
			num2=c.num2;
		}

//Display data
		
		void showdata()
		{
			cout<<"The addition of two numbers is: "<<num1+num2<<endl;
		}

//Initiating Destructor
		
	~hello()
	{
    cout<<"Destructor is called"<<endl;
   }
   
};


int main ()
{
	hello n1,n2(2,3),n3(n2);
	n1.showdata();
	n2.showdata();
	n3.showdata();
	return 0;
}
