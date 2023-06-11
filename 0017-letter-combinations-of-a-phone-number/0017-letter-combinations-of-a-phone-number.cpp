class Solution {
public:
    
    vector<string> v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    
    
    void callfunc(string digits, int i, vector<string>&res, string path)
    {
        if(i==digits.size())
        {
            res.push_back(path);
            return;
        }
        
        int k=digits[i]-'0';
        
        for(char c:v[k])
        {
            path.push_back(c);
            callfunc(digits,i+1,res,path);
            path.pop_back();
        }
        
        
    }
    vector<string> letterCombinations(string digits) {
        
        vector<string>res;
        
        if(digits.size()==0)
        {
            return res;
        }
        
        string ans="";
        
        
        
        callfunc(digits,0,res,ans);
        
        return res;
        
    }
};