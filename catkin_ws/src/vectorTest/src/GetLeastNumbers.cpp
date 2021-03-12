#include <ros/ros.h>
#include <vector>

using namespace std;

class Solution
{
    public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> vec;
        int vec_size = input.size();
        if (vec_size == 0 || k>vec_size) 
            return vec;
        sort(input.begin(), input.end());
        for (int i=0; i<k; i++)
        {
            vec.push_back(input[i]);
        }
        return vec;
    }
};

int main()
{
    vector<int> vectest;
    cout << "please input a vector" <<endl;
    for (int num=0; cin>>num;)
    {
        vectest.push_back(num);
        if (cin.get() == '\n')
        break;
    }
    int k=0;
    cout<< "please input K"<<endl;
    cin >> k;
    Solution SolTest;
    vector<int> returnvec;
    returnvec = SolTest.GetLeastNumbers_Solution(vectest, k);

    cout<< "The final vector is: "<<endl;
    for (int i = 0; i<returnvec.size(); i++)
    {
        cout <<" "<<returnvec[i];
    }
    cout <<endl;
    cout << "this code is right" <<endl;
    return 0;
}