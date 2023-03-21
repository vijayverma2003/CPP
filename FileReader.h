//
// Created by Vijay on 21/03/23.
//

#ifndef C___FILEREADER_H
#define C___FILEREADER_H

#include <iostream>

using namespace std;

class FileReader {
public:
    FileReader(const string& fileName) {
        cout << "Constructor of FileReader" << endl;
    };

    string fileName() {
        return "fileName";
    }

    string read() {
        return "Hello World";
    };
};


#endif //C___FILEREADER_H
