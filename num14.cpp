#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
int itc_max_char_on_end(string str) {
    int max = 0;
    int c = 0;
    for (int i = itc_len(str) - 1; i >= 0; i--) {
        if (str[i] >= '0' && str[i]<= '9') {
            c++;
            if (c > max) {
                max = c;
            }
        }
        else {
            c = 0;
        }
    }
    return max;
}
