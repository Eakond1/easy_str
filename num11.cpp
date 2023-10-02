#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
string itc_cmp_str(string str1, string str2, int num) {
    int a = itc_len(str1);
    int b = itc_len(str2);
    int c = a+b;
    if (num < 0) {
        num = 0;
    }
    if (num >= a) {
        return str1;
    }
    string result(c, ' ');
    for (int i = 0; i < num; i++) {
        result[i] = str1[i];
    }
    for (int i = 0; i <b; i++) {
        result[num + i] = str2[i];
    }
    for (int i = num; i < a; i++) {
        result[b + i] = str1[i];
    }
    return result;
}
