#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
string itc_slice_str(string str, int start, int end) {
        string result = "";
        if (start >= end || start >= itc_len(str)) {
            result = str;
        }
        else {
            if (end >= itc_len(str)) {
                end = itc_len(str) - 1;
            }
            for (int i = start; i <= end; i++) {
                result = result + str[i];
            }
        }
        return result;
    }
