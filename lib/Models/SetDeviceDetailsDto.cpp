

#include "SetDeviceDetailsDto.h"

using namespace Tiny;

SetDeviceDetailsDto::SetDeviceDetailsDto()
{
	deviceId = std::string();
	tariff = bool(false);
}

SetDeviceDetailsDto::SetDeviceDetailsDto(std::string jsonString)
{
	this->fromJson(jsonString);
}

SetDeviceDetailsDto::~SetDeviceDetailsDto()
{

}

void
SetDeviceDetailsDto::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *deviceIdKey = "deviceId";

    if(object.has_key(deviceIdKey))
    {
        bourne::json value = object[deviceIdKey];



        jsonToValue(&deviceId, value, "std::string");


    }

    const char *tariffKey = "tariff";

    if(object.has_key(tariffKey))
    {
        bourne::json value = object[tariffKey];



        jsonToValue(&tariff, value, "bool");


    }


}

bourne::json
SetDeviceDetailsDto::toJson()
{
    bourne::json object = bourne::json::object();





    object["deviceId"] = getDeviceId();






    object["tariff"] = isTariff();



    return object;

}

std::string
SetDeviceDetailsDto::getDeviceId()
{
	return deviceId;
}

void
SetDeviceDetailsDto::setDeviceId(std::string  deviceId)
{
	this->deviceId = deviceId;
}

bool
SetDeviceDetailsDto::isTariff()
{
	return tariff;
}

void
SetDeviceDetailsDto::setTariff(bool  tariff)
{
	this->tariff = tariff;
}



