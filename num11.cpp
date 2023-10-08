#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
string itc_cmp_str(string str1, string str2, int num) {
    long long a = itc_len(str1);
    long long b = itc_len(str2);
    if (num > a) {
        return str1;
    }
    long long sum = a + b;
    if (sum > a) {
        sum = a;
    }
    string result(sum, ' ');
    for (int i = 0; i < num; i++) {
        result[i] = str1[i];
    }
    for (int i = 0; i < b; i++) {
        result[num + i] = str2[i];
    }
    for (int i = num; i < a; i++) {
        result[b+ i] = str1[i];
    }
    return result;
}
