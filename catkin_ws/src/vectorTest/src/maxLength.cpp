#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * 
     * @param arr int整型vector the array
     * @return int整型
     */
    int maxLength(vector<int>& arr) {
        // write code here
        if (arr.size() == 1 || arr.size() == 0) return arr.size();
        sort(arr.begin(), arr.end());
        
        vector<int>::iterator front = arr.begin();
        front++;
        vector<int>::iterator behind = arr.begin();
        
        int num = 1;
        while(front != arr.end()){
            if (*front == *behind){
                front++;
            }
            else{
                front++;
                behind++;
                num++;
            }
        }
        return num;
    }
};

int main()
{
    cout << "This code is OK" <<endl;
    return 0;
}
