////�������󣺸���һ�������� n ������һ������ 1 �� n2 ����Ԫ�أ���Ԫ�ذ�˳ʱ��˳���������е� n x n �����ξ��� matrix
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int>> generateMatrix(int n) {
//		vector<vector<int>> matrix(n, vector<int>(n, 0));
//		int startX = 0, startY = 0;
//		int iter = n / 2;
//		int offset = 1;
//		int count = 1;
//		while (iter) {
//			int i, j;
//			for (j = startY; j < n - offset; j++) {
//				matrix[startX][j] = count++;
//			}
//			for (i = startX; i < n - offset; i++) {
//				matrix[i][j] = count++;
//			}
//			for (; j > startY; j--) {
//				matrix[i][j] = count++;
//			}
//			for (; i > startX; i--) {
//				matrix[i][j] = count++;
//			}
//			startX++;
//			startY++;
//			offset++;
//			iter--;
//		}
//		if (n % 2 == 1) {
//			matrix[startX][startY] = count;
//		}
//		return matrix;
//	
//	}
//};
//
//int main() {
//	Solution solution;
//	int n = 5;
//	
//	vector<vector<int>> matrix = solution.generateMatrix(n);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << matrix[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}