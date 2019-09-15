#include "Worker.h"

Worker::Worker(FIOZp D)
{
	Data = D;
}

FIOZp Worker::Out()
{
	return Data;
}
