//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q9. WAP using loop (for, while, do-while):
//	*Factorial of number
//	Whether no. is prime or not
//	X raised to power n
//	Check if the input integer is an Armstrong number or not?
//	Range of set of entered nos. by finding smallest and largest
//	Multiplication table
//	HCF of two numbers
//	GCD of two numbers
//	*Generate Fibonacci series	

#include<stdio.h>

int main(){
	int rollno=125030452;
	int a,i,b=1,k=0,s;
	printf("enter the number : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		printf("the %d th number of series is :%d \n",i,k);
		s=b+k;
		k=b;
		b=s;	
	}
	return 0;
}
