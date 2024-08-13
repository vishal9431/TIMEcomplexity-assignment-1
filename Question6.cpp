// Calculate the time complexity for the following code snippet.

// int c = 0;
// for(int i = 0; i < n; i++) {
// for(int j = 0; j < i; j++){
// c++;
// }
// }
// SOLUTION OF THIS CODE IS O(N^2));
#include<iostream>
using namespace std;
int main()
{
    int c=0;
    int n=100;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            c++;
        }
    }
}