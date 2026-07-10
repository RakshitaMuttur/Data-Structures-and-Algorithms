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
    ListNode* oddEvenList(ListNode* head) 
    {
        queue<ListNode*> q;
        if(head==NULL) return head;
        ListNode* temp=head;
        int i =1;
        while(temp!=NULL)
        {
            if(i%2==0)
            {
                q.push(temp);
            }
            i++;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL && temp->next!=NULL && temp->next->next!=NULL)
        {
            temp->next=temp->next->next;
            temp=temp->next;
        }
        while(!q.empty())
        {
            ListNode* x=q.front();
            temp->next=x;
            temp=x;
            q.pop();
        }
        temp->next=NULL;
        return head;
    }
};