//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	////滑动窗口法
//	//int minSubArrayLen(int target,vector<int>& nums) {
//	//	int result = INT32_MAX;
//	//	int sum = 0;
//	//	int subLength = 0;
//	//	int i = 0;
//	//	for (int j = 0; j < nums.size(); j++) {
//	//		sum += nums[j];
//	//		while (sum >= target) {
//	//			subLength = j - i + 1;
//	//			result = result < subLength ? result : subLength;
//	//			sum -= nums[i++];     //这里体现出滑动窗口
//	//		}
//	//	}
//	//	return result == INT32_MAX ? 0 : result;
//	//}
//
//	//暴力求解
//	int minSubArrayLen(int target, vector<int>& nums) {
//		int result = INT32_MAX;
//		int size = nums.size();
//		int sum = 0;
//		int subLength = 0;
//		for (int i = 0; i < size; i++) {
//			sum = 0;
//			for (int j = i; j < size; j++) {
//				sum += nums[j];
//				if (sum >= target) {
//					subLength = j - i + 1;
//					result = result < subLength ? result : subLength;
//					break;
//				}
//			}
//		}
//		return result == INT32_MAX ? 0 : result;
//	}
//};
//
//int main() {
//	Solution solution;
//	
//	int target = 7;
//	vector<int> nums1 = { 2,3,1,2,4,3 };    //结果应为2
//	cout<<solution.minSubArrayLen(target,nums1)<<endl;
//
//	target = 4;
//	vector<int> nums2 = { 1,4,4 };  //结果应为1
//	cout << solution.minSubArrayLen(target, nums2) << endl;
//
//	target = 11;
//	vector<int> nums3 = { 1,1,1,1,1,1,1,1};      //结果应为0
//	cout << solution.minSubArrayLen(target, nums3) << endl;
//
//
//
//}