#pragma once
#include <iostream>

using namespace std;

class IObserver
{
	public:
    	virtual void Update(char square) = 0;
};
