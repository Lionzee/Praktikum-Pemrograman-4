#pragma once
#include <iostream>

using namespace std;

class ObstacleType
{
public:
	int id;
	float width;
	float height;
	float speed;
	int colour;

	ObstacleType();
	~ObstacleType();
	void setTypeValue(int _id, float _width, float _height, float _speed, int _colour);
};

