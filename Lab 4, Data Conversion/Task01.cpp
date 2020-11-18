// QN.1. Write a program in CPP to convert the distance in meters entered by the user into distance in feet and
// inch using the concept of basic to user defined data conversion.

#include<iostream>

using namespace std;

class Dis 
{
    private:
    	
    float inch;
    float feet;

    public:

    Dis()
    {
        feet=0;
        inch=0;
    }

    Dis(float m)
    {
        float f1=m*3.2808;
        feet = int(f1);
        inch= (f1-feet)*12;

    }

    void showdata()
    {
        cout<<" The converted data is : "<<feet<<" Feets"<<"  "<<inch<<" Inches";
    }
};


    int main()

    {
        Dis a;
        float meter;
        cout<<"Enter the distance in meters: "<<endl;
        cin>>meter;
        a=meter;
        a.showdata();
        return 0;

    }





