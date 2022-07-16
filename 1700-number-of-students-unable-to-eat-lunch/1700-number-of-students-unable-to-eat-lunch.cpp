class Solution {
public:
    deque<int> dq;
    stack<int> s;
    int cntr = 0;
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        for(int i=0;i<students.size();i++)
        {
            dq.push_back(students[i]);
        }
        reverse(sandwiches.begin(), sandwiches.end());
        for(int i=0;i<sandwiches.size();i++)
        {
            s.push(sandwiches[i]);
        }

        while(dq.size() != cntr)
        {
            if(dq.front() == s.top())
            {
                dq.pop_front();
                s.pop();
                cntr=0;
            }

            else
            {
                dq.push_back(dq.front());
                dq.pop_front();
                cntr++;
            }
        }
        cout<<dq.empty();

        if(dq.empty())
            return 0;
        else
        {
            return cntr;
        }

    }
};