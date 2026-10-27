//从键盘输入5个人的身高（米），求他们的平均身高（米）。
#include <iostream>
using namespace std;

int main() 
{
    float a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    //cout <<"求平均身高为：" << (a+b+c+d+e) / 5 <<endl;
    printf("求平均身高：%.2f\n",(a+b+c+d+e) / 5);
    return 0;
}