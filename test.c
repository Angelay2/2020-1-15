#include <stdio.h>
#include <windows.h>

//// 遍历数组
//void Print(int* p, int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main1(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,0};
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 一级指针p，传给函数
//	Print(p, sz);
//	system("pause");
//	return 0;
//}
//
//void test(int** ptr){
//	printf("num = %d\n", **ptr);
//}
//int main2(){
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);// num = 10
//	test(&p);// num = 10
//	system("pause");
//	return 0;
//}


void test1(char** p){
	printf("num = %d\n", **p);
}
int main(){
	char c = 'b';
	char* pc = &c;
	char** ppc = &pc;
	char* arr[10];
	test1(&pc);// num = 98
	test1(ppc);// num = 98
	//test2(arr);  // 不能用二级指针传参  arr为指针数组 
	system("pause");
	return 0;

}