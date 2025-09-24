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
	int a,rem,j=0,i;
	printf("enter the number : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		rem=a%i;
		if(rem==0){
			j++;
		}
	}
	if(j>=3){
		printf("number is not prime ");
	}
	else if(a==1){
		printf("number is neither prime nor composite ");
	}
	else{
		printf("number is prime");
	}
	return 0;
}
