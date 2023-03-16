#pragma once
#include<iostream>

using namespace std;


bool isKPrefix(string str, int l, int i, int K)
{

    if (i + K > l)
        return false;
    for (int j = 0; j < K; j++)
    {

        if (str[i] != str[j])
            return false;
        i++;
    }
    return true;
}

bool isKPeriodic(string str, int l, int K)
{

    for (int i = K; i < l; i += K)
        if (!isKPrefix(str, l, i, K))
            return false;
    return true;
}
