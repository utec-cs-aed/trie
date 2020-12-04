#include "trie.h"

int main(int argc, char const *argv[]){

    Trie *trie = new Trie();
    int n;
    string key;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        trie->insert(key);
    }
    
    int option = atoi(argv[1]);
    switch (option)
    {
        case 1:
            trie->display();
            break;
        case 2:
            cin>>key;
            cout << trie->search(key);
            break; 
        case 3:
            cin>>key;
            trie->remove(key);
            cin>>key;
            trie->remove(key);
            trie->display();
            break;
    }
    return 0;
}