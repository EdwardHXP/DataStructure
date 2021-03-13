#include <ros/ros.h>
#include <iostream>

using namespace std;

class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        for (int i = 0; i < n; i++)
        {
            A[m+i] = B[i];
        }
        
        sort(A, &A[m+n]);
    }
};

int main()
{
    cout << "This code is OK" << endl;

    return 0;
}