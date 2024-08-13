// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = n; i > 1; i /= i) {
// c++;
// }
// SOLUTION OF THIS CODE - TC = O(1);
#include<iostream>
using namespace std;
int main()
{
    int c =0;
    int n=100;
    for(int i=n;i>1;i/=i)
    {
        c++;
    }
}