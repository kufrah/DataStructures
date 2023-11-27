#include "Recursion.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ChessBoard chessBoard;

	bool status = chessBoard.Solve(chessBoard,0);
	if(!status)
	{
		cout << "No solution found"  << endl;
	}
	

	return 0;
}