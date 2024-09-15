#pragma once

#include <iostream>
enum class PieceType{
    EMPTY,
    X,
    O
};

class PlayingPiece{
    PieceType pieceType;
    public:
    PlayingPiece(PieceType pieceType):pieceType(pieceType){};

    char getPieceType(){
        return pieceType==PieceType::X ? 'X' : 'O';
    }
};

class PieceX: public PlayingPiece{
    public:
    PieceX():PlayingPiece(PieceType:: X){}
};

class PieceO: public PlayingPiece{
    public:
    PieceO():PlayingPiece(PieceType:: O){}
};