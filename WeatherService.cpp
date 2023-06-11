#include "Weather.h"
#include "Service.h"
#include "JsonServie.h"
#include "XMLService.h"


int main()
{
	//Json погода
	JsonService js;
	Weather w = js.getWeather("weather.json");

	//XML погода
	XmlService xs;
	Weather w1 = xs.getWeather("weather.xml");

}