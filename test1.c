#include <stdio.h>
#include <Windows.h>

// 判断大小端
int check_sys(){
	int i = 1;
	return (*(char*)&i);// 取地址，再取最小地址，再看最小地址里的内容
}
int main1(){
	int ret = check_sys();
	if (ret == 1){
		printf("小端\n");
	}
	else{
		printf("大端\n");
	}
	system("pause");
	return 0;
}

//int main2(){
//	char a = -128;
//	printf("%u\n", a);// 无符号整形 FFFF FF8a
//	system("pause");
//	return 0;
//}
//int main3(){
//	char a = 128;
//	printf("%u\n", a);// 结果为-128
//	system("pause");
//	return 0;
//}
int main4(){
	
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);// -10
	system("pause");
	return 0;
}
int main(){
	char a[1000];
	int i = 0;
	for (; i < 1000; i++){
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));// 255
	system("pause");
	return 0;
}