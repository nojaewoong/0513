#include<stdio.h>
int main()
{
	int i; 
	char str[20];
	
	printf("���ڿ� �Է� : ");
	scanf("%s",str);
	
	printf("%s", str);
	for(i= strlen(str); i>=0; i--)
	putchar(str[i]);
	
}
