#include<iostream>
#include<vector>
using namespace std;

//单链表的定义及实现
//class ListNode {
//public:
//	int val;
//	ListNode* next;
//	ListNode(int x):val(x),next(NULL){}
//};
//
//ListNode* createdLinkedList(vector<int> arr) {
//	if (arr.empty()) {
//		return nullptr;
//	}
//
//	ListNode* head = new ListNode(arr[0]);
//	ListNode* cur = head;
//	for (int i = 1; i < arr.size(); i++) {
//		cur->next = new ListNode(arr[i]);
//		cur = cur->next;
//	}
//	return head;
//}
//
//void printLinkedList(ListNode* head) {
//	for (ListNode* p = head; p != nullptr; p = p->next) {
//		cout << p->val<<endl;
//	}
//
//}
//
//void updateLinkedList(ListNode* head,int oldVal,int newVal) {
//	for (ListNode* p = head; p != nullptr; p = p->next) {
//		if (p->val == oldVal) {
//			p->val = newVal;
//		}
//	}
//
//}
//
//void insertLinkedList(ListNode* head, int index,int val) {
//	int i = 1;
//	for (ListNode* p = head; p != nullptr; p = p->next) {
//		
//	}
//
//
//}
//
//int main() {
//	vector<int> arr = { 4,2,10,8,3 };
//	ListNode* list = createdLinkedList(arr);
//	printLinkedList(list);
//}

