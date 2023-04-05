#include"Station.h"
using namespace std;

int main()
{
	Station* marsStation = new Station();
	marsStation->simulate();
	delete marsStation;
	return 0;
}