#include <stdio.h>
#include <stdlib.h>
#define TRUE  1
#define FALSE 0

// ����һ��ָ����NULL��β��ָ���б��ָ�룬 
// ���б��е��ַ����в���һ��ȷ�����ַ�
int find_char(char** strings, char value){
	char* string;
	// ���ǵ�ǰ���ڲ��ҵ��ַ���
	while ((string = *strings++) != NULL){
	// �۲��ַ����е�ÿ���ַ����������ǲ���������Ҫ���ҵ��Ǹ�
		while (*string != '\0'){
			if (*string++ == value)
				return TRUE;
		}
	}
	return FALSE;
}
int main(){

	system("pause");
	return 0;
}