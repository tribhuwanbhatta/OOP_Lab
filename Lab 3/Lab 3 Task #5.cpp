//QN.5 Write a program in CPP to find the product of two 3 by 3 matrices entered by the user by overloading
//binary * operator.

#include<iostream>

using namespace std;

class matrix
{
	int a[3][3];
	
	public:
		
		// Member function
		
		matrix operator *(matrix n1)
		{
			matrix temp;
			for(int i=0;i<3;i++)
			{
				
				
				for(int j=0;j<3;j++)
				{
					temp.a[i][j]=0;
					
					for(int k=0;k<3;k++)
					{
						temp.a[i][j]=temp.a[i][j]+a[i][k]*n1.a[k][j];
					}
				}
			}
			
			return temp;
		}
		
		//Getting Elements of a Matrix
		
		void getdata()
		{
			cout<<"Enter the Matrix"<<endl;
			
			for(int i=0;i<3;i++)
			{
				for( int j=0;j<3;j++)
				{
					
					cin>>a[i][j];
				}
			}
		}
		
		
		//Showing a matrix
		
		void showdata()
		{
		
		cout<<"The result of the product is: "<<endl;
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			
			{
				
				cout<<a[i][j]<<" ";
				
				
			}
			cout<<endl;
		}
		
			
		}

};

int main()
{
	matrix m1,m2,sum;
	m1.getdata();
	m2.getdata();
	sum=m1*m2;
	sum.showdata();
	
	return 0;
	
}
