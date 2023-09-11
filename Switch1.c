//program to implement a calculator using switch operators.
#include<stdio.h>
int main()
{
	int a,b,d;
	char op; 
	printf("Enter the numbers:\n");
	scanf("%d%d",&a,&b);
	printf("\nPress + for addition.");
	printf("\nPress - for subtraction.");
	printf("\nPress * for multiplication.");
	printf("\nPress / for division.");
	printf("\nEnter your choice.");
	scanf(" %c",&op);
	switch(op){
		case '+':
			d=a+b;
			printf("%d",d);
			break;
		case '-':
			d=a-b;
			printf("%d",d);
			break;
		case '*':
			d=a*b;
			printf("%d",d);
			break;
		case '/':
			d=a/b;
			printf("%d",d);
			break;	
		default:
			printf("\nIncorrect input.");
					
		
		}
	        return 0;
}
