// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 1; i < n; i *= 2) {
// c++;
// }
// SOLUTION OF THIS CODE- TC = O(LOG BASE 2 (N)));~~ O(LOG (N))
#include <iostream>
using namespace std;
int main()
{
    int c=0;
    int n=100;
    for(int i=1;i<n;i*=2)
    {
        c++;
    }

}