// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = n; i > 0; i /= 2) {
// c++;
// }
// solution = in this code the time complexity of code is o(log base 2 n).
#include<iostream>
using namespace std;
int main()
{
    int c=0;
    int n=10;
    for(int i=n;i>0;i/=2)
    {
        c++;
    }
}