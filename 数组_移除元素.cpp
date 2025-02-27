/**
* 移除元素
* 给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
* 
*/


#include<iostream>
#include<vector>
using namespace std;

/*
* 暴力求解法：
*	时间复杂度：O(n*n)
*/
int removeElement1(vector<int> arr, int val) {
	int size = arr.size();
	for (int i = 0; i < size; i++) {
		if (arr[i] == val) {
			for (int j = i+1; j < size; j++) {
				arr[j-1] = arr[j ];
			}
			i--;
			size--;
		}
	}
	return size;
}

/*
* 快慢指针法
*/
int removeElement2(vector<int>& arr, int val) {
	int size = arr.size();
	int low = 0;
	for (int fast = 0; fast < size; fast++) {
		if (arr[fast] != val) {
			arr[low] = arr[fast];
			low++;
		}
	}
	return low;
}

void printArray(vector<int>& arr) {
	cout << "数组为：";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main() {
	int val = 3;
	vector<int> arr1 = { 3,2,2,3 };

	printArray(arr1);
	cout <<"删除 "<<val<<" 后数组的长度为：" << removeElement2(arr1, val)<<endl;
	printArray(arr1);


}

