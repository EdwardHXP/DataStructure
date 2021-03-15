#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * 找缺失数字
     * @param a int整型一维数组 给定的数字串
     * @param aLen int a数组长度
     * @return int整型
     */
    int solve(int* a, int aLen) {
        // write code here
        int i = 0;
        int j = 1;

        while(j < aLen){
            if (a[i]+1 == a[j]){
                i++;
                j++;
            }
            else{
                return a[i]+1;
            }
        }
        return aLen;
    }
};


int main()
{
    cout << "This code is right" <<endl;
    return 0;
}