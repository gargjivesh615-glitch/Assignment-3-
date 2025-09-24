//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q3. To implement calculator (+,-/,*,% ) using switch statement

#include<stdio.h>

int main(){
	int rollno=1025030452;
	float a,b;
	int A,B;
	char c;
	printf("enter the operator (+,-,*,/,%) : ");
	scanf("%c",&c);
	printf("enter number 1 : ");
	scanf("%f",&a);
	printf("enter number 2 : ");
	scanf("%f",&b);
	switch(c){
		case'+':
		printf("the sum is : %f",a+b);
		break;
		case'-':
		printf("the minus is : %f",a-b);
		break;
		case'*':
		printf("the product is : %f",a*b);
		break;
		case'/':
		printf("the divide is : %f",a/b);
		break;
		case'%':
		 A=(int)a;
		 B=(int)b;
		printf("the remainder is : %d",A/B);
		break;	
	}
	return 0;
	}
