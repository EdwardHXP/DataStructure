#include<iostream>

using namespace std;

struct ListNode{
    int val;
    struct ListNode* next;
};

class Solution
{
    public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        //please write code here
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;

        ListNode* head = (l1->val <= l2->val)?l1:l2;
        ListNode* pH = head;
        l1 = (head == l1)?l1->next:l2;
        l2 = (head == l2)?l2->next:l1;

        while(l1 != nullptr && l2!= nullptr)
        {
            if (l1->val <= l2->val)
            {
                pH->next = l1;
                l1 = l1->next;
            }
            else
            {
                pH->next = l2;
                l2 = l2->next;
            }
            pH = pH->next;
        }

        pH->next = (l1 == nullptr)?l2:l1;
        return head;
    }
};

int main()
{
    cout << "This code is right" <<endl;
    return 0;
}