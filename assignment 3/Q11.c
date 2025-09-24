//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q11. Keep reading in integers until one integer larger than 100 is not input. For example: 4 -
//	 90, 35, 78, 110 QUIT! (since 110 is bigger than 100)

#include<stdio.h>

int main(){
	int rollno=1025030452;
	int i,a;
	for(i=0;1;i++){
		printf("enter the number : ");
		scanf("%d",&a);
		printf(" your number is : %d\n",a);
		if(a>100){
			printf("quit !");
			break;
		}
	}
	return 0;
}
