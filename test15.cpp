#include <iostream>
#include <iomanip> // 必须有，为了 setprecision
using namespace std;

int main() {
    double F;
    cout << "请输入想要查询的华氏温度：";
    while (cin >> F) {
        // 1. 算摄氏温度：注意 5.0/9.0
        double C = 5.0 / 9.0 * (F - 32.0);
        
        // 输出保留两位小数
        cout << F << "转化为摄氏温度为：" << fixed << setprecision(2) << C << endl;
        
        // 2. 提取整数部分（注意：负数强转是向零取整）
        int F2 = (int)F; 
        
        // 3. 拆分位数
        int a = F2 % 10;
        int b = F2 / 10 % 10;
        int c = F2 / 100 % 10;
        
        cout << "百位：" << c << endl;
        cout << "十位：" << b << endl;
        cout << "个位：" << a << endl;
        
        cout << "请输入想要查询的华氏温度：";
    }
    return 0;
}