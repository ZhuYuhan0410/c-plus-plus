#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //创建变量
    float sum = 0;
    int n;
    int i =1;
    float temp = 1.0 / (i * i);
    float pai;
    cin >> n;
    //求sum
    while(temp > 1e-4)
    {
        sum += temp;
        i++;
        temp = 1.0 / (i * i);
    }
    n = i - 1;
    pai = sqrt(6 * sum);
    cout << "π=" << pai << "; n=" << n<< endl;
    return 0;
}