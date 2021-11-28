#include "file.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <ios>

File::File()
{

}

std::string File::readFile(std::string &filePath) {
    std::string line;
    std::ifstream myfile(filePath);
    std::string content;

    if (myfile.is_open()) {
        while(getline(myfile, line)) {
            content += line;
        }
        myfile.close();
    } else {
      std::cout << "unable to open file" << filePath;
    }

    return content;
}

Json::Value File::parse(std::string& str) {
    Json::Reader reader;
    Json::Value root;

    reader.parse(str, root);
    return root;
}
