
#include "DeviceStatusDto.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DeviceStatusDto_available_is_assigned_from_json()
{




    bourne::json input = 
    {
        "available", true
    };

    DeviceStatusDto obj(input.dump());

    TEST_ASSERT(true == obj.isAvailable());




}


void test_DeviceStatusDto_deviceId_is_assigned_from_json()
{


    bourne::json input = 
    {
        "deviceId", "hello"
    };

    DeviceStatusDto obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDeviceId().c_str());






}



void test_DeviceStatusDto_available_is_converted_to_json()
{


    bourne::json input = 
    {
        "available", true
    };

    DeviceStatusDto obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["available"] == output["available"]);


}


void test_DeviceStatusDto_deviceId_is_converted_to_json()
{

    bourne::json input = 
    {
        "deviceId", "hello"
    };

    DeviceStatusDto obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["deviceId"] == output["deviceId"]);



}


