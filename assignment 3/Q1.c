//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q1. For any character entered through keyboard check whether the entered character is
//	capital letter, small letter, a digit or special symbol

#include<stdio.h>

int main(){
	int rollno=1025030452;
	char c;
	printf("enter the character : ");
	scanf("%c",&c);
	
	
	if(c>=65&&c<=91){
		printf("the character is capital letter \n");
		printf("your entered character was : %c",c);
	}
	else if(c>=92&&c<=122){
		printf("the character is small letter \n");
		printf("your entered character was : %c",c);
	}
	else if(c>=32&&c<=47){
		printf("the character is special character \n");
		printf("your entered character was : %c",c);
	}
	else if(c>=48&&c<=57){
		printf("the character is digit \n");
		printf("your entered character was : %c",c);
	}
	else {
		printf("no character was dectected");
	}
	return 0;
}
