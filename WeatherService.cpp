#include "Service.h"
#include "JsonServie.h"


int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");
	return 0;
}