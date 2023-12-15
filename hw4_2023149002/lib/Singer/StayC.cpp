#include <string>
#include <vector>

#include "Entertainer/Singer/Music.h"
#include "Entertainer/Singer/Singer.h"
#include "Entertainer/Singer/StayC.h"

using namespace std;

Group::Group(string Name)
{
	Name = "";
}

Group::~Group()
{
	
}

vector<Singer> Group::getMembers()
{
	return _members;
}

void Group::setMembers(vector<Singer> members)
{
	_members = members;
}

string Group::getName()
{
	return Artist::getName();
}

int Group::getPopularity()
{
	return Artist::getPopularity();
}

void Group::setPopularity(int popularity)
{
	Artist::setPopularity(popularity);
}

string Group::getJobName()
{
	return "Singer";
}

StayC::StayC()
{

}

StayC::~StayC()
{

}

vector<Music> StayC::getMusic()
{
	return _music;
}

void StayC::setMusic(vector<Music> music)
{
	_music = music;
}

string StayC::getLightStick()
{
	return _lightStick;
}

void StayC::setLightStick(string lightstick)
{
	_lightStick = lightstick;
}