#include "stdafx.h"
#include "Obstacle.h"
#include <iostream>
#include "ObstacleType.h"
#include "ObstacleFactory.h"

using namespace std;

Obstacle::Obstacle(){
}

void Obstacle::setObstaclePos(float _x, float _y) {
	x = _x;
	y = _y;
}

void Obstacle::setObstacleType(ObstacleType _type) {
	type = _type;
}

void Obstacle::update() {
	x -= type.speed;
}

Obstacle::~Obstacle()
{
}
