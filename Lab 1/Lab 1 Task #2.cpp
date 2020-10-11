//QN.2. WAP in C to input the name, roll, marks and address of n students entered by the user and display the
//entered details using the concept of structure.

#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	int marks;
	char address[20];
}a[20];

int main()
{
	int n,i;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	

	struct student a[n];
	
//Taking input
	
 for (i = 0; i <n; i++) 
 	{
        
		a[i].roll = i + 1;
		printf("Enter the details: ");
		scanf("%s%d%d%s",a[i].name,&a[i].roll,&a[i].marks,a[i].address);
     
	   
    }
	
	printf("The entered information is: ");

//Showing output
 
for (i = 0; i < n; ++i) 
	{
        
		printf("Roll number is : %d", a[i].roll);
        printf("First name: %s ", a[i].name);
        printf("Marks is: %d", a[i].marks);
        printf("Address is: %s",a[i].address);
        printf("\n");
        
    
	}
	
    return 0;
	
}
