#pragma once
#include <string>

#include "Entertainer/Actor/Drama.h"
#include "Entertainer/Artist.h"

class Actor : public Artist {
public:
	Actor();
	// construtor
	Actor(std::string);
	// destructor
	virtual ~Actor();

	// ��� Ŭ������ ���� �Է¹޴� �Լ� ���
	Drama getMasterpiece();
	void setMasterpiece(Drama);
	std::string getJobName() override;

   private:
	Drama _masterpiece;
};