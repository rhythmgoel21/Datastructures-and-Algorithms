class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
    map<int,int>s;
    vector<int>v;
        for(int i=0;i<=numbers.size();i++)
        {
            int temp=target-numbers[i];
            if(s.find(temp)!=s.end())
            {
                v.push_back(s[temp]);
                v.push_back(i);
            }
            s[numbers[i]]=i;
        }
        return v;
    }
};
