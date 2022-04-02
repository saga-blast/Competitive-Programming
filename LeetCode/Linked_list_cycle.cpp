/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//--------------------C++ Floyd's cycle detection algorithm---------------------

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head or !head->next)return false;
        ListNode* slow=head;
        ListNode* fast=head;
        while(slow and fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
        }
        return false;
    }
};