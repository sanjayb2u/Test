// Piramid.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int nRow, nCol;

	for (nRow = 00; nRow < 10; nRow++)
	{
		cout << nRow;
	for (nCol = 01;nCol < nRow;nCol++)
		{
			cout <<" "<< nCol;
		}
		cout <<endl;
	}
	cin:getchar();
    return 0;
}

