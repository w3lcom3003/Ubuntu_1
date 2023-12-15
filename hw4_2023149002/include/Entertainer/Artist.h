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
	
	// �̸��� �Է¹޴� �Լ�(��ȯ)
	std::string getName();
	// �̸��� �����ϴ� �Լ�
	void setName(std::string);
	// MBTI�� �޴� �Լ�
	MBTI getMBTI();
	// MBTI�� �����ϴ� �Լ�
	void setMBTI(MBTI);
	// ���� �Է¹޴� �Լ�(��ȯ)
	int getPopularity();
	// ���� �����ϴ� �Լ�
	void setPopularity(int);

	// Artist��� ���� �̸��� ��ȯ�ϴ� �Լ�
	virtual std::string getJobName() { return "Artist"; }

private:
	// �̸�, MBTI, ����
	std::string _name;
	MBTI _mbti;
	int _popularity;
};