#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
string itc_even_place(string str) {
    string result = "";
    for (int i = 1; i < itc_len(str); i += 2) {
        result += str[i];
    }
    if (result=="") {
        return "-1";
    }
    return result;
}