class Solution {
public:
    bool isAnagram(string s, string t) {
        //brute force

        // sort(t.begin(),t.end());
        // sort(s.begin(),s.end());
        // // int s1=stoi(t);
        // // cout<<s1;
        // int i=0;
        // while(i<=s.size()){
        //     if(s[i]==t[i]){
        //         i++;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        // return true;
         
         //counting approach
         int FreqTable[256]={0};
         for(int i=0;i<s.size();i++){
         FreqTable[s[i]]++;
         //0(n)
         }
         for(int i=0;i<t.size();i++){
             FreqTable[t[i]]--;
             //0(m)
         }
         for(int i=0;i<256;i++){
             if(FreqTable[i]!=0){
                 return false;
                 //0(256)
             }
         }
         return true;
    }
};
