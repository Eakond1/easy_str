#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
bool itc_equal_reverse(string str) {
    int a = itc_len(str);
    for (int i = 0; i < a/ 2; i++) {
        if (str[i] != str[a - 1 - i]) {
            return false;
        }
    }
    return true;
}