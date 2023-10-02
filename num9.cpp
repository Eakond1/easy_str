#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
string itc_slice_str(string str, int start, int end) {
    int a=itc_len(str);
    string b="";
    if (start >= end || start >= a) {
        b = str;
    }
    if (end >= a) {
        end = a - 1;
    }
    for(int i=start; i<=end;i++ ) {
        b=b+ str[i];
    }
    return b;
}