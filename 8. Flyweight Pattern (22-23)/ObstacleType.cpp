#include "stdafx.h"
#include "ObstacleType.h"

ObstacleType::ObstacleType() {

}

void ObstacleType::setTypeValue(int _id, float _width, float _height, float _speed, int _colour){
	id = _id;
	width = _width;
	height = _height;
	speed = _speed;
	colour = _colour;
}

ObstacleType::~ObstacleType()
{
}
