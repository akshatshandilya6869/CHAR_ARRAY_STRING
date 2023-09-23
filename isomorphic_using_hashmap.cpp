class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int Hash[256]={0};//mapping of each character of language s to language t
        bool tsCharMapped[256]={0};//store if t[i] mapped with character of s[i]
        for(int i=0;i<s.length();i++){

            if(Hash[s[i]]== 0 && tsCharMapped[t[i]]==0 ){
                Hash[s[i]]=t[i];
                tsCharMapped[t[i]]=true;
            }
        }
        for(int i=0;i<s.length();i++){
            if((char)Hash[s[i]]!=t[i])
            return false;
        }
        return true;
    }
};
