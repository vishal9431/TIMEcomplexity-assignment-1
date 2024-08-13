// Calculate the time complexity for the following code snippet where k is some constant (k<<n).
// int c = 0;
// for(int i = 0; i < n; i += k) {
// c++;
// }
//SOLUTION OF THIS CODE IS O(N+K)~ =O(N);
#include<iostream>
using namespace std;
int main()
{
    int n= 100;
    int c=0;
    int k=2;
    for(int i=0;i<n;i+=k)
    {
        c++;
    }
}