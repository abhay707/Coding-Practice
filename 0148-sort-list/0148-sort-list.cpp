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
    
    ListNode* midPoint(ListNode* head){
        if(!head && !head->next) return head;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = nullptr;

        while(fast && fast->next){
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }
        if (prev) prev->next = nullptr;
        return slow;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        if(list1->val < list2->val){
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }else{
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }

    ListNode* sortList(ListNode* head) {
        if(head == NULL) return head;
        if(head->next == NULL) return head;
        ListNode* mid = midPoint(head);
        ListNode* head1 = head;
        ListNode* head2 = mid;
        
        head1 = sortList(head1);
        head2 = sortList(head2);
        return mergeTwoLists(head1, head2);
    }
};