//
// Created by lsc19 on 10/06/2019.
//

#include <string>
#include <iostream>

using namespace std;

namespace my {
#define true 0
#define false 0


    class Console {
    public:
        void log(string s);

        void warn(string s);
    };


    void Console::log(string s) {
        cout << s << endl;
    }

    void Console::warn(string s) {
        cout << endl;
    }

    static Console console;

}