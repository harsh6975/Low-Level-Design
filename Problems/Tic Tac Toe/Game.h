#pragma once

#include <iostream>
#include <deque>
#include "Board.h"
#include "Player.h"
#include "PlayingPiece.h"

using namespace std;

class Game{
    Board *board;
    deque<Player*> players;
    public:
    void initializeGame(){
        players = deque<Player*>();
        PlayingPiece *cross = new PieceX();
        Player *crossPlayer = new Player("Player 1", cross);

        PlayingPiece *nought = new PieceO();
        Player *noughtPlayer = new Player("Player 2", nought);

        players.push_back(crossPlayer);
        players.push_back(noughtPlayer);
        board = new Board(3);
    }

    void startGame(){
        bool isEmptyCellsAvailable = true;
        vector<vector<int>> locations = {{0, 1}, {0, 0}, {1, 2}, {2, 2}, {0, 2}, {1, 0}, {1, 1}, {2, 0}, {2, 1}};
        int i=0;
        while(isEmptyCellsAvailable){
            Player *currPlayer = players.front();
            board->printBoard();
            auto emptyCells = board->getAllEmptyCells();
            if(emptyCells.size()==0){
                isEmptyCellsAvailable = false;
                break;
            }
            cout<<"Turn of: "<<currPlayer->getName()<<'\n'<< "Enter a cell location ";
            int row = locations[i][0];
            int col= locations[i][1];

            if(board->getPiece(row,col)!=nullptr){
                cout<<"Pleaes enter a valid location";
                continue;
            }

            board->addPiece(row,col,currPlayer->getPlayingPiece());
            players.pop_front();
            players.push_back(currPlayer);
            i++;
            bool isWinner = isAnyWinner(row,col);
            if(isWinner){
                board->printBoard();
                cout<<"Player :" <<currPlayer->getName()<<" wins"<<'\n';
                return;
            }
        }
        cout<<"No player wins"<<'\n';
    }
    bool isAnyWinner(int row, int col) {
        int size = board->getSize();
        PlayingPiece* currentPiece = board->getPiece(row, col);

        // Check the row
        bool rowWin = true;
        for (int i = 0; i < size; i++) {
            if (board->getPiece(row, i) == nullptr || board->getPiece(row, i)->getPieceType() != currentPiece->getPieceType()) {
                rowWin = false;
                break;
            }
        }

        // Check the column
        bool colWin = true;
        for (int i = 0; i < size; i++) {
            if (board->getPiece(i, col) == nullptr || board->getPiece(i, col)->getPieceType() != currentPiece->getPieceType()) {
                colWin = false;
                break;
            }
        }

        // Check the main diagonal (if applicable)
        bool diagonalWin = true;
        if (row == col) {  // The piece is on the main diagonal
            for (int i = 0; i < size; i++) {
                if (board->getPiece(i, i) == nullptr || board->getPiece(i, i)->getPieceType() != currentPiece->getPieceType()) {
                    diagonalWin = false;
                    break;
                }
            }
        } else {
            diagonalWin = false;  // Not on the main diagonal
        }

        // Check the anti-diagonal (if applicable)
        bool antiDiagonalWin = true;
        if (row + col == size - 1) {  // The piece is on the anti-diagonal
            for (int i = 0; i < size; i++) {
                if (board->getPiece(i, size - 1 - i) == nullptr || board->getPiece(i, size - 1 - i)->getPieceType() != currentPiece->getPieceType()) {
                    antiDiagonalWin = false;
                    break;
                }
            }
        } else {
            antiDiagonalWin = false;  // Not on the anti-diagonal
        }

        // Return true if any of the win conditions are satisfied
        return rowWin || colWin || diagonalWin || antiDiagonalWin;
    }


};