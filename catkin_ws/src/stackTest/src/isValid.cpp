#include <stack>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * 
     * @param s string字符串 
     * @return bool布尔型
     */
    bool isValid(string s) {
        //if (s.size()%2 != 0) return false;
        //use the method of stack is best
        stack<char> st;
        //st.push(s[0]);
        for (int i = 0; i<s.size();i++)
        {
            if (st.empty()) 
            {
                st.push(s[i]);
                continue;
            }
            if (s[i] == ')' && st.top() == '(')
            {
                    st.pop();
            }
            else if (s[i] == ']' && st.top() == '[')
            {
                    st.pop();
            }
            else if (s[i] == '}' && st.top() == '{')
            {
                    st.pop();
            }
            else{
                //return false;
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};

int main()
{
    cout << "please input your string" <<endl;
    string ss;
    cin >> ss;

    Solution solTest;
    cout << "The return result is:"<<endl;
    cout << solTest.isValid(ss)<< endl;
    
    return 0;
}