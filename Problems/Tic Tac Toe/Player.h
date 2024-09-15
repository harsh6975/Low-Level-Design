#include <iostream>
#include "PlayingPiece.h"
using namespace std;

class Player{
    string name;
    PlayingPiece *piece;

    public:
    Player(string name, PlayingPiece *piece):name(name),piece(piece){};

    PlayingPiece* getPlayingPiece(){
        return piece;
    }

    string getName(){
        return name;
    }
};