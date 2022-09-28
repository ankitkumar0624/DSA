class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int len=0;
        ListNode*cur=head;
        while(cur){
            len++;
            cur=cur->next;
        }
        if(len==1) return NULL;
        int move=len/2;
        cur=head;
        for(int i=1;i<move;i++){
            cur=cur->next;
        }
        cur->next=cur->next->next;
        return head;
    }
};