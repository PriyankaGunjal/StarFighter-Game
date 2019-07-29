#pragma once
#include"bullet.h";
#include"enemy.h";
#include"player.h";

class nodedata
{
public:
	char d1, d2, d3;
	nodedata()
	{
		d1 = ' ';
		d2 = ' ';
		d3 = ' ';
	}
	
};
class world :entity
{
public:
	nodedata worldmatrix[25][25];
	vector <enemy> enemylist;
	vector <player>playerlist;
	vector <bullet>bulletlist;
	void initializeworld();
	void drawworld();
	void renderworld();

};
