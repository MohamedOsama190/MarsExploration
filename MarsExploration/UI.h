#pragma once
#include <iostream>
#include <fstream>
#include "Queue.h" 
#include "mission.h"
#include "Event.h"





class UI {
private:

	Station* marsStation;

public:

	UI(Station*);

	void load(std::ifstream& , Queue<Event*>&, int[] /*queue<event> event*/);// takes events list, rovers list to load values from the file to it
	void save(std::ofstream&, PriorityQueue<mission*> /*queue<mission>completed missions*/,int[],int[],int,int,int);


};


