

#include "OrderStatusDto.h"

using namespace Tiny;

OrderStatusDto::OrderStatusDto()
{
	orderId = std::string();
	status = std::string();
}

OrderStatusDto::OrderStatusDto(std::string jsonString)
{
	this->fromJson(jsonString);
}

OrderStatusDto::~OrderStatusDto()
{

}

void
OrderStatusDto::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *orderIdKey = "orderId";

    if(object.has_key(orderIdKey))
    {
        bourne::json value = object[orderIdKey];



        jsonToValue(&orderId, value, "std::string");


    }

    const char *statusKey = "status";

    if(object.has_key(statusKey))
    {
        bourne::json value = object[statusKey];



        jsonToValue(&status, value, "std::string");


    }


}

bourne::json
OrderStatusDto::toJson()
{
    bourne::json object = bourne::json::object();





    object["orderId"] = getOrderId();






    object["status"] = getStatus();



    return object;

}

std::string
OrderStatusDto::getOrderId()
{
	return orderId;
}

void
OrderStatusDto::setOrderId(std::string  orderId)
{
	this->orderId = orderId;
}

std::string
OrderStatusDto::getStatus()
{
	return status;
}

void
OrderStatusDto::setStatus(std::string  status)
{
	this->status = status;
}



