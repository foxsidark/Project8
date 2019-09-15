#pragma once
#include "Worker1.h"
#include "FIOZp1.h"
#include <vector>
using namespace std;
class Director1 :
	public Worker1
{
	vector<Worker1> W;
public:
	void Add(Worker1 W) {
		this->W.push_back(W);
	}
	/*void DelWorker(int I) {
		W.erase(W.begin + I);
	}*/

};

