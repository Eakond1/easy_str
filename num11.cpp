#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
string itc_cmp_str(string str1, string str2, int num) {
    int len1 = itc_len(str1);
    int len2 = itc_len(str2);
    if (num > len1) {
        return str1;
    }
    int len = len1 + len2;
    if (len > len1) {
        len = len1;
    }
    string result(len, ' ');
    for (int i = 0; i < num; i++) {
        result[i] = str1[i];
    }
    for (int i = 0; i < len2; i++) {
        result[num + i] = str2[i];
    }
    for (int i = num; i < len1; i++) {
        result[len2 + i] = str1[i];
    }
    return result;
}
