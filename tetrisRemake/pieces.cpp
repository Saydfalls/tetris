/*
	piece = piece to draw
	rotation = 1 of the 4 possible rotations
	x: horizontal block position
	y: vertical block position
*/

#include "pieces.hpp"
#include "piecesAndRotations.hpp"

int Pieces::getBlockType(int piece, int rotation, int x, int y) {
	return pieces[piece][rotation][x][y];
}

// returns horizontal displacement of the piece in order to create it in the correct position.
int Pieces::getXInitialPosition(int piece, int rotation) {
	return initialPiecePositions[piece][rotation][0];
}

// returns the vertical displacement of the piece in order to create it in the correct position.
int Pieces::getYInitialPosition(int piece, int rotation) {
	return initialPiecePositions[piece][rotation][1];
}