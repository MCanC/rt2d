
#ifndef ENEMY_H
#define ENEMY_H

#include <rt2d/entity.h>


class MyEnemy : public Entity
{
public:
	
	MyEnemy();

	virtual ~MyEnemy();

	virtual void update(float deltaTime);

private:

	Vector2 speed;
	int gravity;
};

#endif /* ENEMY_H */
#pragma once
