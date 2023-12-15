#include "include/Entertainer/Actor/Drama.h"

using namespace std;

class Drama {
public:
    // ��� �̸��� ��ȯ�ϴ� �Լ�
    std::string getName() {
        return _name;
    }

    // ��� �̸��� �����ϴ� �Լ�
    void setName(std::string name) {
        _name = name;
    }

    // �ø��� ��ȣ�� ��ȯ�ϴ� �Լ�
    int getNumSeries() {
        return _numSeries;
    }

    // �ø��� ��ȣ�� �����ϴ� �Լ�
    void setNumSeries(int numSeries) {
        _numSeries = numSeries;
    }

    // ���� ������ �����ε�
    Drama& operator=(const Drama& other) {
        if (this != &other) {
            _name = other._name;
            _numSeries = other._numSeries;
        }
        return *this;
    }

private:
    std::string _name; // ��� �̸�
    int _numSeries; // �ø��� ��ȣ
};
