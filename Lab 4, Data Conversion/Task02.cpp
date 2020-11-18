//QN.2 Write a program in CPP to convert the distance in feet and inch entered by the user into distance in
//meters using the concept of user defined to basic data conversion.

#include<iostream>

using namespace std;

class Dis 
{
	private:
		float feet;
		float inch;
		
		
		public:
			
			Dis()
			{
				feet=0;
				inch=0;
				
			}
			
			void getdata()
			
			{
				cout<<"Get Feet and Inches"<<endl;
				cin>>feet>>inch;
			}
			
			
			operator float()
			{
				float m=inch/12;
				m=m+feet;
				m=m/3.2808;
				return m;
			}
			
			void showdata()
			{
				float m;
				cout<<"The result in Meters is: "<<m<<" m";
			}
		
			
};


int main()
{
	Dis d;
	float meter;
	d.getdata();
	
	meter=d;
	d.showdata();
	return 0;
}
