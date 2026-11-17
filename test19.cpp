#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "请输入考试成绩: ";
    cin >> score;

    // 1. 首先做数据合法性检查（题目要求的负数拦截）
    if (score < 0 || score > 100) {
        cout << "输入数据错" << endl;
        return 0; // 程序直接结束
    }

    // 2. 用 if-else 划分等级
    if (score >= 90) {
        cout << "成绩等级为: A" << endl;
    } 
    else if (score >= 80) {
        cout << "成绩等级为: B" << endl;
    } 
    else if (score >= 70) {
        cout << "成绩等级为: C" << endl;
    } 
    else if (score >= 60) {
        cout << "成绩等级为: D" << endl;
    } 
    else {
        cout << "成绩等级为: E" << endl;
    }

    return 0;
}