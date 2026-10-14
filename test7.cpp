#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "请输入两个整数：" << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << "较大的整数为" << a << endl;

    }
    else
    {
        cout << "较大的整数为" << b << endl;
    }
    return 0;
}