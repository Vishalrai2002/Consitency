class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        int n=w1.size(); // find the size of w1
        int m=w2.size(); // find the size of w2
        string ans1,ans2; 
        for(int i=0;i<n;i++){
            ans1+=w1[i];
        }
        for(int j=0;j<m;j++){
            ans2+=w2[j];
        }
        // cout<<ans1<<" "<<ans2<<endl;
        if(ans1==ans2){ // simple compare here to check both are equal or not
        return true;
        }
        return false;
    }
};
