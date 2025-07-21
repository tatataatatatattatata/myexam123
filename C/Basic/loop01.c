#include<stdio.h>

int main()
{
	int a = 101;
	while (a >= 1) {
	
		printf("%d\n", a);
		// printf("%d\n", a-- );로 사용하고 밑에 수식을 안써도 가능
		a = a - 1;
		//a = a - 1 , a - = 1; , i-- 3개 다 같은 표현
	}
	return 0;

}
