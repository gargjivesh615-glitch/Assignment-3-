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
	int i,max,min,num[5];
	for(i=1;i<=5;i++){
		printf("enter the number %d : ",i);
		scanf("%d",&num[i-1]);
	}
	max=num[0];
	min=num[0];
	for(i=1;i<=5;i++){
		if(max<=num[i-1]){
			max=num[i-1];
		}
		if(min>=num[i-1]){
			min=num[i-1];
		}
	}
	printf("lower limit of range is : %d \n",min);
	printf("upper limit of range is : %d",max);
	return 0;
}
