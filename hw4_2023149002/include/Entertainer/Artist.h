#pragma once
#include <string>

#include "Entertainer/MBTI.h"

class Artist 
{
public:
	Artist() :_name(""), _mbti(), _popularity(0) {}
	// constructor
	Artist(std::string name) : _name(name), _mbti(MBTI::NONE) {}
	// destructor
	virtual ~Artist() {}
	
	// 이름을 입력받는 함수(반환)
	std::string getName();
	// 이름을 설정하는 함수
	void setName(std::string);
	// MBTI를 받는 함수
	MBTI getMBTI();
	// MBTI를 설정하는 함수
	void setMBTI(MBTI);
	// 유명세 입력받는 함수(반환)
	int getPopularity();
	// 유명세 설정하는 함수
	void setPopularity(int);

	// Artist라는 직업 이름을 반환하는 함수
	virtual std::string getJobName() { return "Artist"; }

private:
	// 이름, MBTI, 유명세
	std::string _name;
	MBTI _mbti;
	int _popularity;
};