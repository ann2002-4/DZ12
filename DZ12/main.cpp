#include"Header.h"

int main()
{
    setlocale(LC_ALL, "");

    string str;
    int K;
    cout << "������� ������" << endl << "str = ";
    cin >> str;
    cout << "������� ����� ��� �������� ���������" << endl << "K = ";
    cin >> K;
    if (K == 0)
    {
        cout << "������� ����� ������ 0";
    }
    else
    {
        int l = str.length();
        if (isKPeriodic(str, l, K))
            cout << "������ ������ ����� " << K;
        else
            cout << "������ �� ������ ����� " << K;
    }
}