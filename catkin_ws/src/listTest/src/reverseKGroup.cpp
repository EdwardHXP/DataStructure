#include <ros/ros.h>
#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x):val(x), next(NULL){}
    
};
class Solution1 {
public:
    /**
     *
     * @param head ListNode类
     * @param k int整型
     * @return ListNode类
     */
    ListNode* reverseKGroup(ListNode* head, int k) {
        // write code here
        ListNode *p=head;
        ListNode *new_head=head;
        int kk=k;
        ListNode *ne=NULL;
        ListNode *tail=NULL;
        while(p)
        {
            if(kk==1)
            {
                ne=p->next;
                p->next=NULL;
                ListNode *temp=reverse(head);;
                if(new_head==head)
                    new_head=temp;
                if(tail)
                    tail->next=p;
                tail=head;
                 
                head=ne;
                p=ne;
                kk=k;
                continue;
            }
            kk--;
            p=p->next;
        }
        if(tail)
        tail->next=head;
        return new_head;
    }
    ListNode *reverse(ListNode *start)
    {
        ListNode * p=nullptr;
        while(start)
        {
            ListNode *temp=start->next;
            start->next=p;
            p=start;
            start=temp;
        }
        return p;
    }
};

int main()
{
    Solution1 sol;
    cout<<"The code is OK"<<endl;
    return 0;
}