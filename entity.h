#pragma once
#include<vector>
using namespace std;
struct node
{
	int x, y;
};

class entity
{
protected:
	vector <struct node> coordinates;
	virtual void render();
	virtual void update();
};
