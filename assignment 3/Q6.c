//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q6. To check a no. say ‘n’ divisible by 5 and/or 8. Print the appropriate message accordingly.

#include<stdio.h>

int main(){
	int rollno=1025030452;
	int a;
	printf("enter number : ");
	scanf("%d",&a);
	if(a%40==0){
		printf("number is divisible by both 5 and 8");
	}
	else if(a%40!=0){
		if(a%5==0){
			printf("number is divisible by 5 only ");
		}
		else if (a%8==0){
			printf("number is divisible by 8 only");
		}
		else{
			printf("number is not divisible by 5 and 8");
		}
	}
	return 0;
}
