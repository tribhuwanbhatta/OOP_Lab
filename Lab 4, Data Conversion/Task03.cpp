//QN.3 WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the concept of
//user defined to user defined conversion by writing conversion routine in source class.

#include<iostream>
#include<cmath>

using namespace std;

class Dest
{
	private:
		
	float r;
	float theta;
	
	public:
		
		Dest()
		{
			r=0;
			theta=0;
		}
		
		Dest( float rad, float angle)
		{
			r=rad;
			theta=angle;
			
		}
		
		void showdata()
		{
			cout<<"The polar coordinates are: "<<"("<<r<<", "<<theta<<")"<<endl;
		}
};


class Sour
{
	private:
		
	float x;
	float y;
	
	public:
		
		void getdata()
		{
			cout<<"Enter the x and y coordinates: "<<endl;
			cin>>x>>y;
		}
		
		operator Dest()
		{
			float rad, angle;
			rad=sqrt(pow(x,2)+pow(y,2));
			angle=atan(y/x);
			return Dest(rad,angle);
		}
};

int main()
{
	Dest d;
	Sour s;
	s.getdata();
	d=s;
	d.showdata();
	return 0;
}

