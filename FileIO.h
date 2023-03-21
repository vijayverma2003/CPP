//
// Created by Vijay on 21/03/23.
//

#ifndef C___FILEIO_H
#define C___FILEIO_H

#include "FileReader.h"
#include "FileWriter.h"

class FileIO: public FileReader, public FileWriter {
public:
    FileIO(string fileName): FileReader(fileName), FileWriter(fileName) {}
};


#endif //C___FILEIO_H
