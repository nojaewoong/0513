#include<stdio.h>
int main()
{
	char a,b;
	
	printf("�빮�� �Է� : ") ;
	a = getchar();
	fflush(stdin);
	printf("�ҹ��� �Է� : ");
	b = getchar();
	
	printf("�빮�� %c�� �ҹ��ڷ� ��ȯ :%c\n",a,a+32) ;
	printf("�ҹ��� %c�Ǵ빮�ڷ� ��ȯ : %c\n",b,b-32) ;
	 
	
	return 0;
}
