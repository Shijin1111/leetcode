#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <unordered_map>
using namespace std;
int main()
{
    vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'}
                                ,{'6','.','.','1','9','5','.','.','.'}
                                ,{'.','9','8','.','.','.','.','6','.'}
                                ,{'8','.','.','.','6','.','.','.','3'}
                                ,{'4','.','.','8','.','3','.','.','1'}
                                ,{'7','.','.','.','2','.','.','.','6'}
                                ,{'.','6','.','.','.','.','2','8','.'}
                                ,{'.','.','.','4','1','9','.','.','5'}
                                ,{'.','.','.','.','8','.','.','7','9'}};
    unordered_map<char,int> row;
    unordered_map<char,int> column;
    unordered_map<char,int> eachBox;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j] != '.')
            {
                row[board[i][j]]++;
            }
            if(board[j][i] != '.')
            {
                column[board[j][i]]++;
            }
            if(row[board[i][j]]>1) cout<< false;
            if(column[board[j][i]]>1) cout<< false ;
        }
        row.clear();
        column.clear();
    }
    for(int i=0;i<9;i+=3)
    {
        for(int j=0;j<9;j+=3)
        {
            eachBox.clear();
                for(int x = i ; x < i+3 ; x++)
                {
                    for(int y = j ; y < j+3; y++)
                    {
                        if(board[x][y]!='.')
                        {
                            eachBox[board[x][y]]++;
                        }
                        if(eachBox[board[x][y]]>1) cout<< false ;
                    }
                }
        }
    }
    cout<<true;
}