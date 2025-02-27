/**
* 二分查找
* 问题描述：给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，
*			写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
* 输入：nums = [-1,0,3,5,9,12], target = 9
* 输出：4
* 解释：9 出现在 nums 中并且下标为 4
* 
* 
* 测试：
* 测试用例1：[-10, -5, 0, 3, 7, 12, 15, 20, 30, 50]，目标值：7        输出：4
* 测试用例2：[-100, -50, 0, 30, 60, 90, 120, 150, 200]，目标值：200   输出：8
* 测试用例3：[1, 3, 5, 7, 9, 11, 13, 15, 17, 19]，目标值：4           输出：-1
*/  

/*

#include<iostream>
#include<vector>
using namespace std;

//写法一：左闭右闭
int binarySearch1(vector<int>& arr,int target) {
	int left = 0;
	int right = arr.size()-1;
	
	while(left <= right){       //由于采用的是左闭右闭，故这里是小于等于
		int middle = (left + right) / 2;
		if (arr[middle] > target) {
			right = middle - 1;              //这里的减一是因为已经确认middle位置不是target
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

//写法二：左闭右开
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
	cout << "数组内容为：";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	vector<int> arr1 = { -10, -5, 0, 3, 7, 12, 15, 20, 30, 50 };
	int target = 7;
	printArray(arr1);
	cout <<"左闭右闭：" << target << " 所在数组中的位置为：" << binarySearch1(arr1, target) << endl;
	cout << "左闭右开：" << target << " 所在数组中的位置为：" << binarySearch2(arr1, target) << endl;

	vector<int> arr2 = { -100, -50, 0, 30, 60, 90, 120, 150, 200 };
	target = 200;
	printArray(arr2);
	cout << "左闭右闭：" << target << " 所在数组中的位置为：" << binarySearch1(arr2, target) << endl;
	cout << "左闭右开：" << target << " 所在数组中的位置为：" << binarySearch2(arr2, target) << endl;

	vector<int> arr3 = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	target = 4;
	printArray(arr3);
	cout << "左闭右闭：" << target << " 所在数组中的位置为：" << binarySearch1(arr3, target) << endl;
	cout << "左闭右开：" << target << " 所在数组中的位置为：" << binarySearch2(arr3, target) << endl;
}

*/