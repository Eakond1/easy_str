#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
int itc_count_char_in_str(char ch, string str) {
    int count = 0;
    for (int i = 0; i < itc_len(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}