/**
* ���ֲ���
* ��������������һ�� n ��Ԫ������ģ������������� nums ��һ��Ŀ��ֵ target  ��
*			дһ���������� nums �е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� -1��
* ���룺nums = [-1,0,3,5,9,12], target = 9
* �����4
* ���ͣ�9 ������ nums �в����±�Ϊ 4
* 
* 
* ���ԣ�
* ��������1��[-10, -5, 0, 3, 7, 12, 15, 20, 30, 50]��Ŀ��ֵ��7        �����4
* ��������2��[-100, -50, 0, 30, 60, 90, 120, 150, 200]��Ŀ��ֵ��200   �����8
* ��������3��[1, 3, 5, 7, 9, 11, 13, 15, 17, 19]��Ŀ��ֵ��4           �����-1
*/  

/*

#include<iostream>
#include<vector>
using namespace std;

//д��һ������ұ�
int binarySearch1(vector<int>& arr,int target) {
	int left = 0;
	int right = arr.size()-1;
	
	while(left <= right){       //���ڲ��õ�������ұգ���������С�ڵ���
		int middle = (left + right) / 2;
		if (arr[middle] > target) {
			right = middle - 1;              //����ļ�һ����Ϊ�Ѿ�ȷ��middleλ�ò���target
		}
		else if (arr[middle] < target) {
			left = middle + 1;
		}
		else {
			return middle;
		}
	}
	return -1;

}

//д����������ҿ�
int binarySearch2(vector<int>& arr, int target) {
	int left = 0;
	int right = arr.size();
	
	while (left < right) {
		int middle = (left + right) / 2;
		if (arr[middle] > target) {
			right = middle;
		}
		else if (arr[middle] < target) {
			left = middle + 1;
		}
		else {
			return middle;
		}
	}
	return -1;
 }



void printArray(vector<int> arr) {
	cout << "��������Ϊ��";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	vector<int> arr1 = { -10, -5, 0, 3, 7, 12, 15, 20, 30, 50 };
	int target = 7;
	printArray(arr1);
	cout <<"����ұգ�" << target << " ���������е�λ��Ϊ��" << binarySearch1(arr1, target) << endl;
	cout << "����ҿ���" << target << " ���������е�λ��Ϊ��" << binarySearch2(arr1, target) << endl;

	vector<int> arr2 = { -100, -50, 0, 30, 60, 90, 120, 150, 200 };
	target = 200;
	printArray(arr2);
	cout << "����ұգ�" << target << " ���������е�λ��Ϊ��" << binarySearch1(arr2, target) << endl;
	cout << "����ҿ���" << target << " ���������е�λ��Ϊ��" << binarySearch2(arr2, target) << endl;

	vector<int> arr3 = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	target = 4;
	printArray(arr3);
	cout << "����ұգ�" << target << " ���������е�λ��Ϊ��" << binarySearch1(arr3, target) << endl;
	cout << "����ҿ���" << target << " ���������е�λ��Ϊ��" << binarySearch2(arr3, target) << endl;
}

*/