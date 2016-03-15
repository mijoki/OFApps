#include "Creature.h"

/*
I have spent quite some time trying to implement an A* algorithm for the movement mechanics and I am yet to be able to implement it effectively.
However I have put that on hold whilst I broaden the features of the game as said in the ofApp.cpp file
*/

Creature::Creature(shared_ptr<Map> inValue)
{
	map = inValue;
}

Creature::Creature() {
}


Creature::~Creature()
{
}

void Creature::moveUp() {
	setPos(getPos().x, getPos().y - 1);

}

void Creature::moveDown() {
	setPos(getPos().x, getPos().y + 1);

}

void Creature::moveLeft() {
	setPos(getPos().x-1, getPos().y);

}

void Creature::moveRight() {
	setPos(getPos().x+1, getPos().y);

}

void Creature::moveRU() {
	setPos(getPos().x+1, getPos().y - 1);

}

void Creature::moveRD() {
	setPos(getPos().x+1, getPos().y + 1);

}

void Creature::moveLU() {
	setPos(getPos().x-1, getPos().y - 1);

}

void Creature::moveLD() {
	setPos(getPos().x-1, getPos().y + 1);

}

void Creature::move(int _x, int _y)
{
	if(getPos().x==_x&&getPos().y==_y){
		return;
} else if (getPos().x == _x) {
		if (getPos().y > _y) {
			moveUp();
		}
		else {
			moveDown();
		}
	}
	else if (getPos().y == _y) {
		if (getPos().x < _x) {
			moveRight();
		}
		else {
			moveLeft();
		}
	}
	else {
		if (getPos().x > _x) {
			if (getPos().y > _y) {
				moveLU();
			}
			else {
				moveLD();
			}
		}
		else {
			if (getPos().y > _y) {
				moveRU();
			}
			else {
				moveRD();
			}
		}

	}
	/*if (path.empty()) {
		vector<MapNode> lookingList;
		vector<MapNode> lookedList;
		lookingList.push_back(map->getNode(getPos()));
		lookingList[0].setCurScore(0);
		while (!lookingList.empty()) {
			MapNode currentNode = lookingList[0];
			if (!currentNode.getVisited()) {
				currentNode.setVisited(true);
				lookedList.push_back(currentNode);
				lookingList.erase(lookingList.begin());
				bool found = false;
				for (auto & theseNodes : lookedList) {
					if (theseNodes.getPos().x == _x&&theseNodes.getPos().y == _y) {
						found = true;
						break;
					}
				}
				if (found) {
					break;
				}
				vector<MapNode> adjNodes;
				vector<ofVec2f> adjPos = currentNode.getAdj();
				for (auto& posNode : adjPos) {
					adjNodes.push_back(map->getNode(posNode));
				}
				for (auto & adjNode : adjNodes) {
					for (auto & theseNodes : lookedList) {
						if (theseNodes.getPos().x == adjNode.getPos().x&&theseNodes.getPos().y == adjNode.getPos().y) {
							continue;
						}
					}
					int toScore = adjNode.getWalkValue();
					toScore += abs((adjNode.getPos().x - _x));
					toScore += abs((adjNode.getPos().y - _y));
					toScore += currentNode.getCurScore();
					bool found = false;
					//	auto it = find_if(lookingList.begin(), lookingList.end(), [&adjNode](MapNode findNode) {return findNode.getPos() != adjNode.getPos();});
					for (auto & nodes : lookingList) {
						if (nodes.getPos() == adjNode.getPos()) {
							if (toScore < adjNode.getCurScore()) {
								adjNode.setCurScore(toScore);
								adjNode.setCameFrom(currentNode.getPos());
								found = true;
								break;
							}
						}
					}
					if (!found) {
						adjNode.setCurScore(toScore);
						adjNode.setCameFrom(currentNode.getPos());
						lookingList.push_back(adjNode);
					}
				}
			}
		}
		MapNode curLooking = lookedList[lookedList.size() - 1];//map->getNode(_x, _y);
		while (curLooking.getCameFrom() != ofVec2f(-1, -1)) {
			path.push_back(curLooking.getCameFrom());
			curLooking = map->getNode(curLooking.getCameFrom());
			
		}
	}
	setPos(path[0]);
	path.erase(path.begin());
	*/
	}

	void Creature::move(ofVec2f inDest)
	{
		move(inDest.x, inDest.y);
	}
