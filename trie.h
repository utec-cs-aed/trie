#include <iostream>
#include <map>
#include <list>
using namespace std;

class Trie{
private:
    struct TrieNode{        
        // opcion1: list<pair<char, TrieNode*>> children;
        // opcion2: map<char, TrieNode*> children;        
        bool endWord;

        TrieNode(){                        
            endWord = false;            
        }
        ~TrieNode(){            
        }
    };
    TrieNode* root;
    
public:
    Trie(): root(nullptr) {}

    void insert(string key);
    bool search(string key);
    void remove(string key);

    //imprimir ordenado linea por linea 
    void display();
};