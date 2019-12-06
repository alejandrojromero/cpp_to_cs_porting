#include "SharedAPI.h"
#include <stdio.h>
#include <stdlib.h>

MYSHARED_API int randNum(){
	return rand() % 6;
}

SharedAPI::SharedAPI()
{
}


SharedAPI::~SharedAPI()
{
}
