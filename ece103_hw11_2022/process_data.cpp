// This module does not need to be modified by you
#include "process_data.h"

#include <cstdint>
#include <iostream>
using namespace std;

void print(const char names[][30], const char* version) {
    cout << "This homework program version is " << version << endl << endl;
    cout << "This homework participants are: " << endl;

    for (size_t i = 0; names[i][0] != 0; ++i)
        cout << names[i] << endl;
    cout << "And that's all for today" << endl;
}
