#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
void itc_first_end_three(string str) {
    int length = itc_len(str);
    if (length > 5) {
        for(int i=0;i<3;i++ ){
            cout<<str[i];
        }
        for(int i = length-3; i<length; i++ ){
            cout<<str[i];
        }
    }
    else {
        for (int i = 0; i < length; i++) {
            cout << str[0];
        }
    }
}