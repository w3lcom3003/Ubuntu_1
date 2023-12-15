#include <string>

using namespace std;

#include "Entertainer/Artist.h"
#include "Entertainer/Singer/Music.h"
#include "Entertainer/Singer/Singer.h"

Singer::Singer(string name)
{
	name = "";
}

Singer::~Singer()
{

}

Music Singer::getFavoriteSong()
{
	return _favoriteSong;
}

void Singer::setFavoriteSong(Music favoritesong)
{
	_favoriteSong = favoritesong;
}

string Singer::getJobName()
{
	return "Singer";
}