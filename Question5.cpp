// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 0; i < n; i++) {
// c +=i;
// }
// SOLUTION OF THIS CODE TC = O(N);
#include <iostream>
using namespace std;
int main()
{
    int c=0;
    int n=100;
    for(int i=0;i<n;i++)
    {
        c+=i;
    }
}