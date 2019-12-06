#pragma once
#define MYSHARED_API __declspec(dllexport)

extern "C" {
	MYSHARED_API int randNum();
}

class SharedAPI
{
public:
	SharedAPI();
	~SharedAPI();
};

