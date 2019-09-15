#pragma once
#include <string>
#include "FIOZp.h"
using namespace std;

class Worker
{
	FIOZp Data;
	
public:
	Worker(FIOZp D);
	FIOZp Out();
	
};

