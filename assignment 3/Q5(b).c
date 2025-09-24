//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q5. To check whether number is: (a) even or odd (b) negative or positive by using (i) if-else
//	(ii) ternary operator

#include<stdio.h>

int main(){
	int rollno=1025030452;
	int a,b;
	printf("enter the number : ");
	scanf("%d",&a);
	b=a%2;
	(b==0)?printf("the number is even\n"):printf("the number is odd \n");
	(a>0)?printf("number is postive"):printf("number is negative");
	return 0;
}
