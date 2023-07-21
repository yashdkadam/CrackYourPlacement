

// User function template for C++

// trie node
/*
struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];

    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;
};
*/

//Function to insert string into TRIE.
void insert(struct TrieNode *root, string key)
{
    int n = key.size();
    for(int i = 0; i < n; i++){
        if(!root->children[key[i] - 'a']){
            root->children[key[i] - 'a'] = new TrieNode();
        }
        root = root->children[key[i] - 'a'];
    }
    root->isLeaf = true;
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    int n = key.size();
    for(int i = 0; i < n; i++){
        if(!root->children[key[i] - 'a']){
            return false;
        }
        root = root->children[key[i] - 'a'];
    }
    return root->isLeaf;
}









