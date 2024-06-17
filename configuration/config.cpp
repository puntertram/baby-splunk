#include <cstdio>
#include <string>

class configuration {
private:
    FILE *file;
    static std::string NOT_FOUND;
public:
    std::string get_field(std::string field_name) {
        // return the field value if it exists, otherwise return configuration::NOT_FOUND
        return configuration::NOT_FOUND;
    }
};

std::string configuration::NOT_FOUND = "NOT_FOUND";