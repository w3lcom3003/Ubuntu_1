#pragma once
#include "Entertainer/Actor/Actor.h"

class Suzi : public Actor {
public:
	// Singleton : [https://ko.wikipedia.org/wiki/싱글턴_패턴]
	// 생성자가 여러차례 호출되더라도 만들어지는 객체는 하나
	// 그래서 static함수를 쓴건가..?
	static Suzi& instance()
	{
		static Suzi suzi_instance;
		return suzi_instance;
	}

	// destructor
	~Suzi();

   private:
	Suzi();
};