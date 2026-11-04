//输入一个正整数，输出位反、位数、位和（各位数字之和）
#include <iostream>
using namespace std;

int main()
{
    int nums;           
    cin >> nums;

    int k = 0;    
    int i = 0;            
    int sum = 0;               
    //执行位反、位数、位和的计算
    while (nums > 0)
    {
        int d = nums % 10;            
        k = k * 10 + d; 
        i++;                    
        sum += d;                    
        nums /= 10;                  
    }

    cout << "位反：" << k << endl;
    cout << "位数：" << i << endl;
    cout << "位和：" << sum << endl;

    return 0;
}
