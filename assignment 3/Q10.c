//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q10. Write a program to read in numbers until the number -999 is encountered. The sum of
//	 all numbers read until this point should be printed out.

#include<stdio.h>

int main(){
	int rollno=1025030452;
	int a,i,k=0;
	for(i=0;1;i++){
		printf("enter the number :  ");
		scanf("%d",&a);
		k=k+a;
		printf("the sum is : %d \n",k);
		if(a==-999){
			break;
		}
	}
	return 0;
}
