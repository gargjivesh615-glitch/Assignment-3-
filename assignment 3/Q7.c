//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q7. A library charges a fine for every book returned late. For the first 5 days the fine is 50
//	paisa, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return
//	the book after 30 days your membership will be canceled. WAP to accept no. of days the
//	member is late to return the book and display the fine or appropriate message

#include<stdio.h>

int main(){
	int rollno=1025030452;
	int d;
	printf("enter the number of days : ");
	scanf("%d",&d);
	if(d<=5){
		printf("your fine is : 50 paise");
	}
	else if(d>=6&&d<=10){
		printf("your fine is : 1 rupees");
	}
	else if(d>=10&&d<=30){
		printf("your fine is : 5 rupees");
	}
	else{
		printf("your membership is cancelled");
	}
	return 0;
}
