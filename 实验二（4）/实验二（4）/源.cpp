#include<iostream>
using namespace std;
int main()
{
    float a, b; int  n;char name;
    cout << "��ʾ��ȡ����������������" << endl;
    cout << "������ֵa,b" << endl;
    cin >> a >> b;
    cout << "��������Ҫ�����㷨��" << endl;
    cin >> name; n = int(name);
    switch (n)
    {
    case 43:
        cout << "�ӷ�������Ϊ" << a + b << endl; break;
    case 45:
        cout << "����������Ϊ" << a - b << endl; break;
    case 42:
        cout << "�˷�������Ϊ" << a * b << endl; break;
    case 47:
        if (b == 0)
            cout << "����" << endl;
        else
            cout << "����������Ϊ" << a / b << endl; break;
    case 37:
        cout << "ȡ��������Ϊ" << int(a) % int(b) << endl; break;
        return 0;
    }
}


