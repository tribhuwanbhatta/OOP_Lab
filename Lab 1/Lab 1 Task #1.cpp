//QN.1. WAP in C to add two complex numbers using the concept of structure.
// add two complex numbers

#include<stdio.h>


struct complex
{
	float real;
	float imag;
};

int main()
{
struct complex num1,num2,result;

printf("Enter the real and imaginary value of first: ");
scanf("%f%f",&num1.real,&num1.imag);

printf("Enter the real and imaginary value of first: ");
scanf("%f%f",&num2.real,&num2.imag);

result.real=num1.real+num2.real;
result.imag=num1.imag+num2.imag;


printf("The sum of two complex number is %f + %fi: ",result.real,result.imag);	

}
