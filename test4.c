#include <stdio.h>
#include <stdlib.h>
#define TRUE  1
#define FALSE 0

int print_char(char** strings, int value){
	arrset(strings != NULL);
	// 对于列表中的每个字符串...
	while (*strings != NULL){
	// 观察字符串中的每个字符， 看看它是否是我们查找的那个
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