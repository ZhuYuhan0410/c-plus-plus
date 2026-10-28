//写一个输入摄氏温度 转成华氏温度（保留两位小数） 
//再将华氏温度整数部分取出（截断小数）拆分他的个位十位百位。用c++写在test9.cpp
#include <iostream>
using namespace std;
int main()
{
    double tem;
    cout <<"请输入想要查询的摄氏温度：";
    while(cin >> tem)
    {
    float F = tem * 9.0/ 5.0 + 32.0;
    cout << tem <<"转化为华氏温度为："<< F<< endl;
    int F2 = (int)F;
    int a = F2 % 10;
    int b = F2 / 10 % 10;
    int c = F2 / 100 % 10;
    cout << "百位: "<< c << endl <<"十位: "<< b << endl <<"个位: "<< a << endl;
    cout <<"请输入想要查询的摄氏温度：";
    }

    return 0;
}