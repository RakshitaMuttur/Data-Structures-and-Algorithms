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
    void reorderList(ListNode* head) 
    {
        stack<ListNode *> st;
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int half=count/2;
        temp=head;
        int i=0;
        while(temp!=NULL && i<half)
        {
            temp=temp->next;
            i++;
        }
        ListNode* x = temp->next;
        temp->next=NULL;
        while(x!=NULL)
        {
            st.push(x);
            x=x->next;
        }
        temp=head;
        ListNode* y;
        while(temp!=NULL && !st.empty())
        {
            y=st.top();
            st.pop();
            y->next=temp->next;
            temp->next=y;
            temp=y->next;
        }
    }
};