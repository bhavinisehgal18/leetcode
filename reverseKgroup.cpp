class Solution {
public:
    ListNode* reverse(ListNode* head){           
     ListNode *temp = NULL;
     ListNode *prev = NULL;
     ListNode *val = head;
     while(val != NULL) {
        temp = val->next;
        val->next = prev;
        prev = val;
        val = temp;
    }
    head = prev;

   return head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=NULL;
        ListNode* dummynode= new ListNode(-1);
        ListNode* prev=dummynode;
        prev->next=NULL;
                
        while(head){
            int i=1;
            ListNode* kstart = head; 
            while(head->next && i<k)
            {
                head=head->next;
                i++;
            }
            temp=head->next;
            head->next=NULL;
        if(i==k)
        {
            prev->next=reverse(kstart);
            kstart->next=temp;
            prev=kstart;
        }
            head = temp;
        }
      head= dummynode->next;  
        delete dummynode;
        return head;
     }
};
