//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	////�������ڷ�
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
//	//			sum -= nums[i++];     //�������ֳ���������
//	//		}
//	//	}
//	//	return result == INT32_MAX ? 0 : result;
//	//}
//
//	//�������
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
//	vector<int> nums1 = { 2,3,1,2,4,3 };    //���ӦΪ2
//	cout<<solution.minSubArrayLen(target,nums1)<<endl;
//
//	target = 4;
//	vector<int> nums2 = { 1,4,4 };  //���ӦΪ1
//	cout << solution.minSubArrayLen(target, nums2) << endl;
//
//	target = 11;
//	vector<int> nums3 = { 1,1,1,1,1,1,1,1};      //���ӦΪ0
//	cout << solution.minSubArrayLen(target, nums3) << endl;
//
//
//
//}