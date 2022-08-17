class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*head=NULL,*prev=NULL;
        int carry=0;
        while(l1 || l2){
          int sum=0;
            sum+=l1?l1->val:0;
            sum+=l2?l2->val:0;
            sum+=carry;
            int rem=sum%10;
            carry=sum/10;
            ListNode*cur=new ListNode(rem);
            if(!head)head=cur;
            if(prev)prev->next=cur;
            prev=cur;
            l1=l1?l1->next:NULL;
            l2=l2?l2->next:NULL;
        } 
        if(carry>0){
            ListNode*cur=new ListNode(carry);
            prev->next=cur;
        }
        return head;
    }
};