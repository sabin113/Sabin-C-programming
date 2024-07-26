#include <stdio.h>
int main()
{
    double rollno,age;
    char name[50], address[50], email[50];
    char gender[20];
    
    printf("Enter your roll number: \n");
        scanf("%lf", &rollno);
        
    printf("Enter your name \n");
        scanf("%s", &name);
        
    printf("Enter your Age \n");
        scanf("%lf", &age);
        
    printf("Enter your address \n");
        scanf("%s", &address);
        
    printf("Enter your email \n");
        scanf("%s", &email);
        
    printf("Enter your Gender \n");
        scanf("%s", &gender);
         
	totalmarks = english+math+account+cprogram+microp;
	percentage = totalmarks/5;
	
	
    printf("\nResult\n");
	printf("Student name: %s",name);
	printf("\n");
	printf("Student Roll: %d",rollnumber);
	printf("\n");
	printf("Student Faculty: %s",faculty);
	printf("\n");
	printf("Student Email: %s",email);
	printf("\n");
	printf("Student Gender: %s",gender);
	printf("\n");
	printf("Total marks: %lf",totalmarks);
	printf("\n");
	printf("Percentage: %lf",percentage);
	printf("\n");
	
	if((english<40)||(math<40)||(account<40)||(cprogram<40)||(microp<40))
	{
		strcpy(result, "Failed");
		printf("Result Status: %s",result);
		printf("\n");
	}
	else
	{
			strcpy(result, "Passed");
		printf("Result Status: %s",result);
		printf("\n");
	}

    return 0;
}

