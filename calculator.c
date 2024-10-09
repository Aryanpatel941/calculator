#include<stdio.h>
void sum(int x,int y){
	printf("sum of %d and %d is %d\n",x,y,x+y);
}
void substract(int x,int y){
	printf("substract of %d and %d is %d\n",x,y,x-y);
}
void multiply(int x,int y){
	printf("multiply of %d and %d is %d\n",x,y,x*y);
}
void divide(int x,int y){
	printf("divide of %d and %d is %d\n",x,y,x/y);
}
void modular(int x,int y){
	printf("reminder of %d and %d is %d\n",x,y,x%y);
}
int main(){
	int num1,num2;
	int choice;
	char c='%';
	do{
	
	
	
  
  
	printf(" enter 1 for +\n");
	printf(" enter 2 for -\n");
	printf(" enter 3 for *\n");
	printf(" enter 4 for /\n");
	printf(" enter 5 for %c \n",c);
	printf(" enter 0 for exit\n");
	
	printf(" enter your choice :");
	scanf("%d",&choice);
	
	
	printf(" enter first number :");
	scanf("%d",&num1);
	printf(" enter second number :");
	scanf("%d",&num2);
	
	

	
	switch(choice){
		case 1: sum(num1,num2);
		break;
		case 2: substract(num1,num2);
		break;
		case 3: multiply(num1,num2);
		break;
		case 4: divide(num1,num2);
		break;
		case 5: modular((int)num1,(int)num2);
		break;
		case 0: printf(" you exit successfully");
		break;
		default:printf("invalid choice");
	}
}
while(choice!=0);
}
