//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q4. Display month name according to the month number using Switch Statement

#include<stdio.h>

int main(){
	int rollno=1025030452;
	int i;
	printf("enter your birth month : ");
	scanf("%d",&i);
	switch(i){
		case 1:
			printf("your month is january");
			break;
        case 2:
			printf("your month is feburary");
			break;
		case 3:
			printf("your month is march");
			break;
		case 4:
			printf("your month is april");
			break;
		case 5:
			printf("your month is may");
			break;
		case 6:
			printf("your month is june");
			break;
		case 7:
			printf("your month is july");
			break;
		case 8:
			printf("your month is august");
			break;
		case 9:
			printf("your month is september");
			break;
		case 10:
			printf("your month is october");
			break;
		case 11:
			printf("your month is november");
			break;
		case 12:
			printf("your month is december");
			break;
	}
	return 0;
}
