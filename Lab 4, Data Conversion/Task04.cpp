//QN.4 WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the concept of
//user defined to user defined conversion by writing conversion routine in destination class.

#include<iostream>
#include<cmath>

using namespace std;

class Sour
{
	private:
		float x, y;
		
		public:
			
			getdata()
			{
				cout<<" Enter x and y coordinates, (x,y)= ";
				cin>>x>>y;
			}
			
			float returnx()
			{
				return x;
			}
			
			float returny()
			{
				return y;
			}
			
};


class Dest
{
	private:
	float r, theta;
	
	public:
		
		Dest()
		{
			r=0;
			theta=0;
		}
		
		Dest(Sour d)
		{
			r=sqrt(pow(d.returnx(),2)+pow(d.returny(),2));
			theta=atan(d.returny()/d.returnx());
			
		}
	
	void showdata()
	{
		cout<<"The polar coordinates are "<<"("<<r<<","<<theta<<")"<<endl;
	}
};


int main()
{
	Sour s;
	Dest d;
	s.getdata();
	d=s;
	d.showdata();
	return 0;
}
