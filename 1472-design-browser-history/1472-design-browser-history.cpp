class BrowserHistory {
public:
    list<string>l;
    list<string>::iterator it;
    BrowserHistory(string homepage) {
        
        l.push_back(homepage);
        it=l.begin();
        
    }
    
    void visit(string url) {
        
        auto del=it;
        del++;
        l.erase(del,l.end());
        l.push_back(url);
        it++;
        
    }
    
    string back(int steps) {
        
        while(it!=l.begin() && steps--)
        {
            it--;
        }
        
        return *it;
    }
    
    string forward(int steps) {
        
        while(it!=(--l.end()) && steps--)
        {
            it++;
        }
        
        return *it;
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */