/**
* 二分查找
* 问题描述：给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，
*			写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
* 输入：nums = [-1,0,3,5,9,12], target = 9
* 输出：4
* 解释：9 出现在 nums 中并且下标为 4
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
		cout << "查找失败" << endl;
	}
	else {
		cout << "元素在数组中的第 " << ret+1<<" 个位置" << endl;
	}
}