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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        ListNode* temp=head;
        if(head==NULL)return NULL;
        if(head->next==NULL && n==1)return NULL;
        if(head->next==NULL && n!=1)return NULL;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        temp=head;int idx=0;
        
        if(count==n){// it checks first node
                head=head->next;
                return head;
            }
        while(temp){
            //stand before delete node
            if(idx==count-n-1){
                //If last node (check next first and then next->next to avoid segmentaion)
                if(temp->next==NULL || temp->next->next==NULL){ temp->next=NULL;
                return head;
                }
                temp->next=temp->next->next;
                return head;
            }
            idx++;
            temp=temp->next;
        }
        return head;
    }
};