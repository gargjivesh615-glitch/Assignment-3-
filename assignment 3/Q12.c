//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q12. Read in 20 integers and count the even numbers;

#include<stdio.h>

int main(){
	int rollno=1025030452;
		int a,k,i,j=0;
		for(i=1;i<=20;i++){
			printf("enter the number %d: ",i);
			scanf("%d",&a);
			k=a%2;
			if(k==0){
				j++;
			}
		}
		printf("even numbers entered are : %d",j);
	return 0;
}
