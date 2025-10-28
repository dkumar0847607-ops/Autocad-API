class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
    int n=0;
    ListNode* temp= head;
    while(temp!=NULL){
        n++;
        temp= temp->next;
    }
    if(n==2){
        head->next=NULL;
        return head;
    }
    if(n==1) return NULL;
    temp=head;
    for(int i=1; i<n/2; i++) temp= temp->next;
    temp->next= temp->next->next;
    return head;
    }
};
