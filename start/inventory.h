
#ifndef INVENTORY_H
#define INVENTORY_H

#include <rt2d/entity.h>


class MyInventory : public Entity
{
public:

	MyInventory();

	virtual ~MyInventory();

	virtual void update(float deltaTime);

private:


};

#endif /* INVENTORY_H */

