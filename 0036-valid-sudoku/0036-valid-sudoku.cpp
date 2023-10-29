class Solution{
public:
    bool isValidSudoku(vector<vector<char>>& board){
        unordered_set<string> s;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    string temp="("+to_string(board[i][j])+")";
                    if(!s.insert(temp+to_string(i)).second) return false;
                    if(!s.insert(to_string(j)+temp).second) return false;
                    if(!s.insert(to_string(i/3)+temp+to_string(j/3)).second) return false;
                }
            }
        }
        return true;
    }
};