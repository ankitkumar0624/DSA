class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>st;
        for(int i=0 ;i<words.size();i++){
            string str="";
            for(auto x:words[i]){
                str+=arr[x-'a'];
            }
            st.insert(str);
        }
        return st.size();
    }
};