/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==nullptr && head->next==nullptr) return true;
        ListNode*slow = head;
        ListNode*fast = head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode*right = reverseList(slow);
        ListNode*left = head;

        while(right){
            if(left->val!=right->val){
                return false;
            }
            left= left->next;
            right= right->next;
        }
        return true;
    }

    ListNode *  reverseList(ListNode*head){
        ListNode*curr = head;
        ListNode* prev = nullptr;
        while(curr!=nullptr){
            ListNode*newNode = curr ->next;
            curr->next = prev;
            prev = curr;
            curr=newNode;
        }
        return prev;
    }
};