#pragma once
#include <string>

class Drama 
{
public:
	// ��� �̸� �޴� �Լ�(��ȯ)
	std::string getName();
	// ��� �̸� �����ϴ� �Լ�
	void setName(std::string);
	// �ø��� �ѹ� �Է¹޴� �Լ�(��ȯ)
	int getNumSeries();
	// �ø��� �ѹ� �����ϴ� �Լ�
	void setNumSeries(int);
	// ������...?
	Drama& operator=(Drama);

private:
	// ��� �̸��� �ø��� �ѹ�
	std::string _name;
	int _numSeries;
};