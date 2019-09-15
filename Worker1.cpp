#include "Worker1.h"

Worker1::Worker1(FIOZp1 D)
{
	Data = D;
}

FIOZp1 Worker1::Out()
{
	return Data;
}
