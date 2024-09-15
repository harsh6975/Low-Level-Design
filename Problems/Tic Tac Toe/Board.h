#pragma once

#include <iostream>
#include <vector>
#include "PlayingPiece.h"

using namespace std;

class Board{
    vector<vector<PlayingPiece* > > board;
    int size;

    public:

    Board(int size){
        this->size=size;
        board=vector<vector<PlayingPiece* > >(size,vector<PlayingPiece*>(size, nullptr));
    }

    void addPiece(int r,int c, PlayingPiece *piece){
        board[r][c]=piece;
    }

    PlayingPiece* getPiece(int r,int c){
        return board[r][c];
    }

    vector<vector<int > > getAllEmptyCells(){
        vector<vector<int > > emptyCells;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(board[i][j]==nullptr){
                    vector<int> v;
                    v.push_back(i);
                    v.push_back(j);
                    emptyCells.push_back(v);
                }
            }
        }
        return emptyCells;
    }

    void printBoard(){
        cout<<'\n';
        for(int i=0;i<size;i++){
            cout<<i+1<< "-- ";
            for(int j=0;j<size;j++){
                if(board[i][j]==nullptr){
                    cout<<" ";
                }else{
                    cout<<(board[i][j]->getPieceType());
                }
                cout<<"|";
            }
            cout<<'\n';
        }
        cout<<'\n';
    }

    int getSize(){
        return size;
    }
};