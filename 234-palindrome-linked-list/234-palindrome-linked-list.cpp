class Solution {
public:
    bool isPalindrome(ListNode* head) {
        return pal(head)==true?true:false;
    }
    bool pal(ListNode*head){
        if(head==NULL) return false;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*cur=slow->next;
        ListNode*rev=reverse(cur);
        while(rev!=NULL){
            if(rev->val!=head->val) return false;
            rev=rev->next;
            head=head->next;
        }
        return true;
    }
    ListNode*reverse(ListNode*cur){
        ListNode*a=cur;
        ListNode*b=NULL;
        while(a!=NULL){
            ListNode*c=a->next;
            a->next=b;
            b=a;
            a=c;
        }
        return b;
    }
};