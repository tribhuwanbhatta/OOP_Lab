//QN.3 Write a program in CPP to find the sum of two complex numbers using the concept of the overloading
//binary + operator using member function.

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
		
	
		//Member Function
		
		complex operator +(complex n1)
		{
			complex temp;
			temp.real=real+n1.real;
			temp.imag=imag +n1.imag;
			return temp;
		}
		
		
		
		
};

int main()
{
	complex c1,c2,sum;
	c1.getdata();
	c2.getdata();
	sum=c1+c2;
	sum.showdata();
	return 0;
	
}
