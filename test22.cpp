// 计算并输出N以内最大的10个素数以及它们的和，N为用户任意输入的正整数（如：1000）。 
// 要求： 
// ①在程序内部加必要的注释。
// ②由于偶数不是素数，可以不考虑对偶数的处理。 
// ③需要考虑N以内的素数个数没有超过10个的情况处理。
// ④输出形式为：素数1+素数2+素数+…+素数10=总和值。
#include <iostream>
using namespace std;
int main()
{
    //输入一个正整数N
    int N;
    cout << "请输入一个正整数N：" << endl;
    cin >> N;
    //查找素数
    int count = 0;//计数
    int sum = 0;//总和
    int prime[10];//存储素数
    for(int i = N;i >= 2; i--)
    {
        if(i % 2 == 0 && i != 2)
        {
            continue;
        }
        else
        {
            //判断是不是素数
            bool isPrime = true;
            for(int j = 3; j*j <= i;j += 2)
            {
                if(i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            
            }
            if(isPrime == true)
            {
                prime[count] = i;
                sum += i;
                count++;
                if(count == 10)
                {
                    break;
                }
            }
        }
        
    }
    //打印素数
    for(int i = 0; i <= count - 2; i++)
    {
        cout << prime[i] << "+";
    }
    cout << prime[count - 1] << "=" << sum << endl;
    return 0;
}