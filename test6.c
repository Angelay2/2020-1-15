#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 求最小公倍数
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i = 1;
	while (((a * i) % b) != 0){
		i++;
	}
	printf("%d\n", a * i);
	system("pause");
	return 0;
}