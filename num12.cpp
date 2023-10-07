#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
int itc_find_str(string str1, string str2) {
    int a = itc_len(str1);
    int b = itc_len(str2);
    if (b > a) {
        return -1;
    }
    for (int i = 0; i <= a - b; i++) {
        bool d = true;
        for (int j = 0; j < b; j++) {
            if (str1[i + j] != str2[j]) {
                d = false;
            }
        }
        if (d == true) {
            return i;
        }
    }
    return -1;
}
