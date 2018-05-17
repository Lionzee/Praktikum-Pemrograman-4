#include "stdafx.h"
#include "ObstacleFactory.h"
#include "ObstacleType.h"

vector <ObstacleType*> ObstacleFactory::arrayOfObstacleType;


ObstacleType* ObstacleFactory::getType(int _id, float _width, float _height, float _speed, int _colour) {
	for (vector<ObstacleType*>::const_iterator i = arrayOfObstacleType.begin(); i != arrayOfObstacleType.end(); ++i) {
		if ((*i)->id == _id) {
			return *i;
		}
	}
	ObstacleType* newType = new ObstacleType();
	newType->setTypeValue(_id, _width, _height, _speed, _colour);
	ObstacleFactory::arrayOfObstacleType.push_back(newType);
	return newType;
}

ObstacleFactory::ObstacleFactory()
{
}

ObstacleFactory::~ObstacleFactory()
{
}
