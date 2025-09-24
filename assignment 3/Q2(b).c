//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q2. To find greatest of 3 integers using two methods (a) if-else and (b) ternary operator.

#include<stdio.h>

int main(){
	int rollno=1025030452;
	float a,b,c,d;
	printf("enter the number 1 : ");
	scanf("%f",&a);
	printf("enter the number 2 : ");
	scanf("%f",&b);
	printf("enter the number 3 : ");
	scanf("%f",&c);
	d=(a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	printf("the greatest number is : %f",d);
	return 0;
}
