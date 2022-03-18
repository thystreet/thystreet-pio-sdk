

#include "DeviceTokenDto.h"

using namespace Tiny;

DeviceTokenDto::DeviceTokenDto()
{
	deviceId = std::string();
	token = bool(false);
}

DeviceTokenDto::DeviceTokenDto(std::string jsonString)
{
	this->fromJson(jsonString);
}

DeviceTokenDto::~DeviceTokenDto()
{

}

void
DeviceTokenDto::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *deviceIdKey = "deviceId";

    if(object.has_key(deviceIdKey))
    {
        bourne::json value = object[deviceIdKey];



        jsonToValue(&deviceId, value, "std::string");


    }

    const char *tokenKey = "token";

    if(object.has_key(tokenKey))
    {
        bourne::json value = object[tokenKey];



        jsonToValue(&token, value, "bool");


    }


}

bourne::json
DeviceTokenDto::toJson()
{
    bourne::json object = bourne::json::object();





    object["deviceId"] = getDeviceId();






    object["token"] = isToken();



    return object;

}

std::string
DeviceTokenDto::getDeviceId()
{
	return deviceId;
}

void
DeviceTokenDto::setDeviceId(std::string  deviceId)
{
	this->deviceId = deviceId;
}

bool
DeviceTokenDto::isToken()
{
	return token;
}

void
DeviceTokenDto::setToken(bool  token)
{
	this->token = token;
}



