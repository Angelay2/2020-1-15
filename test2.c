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
// ����arr�� ��ʾ��Ԫ�صĵ�ַ
// ���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
// �������ﴫ�ݵ�arr�� ��ʵ�൱�ڵ�һ�еĵ�ַ�� ��һλ����ĵ�ַ
// Ҳ����������ָ��������
int main1(){
	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print_arr1(arr, 3, 5);
	print_arr2(arr, 3, 5);// ���ִ�ӡ���һ��
	// 1,2,3,4,5
	// 6,7,8,9,10
	// 0,0,0,0,0
	system("pause");
	return 0;
}