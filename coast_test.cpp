//
// Created by coast on 19-3-23.
//

#include "crfpp.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string flag = "-m";
    string model_file = "prosody.model";
    char* argv[2];
    argv[0] = (char*)flag.c_str();
    argv[1] = (char*)model_file.c_str();
    crfpp_test(2, argv);
}