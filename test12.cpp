//输入年份月份 打印日历
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
// 函数printMonth：按要求的格式打印某年某月的日历
// 参数：year-年，month-月
// 返回值：无
void printMonth(int year, int month);

// leapYear：判断闰年
// 参数：y-年
// 返回值：1-是闰年，0-不是闰年
int leapYear(int y)
{
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    return 0;
}

// 函数whatDay:计算某年某月的1号是星期几
// 参数：year-年，month-月
// 返回值：1到7--星期1到星期日
int whatDay(int year, int month)
{
    // 1年月日是星期一
    int w = 1;
    int i;

    // 1到year-1都是全年
    for(i = 1; i < year; i++)
    {
        if(leapYear(i))
            w += 366;
        else
            w += 365;
    }
    switch(month)
    {
    case 12:
        w += 30;
    case 11:
        w += 31;
    case 10:
        w += 30;
    case 9:
        w += 31;
    case 8:
        w += 31;
    case 7:
        w += 30;
    case 6:
        w += 31;
    case 5:
        w += 30;
    case 4:
        w += 31;
    case 3:
        if(leapYear(year))
            w += 29;
        else
            w += 28;
    case 2:
        w += 31;
    case 1:     // 1月不加了
        ;
    }
    w = w % 7;     // 得到-6，其中为星期天
    // 调整星期天
    if(w == 0)
        w = 7;
    return w;
}

//实现函数printMonth
void printMonth(int year, int month)
{
 cout << setw(2) << " " << "一"
         << setw(2) << " " << "二"
         << setw(2) << " " << "三"
         << setw(2) << " " << "四"
         << setw(2) << " " << "五"
         << setw(2) << " " << "六"
         << setw(2) << " " << "日" << endl;

int weekday = whatDay( year, month);
//计算有多少天
int days = 31;
if (month == 4 || month == 6 || month == 9 || month == 11)
{
    days = 30;
}
else if (month == 2)
{
    if (leapYear(year)) 
    {
        days = 29; 
    } 
    else
    {
        days = 28;
    }
}
//打印占位
for(int i = 1;i < weekday;i++)
{
    cout << setw(4) <<" ";
}
//
 for(int d = 1; d <= days; d++)
  {
        cout << setw(4) << d;
        if(weekday == 7 || d == days)
        {
            cout <<endl;
            weekday = 1;
        }
        else
        {
            weekday++;
        }
  }
}









/*************** End **************/

int main()
{
    int y, m;     // 年、月
    cin >> y >> m;     // 输入年月
    printMonth(y,m);     // 输出该年月的日历
    return 0;
}