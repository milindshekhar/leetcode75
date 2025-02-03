class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.length();
        int len2 = word2.length();
        int minLen = min(len1,len2);

        string finalWord;
        for(int i=0; i< minLen; i++){
            finalWord += word1[i];
            finalWord += word2[i];
        }

        if(len1<len2)
            finalWord += word2.substr(minLen, len2-minLen);
        else
            finalWord += word1.substr(minLen, len1-minLen);
        
        return finalWord;
    }
};


//TC-O(n)
//SC-O(n)
