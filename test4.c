#include <stdio.h>
#include <stdlib.h>
#define TRUE  1
#define FALSE 0

int print_char(char** strings, int value){
	arrset(strings != NULL);
	// �����б��е�ÿ���ַ���...
	while (*strings != NULL){
	// �۲��ַ����е�ÿ���ַ��� �������Ƿ������ǲ��ҵ��Ǹ�
		while (**strings != '\0'){
			if (*(*strings)++ == value)
				return TRUE;
		}
		strings++;
	}
	return FALSE;
}
int main(){
	int strings = "hello bit!";
	int value = "hello world!";
	print_char(strings, value);
	system("pause");
	return 0;
}