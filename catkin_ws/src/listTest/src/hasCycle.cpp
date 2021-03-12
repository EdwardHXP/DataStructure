#include <ros/ros.h>
#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x):val(x), next(NULL){}
    
};

class Solution2
{
    public:
    bool hasCycle(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return false;
        ListNode* fast = head;
        ListNode* slow = head;
        
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                return true;
        }
        return false;
    }
};

int main()
{
    Solution2 sol;
    cout << "This code is OK" <<endl;
    return 0;
}