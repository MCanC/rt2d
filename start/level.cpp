
#include <fstream>
#include <sstream>

#include "level.h"

Level::Level() : PlatformLevel() {
	
	t.start();
	this->addSprite("assets/BackGround.tga");
	this->position = Point2(512, 256);
	this->createTile("assets/CornerNormalLeft.tga", Point2(-460, 400), Point2(1, 1));
	this->createTile("assets/MiddleNormal.tga", Point2(-332, 400), Point2(1, 1));
	this->createTile("assets/MiddleNormal.tga", Point2(-214, 400), Point2(1, 1));
	this->createTile("assets/MiddleNormal.tga", Point2(-96, 400), Point2(1, 1));
	this->createTile("assets/MiddleNormal.tga", Point2(28, 400), Point2(1, 1));
	this->createTile("assets/MiddleNormal.tga", Point2(156, 400), Point2(1, 1));
	this->createTile("assets/MiddleNormal.tga", Point2(284, 400), Point2(1, 1));
	this->createTile("assets/CornerNormalRight.tga", Point2(302, 400), Point2(1, 1));

	myplayer = new MyPlayer();
	myplayer->position = Point2(20, 305);
	myenemy = new MyEnemy();
	myenemy->position = Point2(SWIDTH / 2, 313);

	this->addChild(myenemy);
	this->addChild(myplayer);

}


Level::~Level() {

	this->removeChild(myplayer);
	this->removeChild(myenemy);

	delete myplayer;
	delete myenemy;

}

bool Level::collideCheck(Entity*a, Entity*b) {

	int ahalfwidth = a->sprite()->size.x / 2;
	int bhalfwidth = b->sprite()->size.x / 2;
	int ahalfheight = a->sprite()->size.y / 2;
	int bhalfheight = b->sprite()->size.y / 2;

	float aTop = a->position.y - ahalfheight;
	float aBottom = a->position.y + ahalfheight;
	float aRight = a->position.x + ahalfwidth;
	float aLeft = a->position.x - ahalfwidth;

	float bTop = b->position.y - bhalfheight;
	float bBottom = b->position.y + bhalfheight;
	float bRight = b->position.x + bhalfwidth;
	float bLeft = b->position.x - bhalfwidth;

	if (aBottom > bTop) {
		std::cout << "YOU HIT THE TILE" << std::endl;
		return true;
	}

	return false;
}

void Level::update(float deltaTime) {

	if (input()->getKeyUp(KeyCode::Escape)) {
		this->stop();
	}
	std::cout << myplayer->position << std::endl;

	for (int i = 0; i < tiles.size(); i++) {
		if (collideCheck(myplayer, tiles[i])) {
			myplayer->position.y =  (tiles[i]->position.y - (tiles[i]->sprite()->size.y / 2)) - (myplayer->sprite()->size.y /2);
		}
	} 
}
