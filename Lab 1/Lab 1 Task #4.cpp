// WAP in CPP to illustrate the concept of inline function.

#include<iostream>

using namespace std;

inline float add(float a, float b)
{
	return a+b;
}

int main()
{
	cout<<"The addition 1: "<<add(2,3)<<endl;
	cout<<"The addition 2: "<<add(10,20);
	
	return 0;
}
