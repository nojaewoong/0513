#include <stdio.h>
 int main()
 {
 	int out1 , out2;
 	int a,b;
 	
 	out1 = printf("Hello world");
 	printf("%d\n",out1);
 	
 	printf("두개의 정수");
 	out2 = scanf("%d %d", &a,&b);
 	printf("%d %d", a,b);
 	printf("scanf 함수가입력받은 데이터의 %d입니다",out2);
 	
 	
 	return 0;
 }
