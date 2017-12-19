#include "platformlevel.h"

PlatformLevel::PlatformLevel() : Scene() {

}

PlatformLevel::~PlatformLevel() {
	for (int i = 0; i < tiles.size(); i++) {
		Tile* tile = tiles[i];
		this->removeChild(tile);
		tiles[i] = NULL;
		delete tile;
	}
}

void PlatformLevel::createTile(std::string texturePath, Point2 position, Point2 scale) {
	Tile* tile = new Tile();
	tile->addSprite(texturePath);
	tile->position = position;
	tile->scale = scale;

	tiles.push_back(tile);
	this->addChild(tile);
}