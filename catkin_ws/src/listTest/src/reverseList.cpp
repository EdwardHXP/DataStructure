#include <ros/ros.h>
#include <iostream>

using namespace std;
struct ListNode
{
    /* data */
    int val;
    struct ListNode *next;
    ListNode(int x):val(x), next(NULL){}
};


class Solution
{
    public:
    ListNode* ReverseList(ListNode* pHead)
    {
        if (pHead == NULL || pHead->next == NULL)
        return pHead;

        ListNode* cur = pHead;
        ListNode* newHead = NULL;
        //ListNode* curNext = pHead->next;

        while(cur != NULL)
        {
            ListNode* curNext = cur->next;
            cur->next = newHead;
            newHead = cur;
            cur = curNext;
        }
        return newHead;
    }
};

int main()
{
    //ListNode<int> testList {1, 2, 3};
    ListNode *testNode;
    int a;
    int b;
    cout <<"please input the data you want" << endl;
    cin >> a ;
    cin >> b;
    Solution test;
    test.ReverseList(testNode);
    return 0;
}