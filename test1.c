#include <stdio.h>
#include <Windows.h>

// �жϴ�С��
int check_sys(){
	int i = 1;
	return (*(char*)&i);// ȡ��ַ����ȡ��С��ַ���ٿ���С��ַ�������
}
int main1(){
	int ret = check_sys();
	if (ret == 1){
		printf("С��\n");
	}
	else{
		printf("���\n");
	}
	system("pause");
	return 0;
}

//int main2(){
//	char a = -128;
//	printf("%u\n", a);// �޷������� FFFF FF8a
//	system("pause");
//	return 0;
//}
//int main3(){
//	char a = 128;
//	printf("%u\n", a);// ���Ϊ-128
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