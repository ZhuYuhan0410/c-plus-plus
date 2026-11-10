//十进制转二进制、八进制、十六进制
#include <iostream>
using namespace std;
void convert(int n,int m)
{
    if(n == 0)
    {
        return;
    }
    convert(n / m , m);
    int j = n % m;
    if (j >= 10)
    {
        cout << char('A' + j - 10);
    }
    else
    {
        cout << j;
    }
}
int main () 
{
    int n, m;
    cin >> n >> m;
    if(m == 2)
    {
        cout << "二进制 ";
        convert(n,m);
    }
    else if(m == 8)
    {
        cout << "八进制 ";
        convert(n,m);
    }
    else
    {
        cout << "十六进制 ";
        convert(n,m);
    }
    return 0;
}