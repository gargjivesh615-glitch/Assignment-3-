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
	int l,s,div,rem,i;
	printf("enter the larger number : ");
	scanf("%d",&l);
	printf("enter the smaller number : ");
	scanf("%d",&s);
	for(i=0;s!=0;i++){
      rem=l%s;
      l=s;
      s=rem;
	}
	printf("the h.c.f is : %d",l);
	return 0;
}
