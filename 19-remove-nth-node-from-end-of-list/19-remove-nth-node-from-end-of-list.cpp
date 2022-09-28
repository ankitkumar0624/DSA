class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode*cur=head;
        while(cur){
            len++;
            cur=cur->next;
        }
        // cout<<len<<"\n";
        if(len==n) return head->next;
        cur=head;
        for(int i=1;i<len-n;i++){
            cur=cur->next;
        }
        cur->next=cur->next->next;
        return head;
    }
};