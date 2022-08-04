#include "Engine.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	Engine* MyEngine = GEngine;

	MyEngine->LoadMap("level1.txt");
	MyEngine->Run();

	delete MyEngine;

	return 0;
}