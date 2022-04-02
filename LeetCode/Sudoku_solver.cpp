class Solution {
public:
    bool checkBox(vector<vector<char>>& board , int t_i , int t_j ,int i,int j, char temp){
        for(int k=3*t_i;k<3*t_i+3;k++){
            for(int p=3*t_j;p<3*t_j+3;p++){
                if(board[k][p] == temp && (k!=i && p!=j)){
                    cout<<4<<" "<<temp<<endl;
                    return false;
                }
            }
        }
        return true;
        
    }
    bool line(vector<vector<char>>& board,int i,int j,char temp){
        for(int k=0;k<9;k++){
            if(board[k][j]== temp && (k!=i)){
                cout<<2<<" "<<temp<<endl;
                return false;
            }
            if(board[i][k]== temp && (k!=j)){
                cout<<3;
                return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char c = board[i][j];
                if(c != '.'){
                    bool t = checkBox(board,i/3 , j/3, i , j , board[i][j]) && line(board , i , j , board[i][j]);
                    if(!t){
                        cout<<1;
                        return false;
                    }
                }
            }
        }
        return true;
    }
};