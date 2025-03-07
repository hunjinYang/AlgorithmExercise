//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//
///*
//* 我的解法：
//*   算法思路： 首先使用一个临时变量temp代替head
//*              使用while循环先判断一个值不为val的节点，然后进行判空，若为空，返回NULL，否则继续执行
//*              使用两个指针代表一前一后遍历链表，保留值不为val的节点
//*              最后返回temp
//*/
//class Solution1 {
//public:
//    ListNode* removeElements(ListNode* head, int val) {
//        ListNode* temp = head;
//        while (temp) {
//            if (temp->val != val) {
//                break;
//            }
//            else {
//                temp = temp->next;
//            }
//        }
//        if (temp == NULL) {
//            return NULL;
//        }
//
//        ListNode* beforeTemp = temp;
//        ListNode* afterTemp = temp->next;
//        while (afterTemp) {
//            if (afterTemp->val == val) {
//                afterTemp = afterTemp->next;
//                beforeTemp->next = afterTemp;
//            }
//            else {
//                beforeTemp = afterTemp;
//                afterTemp = afterTemp->next;
//            }
//        }
//        return temp;
//    }
//};
//int main() {
//    ListNode* node1 = new ListNode(1);
//    ListNode* node2 = new ListNode(2);
//    ListNode* node3 = new ListNode(6);
//    ListNode* node4 = new ListNode(3);
//    ListNode* node5 = new ListNode(4);
//    ListNode* node6 = new ListNode(5);
//    ListNode* node7 = new ListNode(6);
//
//    node1->next = node2;
//    node2->next = node3;
//    node3->next = node4;
//    node4->next = node5;
//    node5->next = node6;
//    node6->next = node7;
//    int val = 6;
//
//    Solution1 solution1;
//    ListNode* t =  solution1.removeElements(node1,val);
//
//    while (t) {
//        cout << t->val << " ";
//        t = t->next;
//    }
//
//        
//
//
//}