#include<iostream>
using namespace std;
int main()
{
    //创建变量
    char a;
    cin >> a;
    //判断字符类型
    if( a >= '0' && a <= '9')
    {
        cout << "输入的是数字" << endl;
    }
    else if( (a >= 'a' && a <= 'z')  )
    {
        cout << "输入的是小写字母" << endl;
    }
    else if( (a >= 'A' && a <= 'Z'))
    {
        cout << "输入的是大写字母" << endl;
    }
    else if(a == ' ')
    {
        cout << "输入的是空格" << endl;
    }
    else
    {
        cout << "输入的是其他字符" << endl;
    }
    return 0;
}