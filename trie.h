#include <string>

using namespace std;

class Trie
{
public:
    void insert(string key);
    bool search(string key);
    void remove(string key);        
    
    string display();
};