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

	// 드라마 클래스의 걸작 입력받는 함수 사용
	Drama getMasterpiece();
	void setMasterpiece(Drama);
	std::string getJobName() override;

   private:
	Drama _masterpiece;
};