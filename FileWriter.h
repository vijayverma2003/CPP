//
// Created by Vijay on 21/03/23.
//

#ifndef C___FILEWRITER_H
#define C___FILEWRITER_H

#include <iostream>

using namespace std;

class FileWriter {
public:
    FileWriter(const string& fileName) {
        cout << "Constructor of FileWriter" << endl;
    };

    string fileName() {
        return "fileName";
    }

    void write(const string& content) {
        cout << content;
    }
};


#endif //C___FILEWRITER_H
