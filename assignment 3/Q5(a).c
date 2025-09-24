//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q5. To check whether number is: (a) even or odd (b) negative or positive by using (i) if-else
//	(ii) ternary operator

#include<stdio.h>

int main(){
	int rollno=1025030452;
	int c,a;
	printf("enter number : ");
	scanf("%d",&a);
	c=a%2;
	if(c==0){
		printf("number is even \n");
	}
	else{
		printf("number is odd \n");
	}
	if(a>0){
		printf("number is positive");
	}
	else{
		printf("number is negative");
	}
	return 0;
}
