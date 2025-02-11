/**
* ���ֲ���
* ��������������һ�� n ��Ԫ������ģ������������� nums ��һ��Ŀ��ֵ target  ��
*			дһ���������� nums �е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� -1��
* ���룺nums = [-1,0,3,5,9,12], target = 9
* �����4
* ���ͣ�9 ������ nums �в����±�Ϊ 4
*/ 

#include<iostream>
using namespace std;

int binarySearch(int nums[],int target,int length) {
	int left = 0;
	int right = length-1;
	int middle = (left + right) / 2;
	while (left < right) {
		if (nums[middle] < target) {
			left = middle+1;
		}
		else if (nums[middle] > target) {
			right = middle-1;
		}
		else {
			return middle;
		}
		middle = (left + right) / 2;
	}
	return -1;
	
}

int main() {
	int nums[] = { -1,0,3,5,9,12 };
	int target = 9;
	int length = sizeof(nums) / sizeof(nums[0]);
	
	int ret = binarySearch(nums,target,length);
	if ( ret == -1) {
		cout << "����ʧ��" << endl;
	}
	else {
		cout << "Ԫ���������еĵ� " << ret+1<<" ��λ��" << endl;
	}
}