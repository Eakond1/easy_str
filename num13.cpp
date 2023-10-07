#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
string itc_three_str(string str1,string str2, string str3) {
    string result = "";
    int a = 0;
    int b = 0;
    int c = 0;
    while (str1[a] != '\0') {
        a++;
    }
    while (str2[b]!='\0') {
        b++;
    }
    while (str3[c] != '\0') {
        c++;
    }
    int i = 0;
    while (str1[i]!='\0') {
        bool d = true;
        for (int j = 0; j < b; j++) {
            if (str1[i+j] != str2[j]) {
                d = false;
            }
        }
        if (d==true) {
            for (int j=0; j < c; j++) {
                result += str3[j];
            }
            i += b;
        }
        else {
            result += str1[i];
            i++;
        }
    }
    return result;
}
