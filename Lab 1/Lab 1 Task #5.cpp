//WAP in CPP to illustrate the concept of default arguments.

#include<iostream>

using namespace std;

int vol(int a, int b=0, int c=1)
{
	return a*b*c;
}

int main()
{
	
	
	cout<<"The volume is: "<<vol(1,2,3)<<endl;
	cout<<"The volume is: "<<vol(1,2)<<endl;
	cout<<"The volume is: "<<vol(1);
	
	return 0;
	
}
