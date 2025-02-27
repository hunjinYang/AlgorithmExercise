/**
* �Ƴ�Ԫ��
* ����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�
* 
*/


#include<iostream>
#include<vector>
using namespace std;

/*
* ������ⷨ��
*	ʱ�临�Ӷȣ�O(n*n)
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
* ����ָ�뷨
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
	cout << "����Ϊ��";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main() {
	int val = 3;
	vector<int> arr1 = { 3,2,2,3 };

	printArray(arr1);
	cout <<"ɾ�� "<<val<<" ������ĳ���Ϊ��" << removeElement2(arr1, val)<<endl;
	printArray(arr1);


}

