class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<int> st;
        //row
        for(int i = 0; i < 9; i++){
            st.clear();
            for(int j = 0;j < 9;j++){
                if(board[i][j] != '.'){
                    if(st.count(board[i][j])){
                        return false;
                    }
                    st.insert(board[i][j]);
                }
            }
        }

        bool row = true;
        //column
        for(int i = 0; i < 9; i++){
            st.clear();
            for(int j = 0;j < 9;j++){
                if(board[j][i] != '.'){
                    if(st.count(board[j][i])){
                        return false;
                    }
                    st.insert(board[j][i]);
                }
            }
        }

        bool col = true;
        //box

        for(int i = 0;i < 9;i += 3){
            for(int j = 0;j < 9;j += 3){
                st.clear();
                for(int k = i; k < i+ 3; k++){
                    for(int l = j; l <j+3; l++){
                        if(board[k][l] != '.'){
                            if(st.count(board[k][l])){
                                return false;
                            }
                            st.insert(board[k][l]);
                        }
                    }
                }
            }
        }
        bool box = true;

        return true;
    }
};
