class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int len=0;
        ListNode*cur=head;
        while(cur){
            len++;
            cur=cur->next;
        }
        ListNode*t1=head;
        for(int i=1;i<k;i++)t1=t1->next;
        ListNode*t2=head;
        for(int i=1;i<=len-k;i++)t2=t2->next;
        int a=t1->val;
        t1->val=t2->val;
        t2->val=a;
        return head;
    }
};