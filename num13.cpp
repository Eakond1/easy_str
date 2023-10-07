#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
string itc_three_str(string str1,string str2, string str3) {
    string result = "";
    int len1 = 0;
    int len2 = 0;
    int len3 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }
    while (str3[len3] != '\0') {
        len3++;
    }
    int i = 0;
    while (str1[i] != '\0') {
        bool a = true;
        for (int j = 0; j < len2; j++) {
            if (str1[i+j] != str2[j]) {
                a = false;
            }
        }
        if (a==true) {
            for (int j = 0; j < len3; j++) {
                result += str3[j];
            }
            i += len2;
        }
        else {
            result += str1[i];
            i++;
        }
    }
    return result;
}
