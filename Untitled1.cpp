#include <stdio.h>
 int main()
 {
 	int out1 , out2;
 	int a,b;
 	
 	out1 = printf("Hello world");
 	printf("%d\n",out1);
 	
 	printf("�ΰ��� ����");
 	out2 = scanf("%d %d", &a,&b);
 	printf("%d %d", a,b);
 	printf("scanf �Լ����Է¹��� �������� %d�Դϴ�",out2);
 	
 	
 	return 0;
 }
