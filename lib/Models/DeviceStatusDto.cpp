

#include "DeviceStatusDto.h"

using namespace Tiny;

DeviceStatusDto::DeviceStatusDto()
{
	available = bool(false);
	deviceId = std::string();
}

DeviceStatusDto::DeviceStatusDto(std::string jsonString)
{
	this->fromJson(jsonString);
}

DeviceStatusDto::~DeviceStatusDto()
{

}

void
DeviceStatusDto::fromJson(std::string jsonObj)
{   
    bourne::json object = bourne::json::parse(jsonObj);

    const char *availableKey = "available";
    
    if(object.has_key(availableKey)) 
    {
        bourne::json value = object[availableKey];


        
        jsonToValue(&available, value, "bool");


    }

    const char *deviceIdKey = "deviceId";
    
    if(object.has_key(deviceIdKey)) 
    {
        bourne::json value = object[deviceIdKey];


        
        jsonToValue(&deviceId, value, "std::string");


    }


}

bourne::json
DeviceStatusDto::toJson()
{
    bourne::json object = bourne::json::object();

    



    object["available"] = isAvailable();


    



    object["deviceId"] = getDeviceId();



    return object;

}

bool
DeviceStatusDto::isAvailable()
{
	return available;
}

void
DeviceStatusDto::setAvailable(bool  available)
{
	this->available = available;
}

std::string
DeviceStatusDto::getDeviceId()
{
	return deviceId;
}

void
DeviceStatusDto::setDeviceId(std::string  deviceId)
{
	this->deviceId = deviceId;
}



