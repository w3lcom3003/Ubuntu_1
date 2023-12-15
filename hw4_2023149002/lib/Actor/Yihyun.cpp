#include <iostream>
#include "Entertainer/Actor/Yihyun.h"

YihyunCho::~YihyunCho()
{
	delete[] _drama;
}

Drama* YihyunCho::getDramaList(int*numDrama)
{
	Drama* _drama = new Drama[*numDrama];
	return _drama;
}

void YihyunCho::setDramaList(int num, Drama*dramalist)
{
	_numDrama = num;
	_drama = dramalist;
}