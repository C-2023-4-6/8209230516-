#include<iostream>
using namespace std;
int main()
{
    float a, b; int  n;char name;
    cout << "提示：取余运算请输入整数" << endl;
    cout << "请输入值a,b" << endl;
    cin >> a >> b;
    cout << "请输入你要的运算法则" << endl;
    cin >> name; n = int(name);
    switch (n)
    {
    case 43:
        cout << "加法运算结果为" << a + b << endl; break;
    case 45:
        cout << "减法运算结果为" << a - b << endl; break;
    case 42:
        cout << "乘法运算结果为" << a * b << endl; break;
    case 47:
        if (b == 0)
            cout << "错误" << endl;
        else
            cout << "除法运算结果为" << a / b << endl; break;
    case 37:
        cout << "取余运算结果为" << int(a) % int(b) << endl; break;
        return 0;
    }
}


