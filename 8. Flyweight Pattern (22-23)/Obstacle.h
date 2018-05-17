#pragma once
#include <iostream>
#include "ObstacleType.h"
#include "ObstacleFactory.h"

using namespace std;

class Obstacle
{
public:
	Obstacle();
	~Obstacle();

	void setObstaclePos(float _x, float _y);
	void setObstacleType(ObstacleType _type);
	void update();

	float x;
	float y;
	ObstacleType type;
};

