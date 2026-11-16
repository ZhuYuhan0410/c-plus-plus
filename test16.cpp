#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //创建变量
    double r;
    double h; 
    cin >> r;
    cin >> h;
    //定义pai
    const double pai = acos(-1.0);
    //计算圆的周长、圆面积、圆球表面积，圆球体积，圆柱体积
    double zhouchang = 2 * pai * r;
    double mianji = pai * r * r;
    double qiubiao = 4 * pai * r * r;
    double qiutiji = (4.0/3.0) * pai * r * r * r;
    double zhuzitiji = pai * r * r * h;
    //输出结果
    cout << "圆的周长=" << zhouchang << endl;
    cout << "圆的面积=" << mianji << endl;
    cout << "圆球的表面积=" << qiubiao << endl;
    cout << "圆球的体积=" << qiutiji << endl;   
    return 0;
} 