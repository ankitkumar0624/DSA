class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths){
        unordered_map<string,vector<string>>files;
        vector<vector<string>>results;
        for(auto&path:paths){
            stringstream ss(path);
            string s;
            string root;
            getline(ss,root,' ');
            while(getline(ss,s,' ')){
                string filename=root+'/'+s.substr(0,s.find('('));
                string filecontents=s.substr(s.find('(')+1,s.find(')')-s.find('(')-1);
                files[filecontents].push_back(filename);
            }
        }
        for(auto i:files){
            if(i.second.size()>1){
                results.push_back(i.second);
            }
        }
        return results;
    }
};