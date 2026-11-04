// test10.cpp
// 摄氏温度转华氏温度 + 整数拆分 + 数字转字符
// 本程序覆盖三个知识点：浮点除法、取模拆位、ASCII 码转字符

#include <iostream>   
#include <cstdio>     

using namespace std;  

int main()
{
    // 第 1 步：输入摄氏温度
    
    double celsius = 0.0;   
    cout << "请输入摄氏温度：";
    cin >> celsius;

    
    double fahrenheit = celsius * 9.0 / 5.0 + 32;
    printf("华氏温度为：%.2f\n", fahrenheit);
    // 取出华氏温度的整数部分（截断小数）
    int int_part = (int)fahrenheit;
    // 拆分百位、十位、个位（用 / 和 % 两个运算）
    int bai = int_part / 100 % 10;   // 百位
    int shi = int_part / 10 % 10;    // 十位
    int ge  = int_part % 10;         // 个位
    printf("个位：%d\n",ge);
    printf("十位：%d\n",shi);
    printf("百位：%d\n",bai);
    //把每一位数字转成字符（用 '0' + digit 的方式）
    char bai_char = char('0' + bai);
    char shi_char = char('0' + shi);
    char ge_char  = char('0' + ge);
    // 第 7 步：把三个字符拼成一段字符串
    char digits[4];
    digits[0] = bai_char;
    digits[1] = shi_char;
    digits[2] = ge_char;
    digits[3] = '\0';

    printf("整数部分拆分后的字符串为：%s\n", digits);

    return 0;
}
