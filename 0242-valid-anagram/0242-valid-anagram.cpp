class Solution {
public:
    bool isAnagram(string s, string t){
    if(s.length()!=t.length())
        return false;
    unordered_map<char,int> m;
    for(auto it:s)
        m[it]++;
    for(auto it:t){
        if(!m[it])
            return false;
        m[it]--;
        if(!m[it])
            m.erase(it);
    }
    return !m.size();
}
};