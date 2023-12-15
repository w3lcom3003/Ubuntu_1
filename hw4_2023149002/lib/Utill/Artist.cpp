#include <iostream>
#include "Entertainer/MBTI.h"
#include "Entertainer/Artist.h"

using namespace std;

string Artist::getName()
{
	return _name;
}

void Artist::setName(string name)
{
	_name = name;
}

MBTI Artist::getMBTI()
{
	return _mbti;
}

void Artist::setMBTI(MBTI mbti)
{
	_mbti = mbti;
}

int Artist::getPopularity()
{
	return _popularity;
}

void Artist::setPopularity(int popularity)
{
	_popularity = popularity;
}