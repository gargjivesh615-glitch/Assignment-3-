//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q8. Write a program to read in 5 numbers and compute the average, max, min, standard
//	deviation.

#include<stdio.h>
#include<math.h>

int main(){
	int rollno=1025030452;

		int num[5],i,k=0;
		float m=0,p=0;
		for(i=1;i<=5;i++){
			printf("enter %d number :  ",i);
			scanf("%d",&num[i-1]);
		}
		for(i=1;i<=5;i++){
			m=m+num[i-1];
	  }
	  m=m/5;
		printf("the average is : %f \n",m);
		for(i=1;i<=5;i++){
			if(k<=num[i-1]){
				k=num[i-1];
			}
		}
		printf("the max value is : %d \n",k);
		k=num[0];
		for(i=1;i<=5;i++){
			if(k>=num[i-1]){
				k=num[i-1];
			}
		}
		printf("the min value is : %d \n",k);
		for(i=1;i<=5;i++){  
		p=p+pow(m-num[i-1],2);
		}
		p=p/5;
		p=sqrt(p);
		printf("the standard deviation is : %f",p);
	return 0;
}
