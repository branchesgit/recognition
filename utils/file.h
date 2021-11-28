#ifndef FILE_H
#define FILE_H
#include <string>
#include <json.h>
/**
 * @brief The File class
 * file helper
 * 1.reader file to json
 */

class File
{
public:
    File();
    std::string readFile(std::string& filePath);
    Json::Value parse(std::string& str);

};

#endif // FILE_H
