#include"world.h"
#include<iostream>
void world::initializeworld()
{
	int i = 0;
		for (int j = 0;j < 25;j++)
		{
			worldmatrix[i][j].d1 = 178;worldmatrix[i][j].d2 = 178;worldmatrix[i][j].d3 = 178;
			worldmatrix[j][i].d1 = 178;worldmatrix[j][i].d2 = 178;worldmatrix[j][i].d3 = 178;
		}
		int i = 25;
		for (int j = 0;j < 25;j++)
		{
			worldmatrix[i][j].d1 = 178;worldmatrix[i][j].d2 = 178;worldmatrix[i][j].d3 = 178;
			worldmatrix[j][i].d1 = 178;worldmatrix[j][i].d2 = 178;worldmatrix[j][i].d3 = 178;
		}
}

void world::drawworld()
{
	for (int i = 0;i < 25;i++)
	{
		for (int j = 0;j < 25;j++)
		{
			cout << worldmatrix[i][j].d1<<worldmatrix[i][j].d2<<worldmatrix[i][j].d3;
		}
		cout << "\n";
	}
}