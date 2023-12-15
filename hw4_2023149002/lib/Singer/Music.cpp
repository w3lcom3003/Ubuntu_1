#include "Entertainer/Singer/Music.h"

using namespace std;

string Music::getMusicName()
{
	return _name;
}

void Music::setMusicName(string musicname)
{
	_name = musicname;
}

int Music::getLength()
{
	return _min * 60 + _sec;
}

void Music::setLength(int min, int sec)
{
	_min = min;
	_sec = sec;
}