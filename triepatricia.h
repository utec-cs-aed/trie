#include <iostream>
#include <list>
#include <map>
#include "trie.h"
using namespace std;

const unsigned ALPHA_SIZE = 26;//tamanio del alfabeto de letras minusculas

class TriePatricia : public Trie{
private:
    struct TrieNode{     
        // opcion 1:   list<pair<char, TrieNode*>> children;        
        // opcion 2:   map<pair<char, TrieNode*>> children;       
        TrieNode **children;           
        string preffix;
        bool endWord; //indica si es final de una palabra

        TrieNode();
        ~TrieNode();
    };
    TrieNode* root;
    
public:
    TriePatricia(): root(nullptr) {}

    void insert(string key);
    bool search(string key);
    void remove(string key);

    //imprimir ordenado linea por linea 
    string display();
};