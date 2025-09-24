//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q9.WAP using loop (for, while, do-while):
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
#include<math.h>
int main(){
	int rollno=1025030452;
	int k=0,a,div,rem,i,j;
	printf("enter the number : ");
	scanf("%d",&a);
	div=a;
	for(i=0;div>0;i++){
		div=div/10;
	}
	div=a;
	for(j=1;j<=i;j++){
		rem=div%10;
		k=k+pow(rem,i);
		div=div/10;
	}
	if(k==a){
		printf("yes it an armstrong number ");
	}
	else{
		printf("no it is not an armstrong number ");
	}
	return 0;
}
