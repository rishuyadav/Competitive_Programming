class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string totalword1="";
        string totalword2="";
        for(auto it1:word1){
            totalword1+=it1;
        }
        for(auto it2:word2){
            totalword2+=it2;
        }
        return totalword1==totalword2;
    }
};