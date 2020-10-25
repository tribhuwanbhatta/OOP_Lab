//QN.1 Write a program in CPP to overload unary ++ for postfix and prefix increment operation on complex
//numbers using member function.

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
		
		//Prefix
		
		complex operator ++()
		{
			complex temp;
			temp.real=++real;
			temp.imag=++imag;
			return temp;
		}
		
		//Postfix
		
		complex operator ++(int)
		{
			complex temp;
			temp.real=real++;
			temp.imag=imag++;
			return temp;
		}
		
		
		
};

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
