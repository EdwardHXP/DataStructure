#include <ros/ros.h>
#include <vector>

using namespace std;

class Solution
{
    public:
    int maxProfit(vector<int>& prices)
    {
        int max = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            for (int j = i+1; j < prices.size(); j++)
            {
                if (prices[j]-prices[i] > max)
                {
                    max = prices[j]-prices[i];
                }
            }
        }

        return max;
    }
};

int main()
{
    cout << "please input the prices of these recent days" << endl;
    vector<int> vecTest;
    for (int i  = 0; cin >> i;)
    {
        vecTest.push_back(i);
        if (cin.get() == '\n')
        break;
    }

    for (int i = 0; i < vecTest.size(); i++)
    {
        cout << " " << vecTest[i];
    }
    cout << endl;
    Solution solTest;
    cout <<"The max Profit is: " <<  solTest.maxProfit(vecTest) << endl;
    return 0;
}