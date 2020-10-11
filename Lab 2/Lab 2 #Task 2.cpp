//QN.2 Write a program in CPP to input the name, roll, marks and address of n students from the user and
//display the entered details using the concept of class and objects.


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
		cout<<name<<endl<<roll<<endl<<marks<<endl<<address<<endl;
		
	}
};


int main()
{
	int n;

	cout<<"Enter Number of Students: "<<endl;
	cin>>n;
	info a[n];
	
	//Getting the details

	for(int i=0;i<n;i++)
	{

	a[i].getinfo();

	}
	
	cout<<"The Enter details are: "<<endl;
	
	//Showing the entered details

	for(int i=0;i<n;i++)
	{

	cout<<"Student "<<i+1<<endl;
	a[i].showinfo();
	cout<<"\n";

	}
	
	return 0;
}
