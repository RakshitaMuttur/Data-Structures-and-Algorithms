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
    int pairSum(ListNode* head) 
    {
        ListNode *temp = head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        temp=head;
        int h=count/2;
        stack <int> s;
        while(h>0)
        {
            s.push(temp->val);
            h--;
            temp=temp->next;
        }
        h=count/2;
        int i=0;
        int max=0;
        while(i<h)
        {
            if(temp->val+s.top()>max)
                max=temp->val+s.top();
            s.pop();
            i++;
            temp=temp->next;
        }
        return max;
    }
};