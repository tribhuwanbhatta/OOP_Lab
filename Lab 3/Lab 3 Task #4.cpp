//QN.4 Write a program in CPP to find the sum of two complex numbers using the concept of the overloading
//binary + operator using non-member/friend function.

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
		
friend complex operator +(complex,complex);
};

//Non-Member Function
		
		complex operator +(complex n1,complex n2)
		{
			complex temp;
			temp.real=n1.real+n2.real;
			temp.imag=n1.imag +n2.imag;
			return temp;
		}
		

int main()
{
	complex c1,c2,sum;
	c1.getdata();
	c2.getdata();
	sum=c1+c2;
	sum.showdata();
	return 0;
	
}
