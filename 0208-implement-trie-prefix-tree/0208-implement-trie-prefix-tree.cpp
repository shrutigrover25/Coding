constexpr size_t ALPHABET_SIZE = 26;

struct TrieNode {
    TrieNode() { }
  
    TrieNode *nodes[ALPHABET_SIZE] = {0};
    bool isEnd = false;
};

class Trie {
public:
    Trie() { }
    
    void insert(string word) {
        TrieNode *node = &startingNode;
        for(char ch : word) {
            if(!node->nodes[getIndex(ch)]){
                node->nodes[getIndex(ch)] = new TrieNode;
            }
            node = node->nodes[getIndex(ch)];
        }
        node->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode *node = &startingNode;
        for(char ch : word) {
            if(!node->nodes[getIndex(ch)]) {
                return false;
            }
            node = node->nodes[getIndex(ch)];
        }
        return node->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode *node = &startingNode;
        for(char ch : prefix) {
            if(!node->nodes[getIndex(ch)]) {
                return false;
            }
            node = node->nodes[getIndex(ch)];
        }
        return true;
    }
private:
    size_t getIndex(char ch) {
        return ch - 'a';
    }

    TrieNode startingNode;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */