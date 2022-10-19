class Solution {
public:
    vector<string>ans;
    
struct comparator
    {
        bool operator() (pair<int, string>& a, pair<int, string>& b)
        {
            if(a.first == b.first)           // if frequency are equal put lexicographically greater element on top
            {
                return a.second < b.second;
            }
            else                            // if frequency are not equal put the elements on top which has less frequency
            {
                return a.first > b.first;
            }
        }
    };


     vector<string>solution(vector<string>&word,int n,int k){
        map<string,int>mp;
    for(int i=0;i<n;i++){
        mp[word[i]]++;
    }
    vector<pair<int,string>>v;
    for(auto it:mp){
        // cout<<it.first<<"  "<<it.second<<endl;
        v.push_back({it.second,it.first});
    }
    sort(v.begin(),v.end(),comparator());
    for(auto it:v){
        if(k>0){
            ans.push_back(it.second);
            k--;
        }
        // cout<<it.first<<" "<<it.second<<endl;
    }
    // sort(ans.begin(),ans.end());
   return ans;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n=words.size();
        return solution(words,n,k);
    }
};
