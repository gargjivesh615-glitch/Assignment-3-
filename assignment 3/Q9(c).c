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
	int rollno=1025030452;
	int a,n,i,k=1;
	printf("enter the number : ");
	scanf("%d",&a);
	printf("enter the power : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		k=k*a;
	}
	printf("the result is : %d",k);
	return 0;
}
