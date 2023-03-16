#include"Header.h"

int main()
{
    setlocale(LC_ALL, "");

    string str;
    int K;
    cout << "Введите строку" << endl << "str = ";
    cin >> str;
    cout << "Введите число для проверки кратности" << endl << "K = ";
    cin >> K;
    if ((K == 0) or (K < 0))
    {
        cout << "Введите число больше 0";
    }
    else
    {
        int l = str.length();
        if (isKPeriodic(str, l, K))
            cout << "Строка кратна числу " << K;
        else
            cout << "Строка не кратна числу " << K;
    }
}
