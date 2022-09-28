class Solution {
public:
    ListNode* swapPairs(ListNode* head){
        int len=0;
        ListNode*cur=head;
        while(cur){
            len++;
            cur=cur->next;
        }
        if(len<2)return head;
        ListNode*newhead=new ListNode(-1);
        ListNode*prev=newhead;
        cur=head;
        while(cur){
            if(!cur->next){
                prev->next=cur;
                prev=prev->next;
                prev->next=NULL;
                cur=cur->next;
            }else{
                ListNode*tmp=cur->next->next;
                prev->next=cur->next; prev=prev->next;
                prev->next=cur;prev=prev->next;
                prev->next=NULL;
                cur=tmp;
            }
        }
        return newhead->next;
    }
};