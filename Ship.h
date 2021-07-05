#pragma once
class Ship
{
private:
	short rColor;
	short gColor;
	short bColor;
 
	char _ship[4][3];

	char lvl;
	void loadShip()
	{
		
		_ship[0][1] = '|';
		_ship[0][0] = ' ';
		_ship[0][2] = ' ';
		_ship[1][0] = '/';
		_ship[1][2] = '\\';
		_ship[1][1] = ' ';
		_ship[2][0] = '|';
		_ship[2][1] = 'O';
		_ship[2][2] = '|';
		_ship[3][0] = '/';
		_ship[3][1] = '|';
		_ship[3][2] = '\\';
	}
public:
	Ship(short r, short g, short b,  char level) :rColor(r), gColor(g), bColor(b), lvl(level)
	{
		loadShip();
	};
	
	void getPosition()
	{
		
	}
};

