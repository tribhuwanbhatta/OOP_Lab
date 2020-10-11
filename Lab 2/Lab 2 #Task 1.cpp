//QN.1 Write a program in CPP to input the name, roll, marks and address of a student from the user and
//display the entered details using the concept of class and object.


#include<iostream>

using namespace std;

class info
{
	char name[20];
	int roll;
	int marks;
	char address[20];
	
	public:
		
	void getinfo()
	{
		cout<<"Enter details: "<<endl;
		cin>>name>>roll>>marks>>address;
	}
	
	void showinfo()
	{
		cout<<"The Enter details are: "<<endl<<name<<endl<<roll<<endl<<marks<<endl<<address<<endl;
		
	}
};


int main()
{
	info a;
	a.getinfo();
	a.showinfo();
	
}
