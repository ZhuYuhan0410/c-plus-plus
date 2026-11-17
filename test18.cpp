#include<iostream>
using namespace std;
int main()
{
    //将变量定义为整型
    cout << "请输入一个整数：";
    int num;
    cin >> num;
    //判断奇偶性、正负性
    if(num % 2 == 0)
    {
        cout << num << "是偶数" << endl;
    }
    else
    {
        cout << num << "是奇数" << endl;
    }
    if(num > 0)
    {
        cout << num << "是正数" << endl;
    }
    else if(num < 0)
    {
        cout << num << "是负数" << endl;
    }
    else
    {
        cout << num << "是零" << endl;
    }
    //判断数值大小
    if(num < 10)
    {
        cout << num << "< 10" <<endl;
    }
    else if(num >= 10 && num < 100)
    {
        cout << num << "is 10 to 100" << endl;
    }
    else if(num >= 100 && num < 1000)
    {
        cout << num << "is 100 to 1000" << endl;
    }
    else
    {
        cout << num << ">= 1000" << endl;
    }
    
    return 0;
}