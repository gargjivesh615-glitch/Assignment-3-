//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q2. To find greatest of 3 integers using two methods (a) if-else and (b) ternary operator.

#include<stdio.h>
 
 int main(){
    int rollno=1025030452;
 	int i;
 	float max=0,a;
	for(i=1;i<=3;i++){
 	printf("enter the number %d : ",i);
 	scanf("%f",&a);
 	if(max<a){
 	 max=a;
	 }
	 }
	 printf("the greatest number is : %f", max);
 	return 0;
 }
