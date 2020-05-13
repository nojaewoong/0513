#include<stdio.h>
int main()
{
	char a,b;
	
	printf("대문자 입력 : ") ;
	a = getchar();
	fflush(stdin);
	printf("소문자 입력 : ");
	b = getchar();
	
	printf("대문자 %c의 소문자로 변환 :%c\n",a,a+32) ;
	printf("소문자 %c의대문자로 변환 : %c\n",b,b-32) ;
	 
	
	return 0;
}
