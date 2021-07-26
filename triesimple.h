#include <iostream>
#include "trie.h"

using namespace std;

const unsigned ALPHA_SIZE = 26;//tamanio del alfabeto de letras minusculas

class TrieSimple : public Trie {
private:
    struct TrieNode{
        TrieNode **children;        
        bool endWord; //indica si es final de una palabra
        
        TrieNode();
        ~TrieNode();
    };

    TrieNode* root;

public:
    TrieSimple(): root(nullptr) {}

    void insert(string key);
    bool search(string key);
    void remove(string key);    
    
    //imprimir ordenado linea por linea 
    string display();
};
