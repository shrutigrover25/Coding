class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        vector<int>v;
        int n=ops.size();
        
        for(int i=0;i<n;i++)
        {
            if(ops[i]=="+")
            {
                v.push_back(v[v.size()-1]+v[v.size()-2]);
            }
            
            else if(ops[i]=="C")
            {
                v.pop_back();
            }
            
            else if(ops[i]=="D")
            {
                v.push_back(v.back()*2);
            }
            
            else
            {
                int k=stoi(ops[i]);
                v.push_back(k);
            }
        }
        
        int sum=0;
        
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        
        
        return sum;
    }
};