#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
void itc_print_copy_str(string str, int number) {
    string b = "";
    for (int i = 0; i < number; i++) {
        b += str;
    }
    cout << b;
}
