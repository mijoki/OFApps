#include "Handler.h"



Handler::Handler()
{
	shared_ptr<ofImage> inImg = make_shared<ofImage>();
	inImg->load("grass.jpg");
	images.push_back(inImg);
	inImg = make_shared<ofImage>();
	inImg->load("Warehouse.jpg");
	images.push_back(inImg);
	inImg = make_shared<ofImage>();
	inImg->load("Forest.jpg");
	images.push_back(inImg);
	inImg = make_shared<ofImage>();
	inImg->load("Mine.jpg");
	images.push_back(inImg);
	inImg = make_shared<ofImage>();
	inImg->load("Farm.jpg");
	images.push_back(inImg);
	inImg = make_shared<ofImage>();
	inImg->load("Person.png");
	images.push_back(inImg);
	inImg = make_shared<ofImage>();
	inImg->load("Cow.png");
	images.push_back(inImg);
	inImg = make_shared<ofImage>();
	inImg->load("House.jpg");
	images.push_back(inImg);
	inImg = make_shared<ofImage>();
	inImg->load("StockPile.jpg");
	images.push_back(inImg);
	inImg = make_shared<ofImage>();
	inImg->load("OnyxHorse.jpg");
	images.push_back(inImg);
	map = make_shared<Map>();
	for (int x = 0;x < 12;x++) {
		map->addLine();
		for (int y = 0; y < 12;y++) {
			map->addNode(x, y);
			map->getNode(x, y).setMyImage(images[imageSheet::grass]);
		}
	}
	Person* testPerp = new Person(map);
	gameObjects.push_back(testPerp);
	testPerp->setMyImage(images[imageSheet::person]);
}


Handler::~Handler()
{
}

void Handler::draw() {
	map->draw();
	for (auto &gameObject : gameObjects) {
		gameObject->draw();
	}
}

void Handler::update() {

}
