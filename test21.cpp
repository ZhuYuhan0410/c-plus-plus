// 从键盘输入一个0～1000之间的任意整数，输出该整数的所有因子（例如：输入12，其因子为1，2，3，4，6，12）。 
// 要求： 
// ①采用while循环语句实现。 
// ②输出格式为：Input：12
//                  Output：c1，2，3，4，6，12 
#include<iostream>
using namespace std;
int main()
{
    //输入一个整数
    int num;
    cout << "请输入一个0～1000之间的任意整数：" << endl;
    cin >> num ;
    cout << "Input：" << num << endl;
    //查找并输出所有因子
    int i = 1;
    cout << "Output：";
    while(i <= num)
    {
        if(num % i == 0)
        {
            cout << i <<",";
        }
        i++;
    }
    cout << endl;
    return 0;
}
