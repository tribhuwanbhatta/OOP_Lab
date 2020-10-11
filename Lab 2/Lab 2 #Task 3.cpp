//QN.3 Write a program in CPP to find the sum of two complex numbers using the OOP concept.


#include<iostream>

using namespace std;

class complex
{
	int real;
	int img;
	
	public:
		
	void getdata()
	{
		cout<<"Enter the real and imaginary numbers: "<<endl;
		
		cout<<"Real: ";
		cin>>real;
		
		cout<<"Imaginary: ";
		cin>>img;
		
	}
	
	
	void showdata()
	{
		cout<<"The sum of two complex number is: "<<real<<"+"<<img<<"i"<<endl;
	}

friend complex sum(complex,complex);
};

complex sum(complex num1, complex num2)
{
	complex temp;
	temp.real=num1.real+num2.real;
	temp.img=num1.img+num2.img;
	
	return temp;
}


int main()

{
	complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3=sum(c1,c2);
	c3.showdata();
	
	return 0;
}
