#pragma once
#include <string>

class Drama 
{
public:
	// 드라마 이름 받는 함수(반환)
	std::string getName();
	// 드라마 이름 설정하는 함수
	void setName(std::string);
	// 시리즈 넘버 입력받는 함수(반환)
	int getNumSeries();
	// 시리즈 넘버 설정하는 함수
	void setNumSeries(int);
	// 연산자...?
	Drama& operator=(Drama);

private:
	// 드라마 이름과 시리즈 넘버
	std::string _name;
	int _numSeries;
};