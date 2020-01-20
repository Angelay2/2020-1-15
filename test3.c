#include <stdio.h>
#include <stdlib.h>
#define TRUE  1
#define FALSE 0

// 给定一个指向以NULL结尾的指针列表的指针， 
// 在列表中的字符串中查找一个确定的字符
int find_char(char** strings, char value){
	char* string;
	// 我们当前正在查找的字符串
	while ((string = *strings++) != NULL){
	// 观察字符串中的每个字符，看看他是不是我们需要查找的那个
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