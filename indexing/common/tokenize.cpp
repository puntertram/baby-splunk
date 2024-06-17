#include <string>
#include <vector>
#include <bitset>
#include <map>

// This class 
class token_stream {
private:
    std::vector<std::string*> stream;
public:
    std::vector<std::string*>* get_stream() {
        return &(this->stream);
    }
    void add_token(std::string* token) {
        stream.push_back(token);
    }
};

class alphabet {
private:
    int size; // The size of the alphabet set
public:
    alphabet(int size) {
        this->size = size;
    }
    int get_size() {
        return size;
    }
};

class text_class {
private:
    
    alphabet *alphabet_set;
    std::map<char, bool> *delimiter_list;
public:
    text_class() {
        alphabet_set = new alphabet(1<<8);
    }
};

std::vector<token_stream> tokenize(std::string text) {
    for(char ch : text) {
        if()
    }
} 