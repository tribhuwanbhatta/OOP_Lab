//QN.3. WAP in CPP to find the area of circle and rectangle using the concept of function overloading.
//area using function overloading

#include<iostream>


using namespace std;

float area ( float a)
{
	return 3.14*a*a;
}

float area ( float a, float b)
{
	return a*b;
}

int main()
{
	float l,b,r;

	cout<<"Enter the radius: "<<endl;
	cin>>r;	
	
	cout<<"Enter the length: "<<endl;
	cin>>l;
	
	cout<<"Enter the breadth: "<<endl;
	cin>>b;
	
	cout<<"The Area of Circle is : "<<area(r)<<endl;
	cout<<"The Area of Rectangle is : "<<area(l,b);
	
	return 0;
}
