#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    //创建变量
    
    double a,b,c;
    cin >> a >> b >> c;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    //验证三边能否构成三角形
    if(a + b > c && a + c > b && b + c > a)
    {
        cout << "可以构成三角形" << endl;
        //计算半周长
        double p = (a + b + c) / 2;
        cout << "半周长p=" << p << endl;
        // 计算面积
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "面积=" << area << endl;
    }
    return 0;
}