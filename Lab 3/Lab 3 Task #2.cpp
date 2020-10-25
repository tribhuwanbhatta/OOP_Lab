//QN.2 Write a program in CPP to overload unary ++ for postfix and prefix increment operation on complex
//numbers using non-member/friend function.

#include<iostream>

using namespace std;

class complex
{
	int real;
	int imag;
	
	public:
		
		void getdata()
		{
			cout<<"Enter the Real and Imaginary Part: "<<endl;
			cout<<"Real: ";
			cin>>real;
			cout<<"Imaginary: ";
			cin>>imag;
		}
		
		void showdata()
		{
			cout<<"The sum is: "<<real<<"+"<<imag<<"i"<<endl;
			
		}
		
		
		
friend complex operator ++(complex &);
friend complex operator ++(complex &,int);	
};

//Friend or Non-Member Function
	
	//Prefix
		
		complex operator ++(complex &n)
		{
			complex temp;
			temp.real=++n.real;
			temp.imag=++n.imag;
			return temp;
		}
		
		//Postfix
		
		complex operator ++(complex &n, int)
		{
			complex temp;
			temp.real=n.real++;
			temp.imag=n.imag++;
			return temp;
		}

int main()
{
	complex num,a,b;
	num.getdata();
	a=num++;
	b=++num;
	num.showdata();
	a.showdata();
	b.showdata();
	return 0;
}
