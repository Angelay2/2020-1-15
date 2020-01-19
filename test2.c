#include <stdio.h>
#include <Windows.h>

void print_arr1(int arr[3][5], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print_arr2(int (*arr)[5], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
// 数组arr， 表示首元素的地址
// 但是二维数组的首元素是二维数组的第一行
// 所以这里传递的arr， 其实相当于第一行的地址， 是一位数组的地址
// 也可以用数组指针来接收
int main1(){
	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print_arr1(arr, 3, 5);
	print_arr2(arr, 3, 5);// 两种打印结果一样
	// 1,2,3,4,5
	// 6,7,8,9,10
	// 0,0,0,0,0
	system("pause");
	return 0;
}