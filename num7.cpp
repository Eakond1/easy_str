#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
double itc_percent_lower_uppercase(string str) {
    double a = 0;
    double b = 0;
    for (int i = 0; i < itc_len(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            a += 1;
        } else {
            b += 1;
        }
    }
    return b / a;
}