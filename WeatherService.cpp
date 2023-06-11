#include "Weather.h"
#include "Service.h"
#include "JsonServie.h"
#include "XMLService.h"


int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");
	XmlService xs;
	Weather w1 = xs.getWeather("weather.xml");

}