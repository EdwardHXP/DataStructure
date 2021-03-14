#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
    public:
    int findKth(vector<int> a, int n, int K){
        sort(a.begin(), a.end());
        vector<int>::iterator it = a.begin();

        while(it != a.end()){
            int temp = *it;
            it++;
            if(*it == temp){
                a.erase(it);
            }
        }

        return a[a.size()-K];
    }
};

int main()
{
    cout << "This code is OK" <<endl;
    return 0;
}