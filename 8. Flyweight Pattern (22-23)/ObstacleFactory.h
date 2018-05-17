#pragma once
#include <vector>
#include "ObstacleType.h"

class ObstacleFactory
{
public:
	static vector<ObstacleType*> arrayOfObstacleType;
	static ObstacleType* getType(int _id, float _width, float _height, float _speed, int _colour);
	ObstacleFactory();
	~ObstacleFactory();
};

