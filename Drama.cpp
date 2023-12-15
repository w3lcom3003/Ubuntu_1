#include "include/Entertainer/Actor/Drama.h"

using namespace std;

class Drama {
public:
    // 드라마 이름을 반환하는 함수
    std::string getName() {
        return _name;
    }

    // 드라마 이름을 설정하는 함수
    void setName(std::string name) {
        _name = name;
    }

    // 시리즈 번호를 반환하는 함수
    int getNumSeries() {
        return _numSeries;
    }

    // 시리즈 번호를 설정하는 함수
    void setNumSeries(int numSeries) {
        _numSeries = numSeries;
    }

    // 대입 연산자 오버로딩
    Drama& operator=(const Drama& other) {
        if (this != &other) {
            _name = other._name;
            _numSeries = other._numSeries;
        }
        return *this;
    }

private:
    std::string _name; // 드라마 이름
    int _numSeries; // 시리즈 번호
};
