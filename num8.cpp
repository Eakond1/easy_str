#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
string itc_reverse_str(string str) {
    string b;
    int a= itc_len(str);
    for (int i = a - 1; i >= 0; i--) {
        b += str[i];
    }
    return b;
}