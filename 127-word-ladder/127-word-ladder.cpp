class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        set<string>s;
        bool ispresent=false;
        
        for(auto word:wordList)
        {
            if(endWord.compare(word)==0)
            {
                ispresent=true;
            }
            
            s.insert(word);
        }
        
        if(ispresent==false)
        {
            return 0;
        }
        
        queue<string>q;
        int depth=0;
        q.push(beginWord);
        
        while(!q.empty())
        {
            depth++;
            int level=q.size();
            
            while(level--)
            {
                string curr=q.front();
                q.pop();
                
                for(int i=0;i<curr.length();i++)
                {
                    
                    string temp=curr;
                    
                    for(char c='a';c<='z';c++)
                    {
                        temp[i]=c;
                        
                        if(curr.compare(temp)==0)
                        {
                            continue;
                        }
                        
                        if(temp.compare(endWord)==0)
                        {
                            return depth+1;
                        }
                        
                        if(s.find(temp)!=s.end())
                        {
                            q.push(temp);
                            s.erase(temp);
                        }
                    }
                }
            }
        }
        
        return 0;
    }
};