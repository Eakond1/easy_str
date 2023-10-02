#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
double itc_percent_lower_uppercase(string str) {
    double b = 0;
    double c = 0;
        for (int i = 0; i < itc_len(str); i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                b += 1;
            }
            else {
                c += 1;
            }
        }
        return b/c;
}