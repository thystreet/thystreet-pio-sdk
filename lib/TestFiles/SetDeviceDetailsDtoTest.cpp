
#include "SetDeviceDetailsDto.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_SetDeviceDetailsDto_deviceId_is_assigned_from_json()
{


    bourne::json input = 
    {
        "deviceId", "hello"
    };

    SetDeviceDetailsDto obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDeviceId().c_str());






}


void test_SetDeviceDetailsDto_tariff_is_assigned_from_json()
{




    bourne::json input = 
    {
        "tariff", true
    };

    SetDeviceDetailsDto obj(input.dump());

    TEST_ASSERT(true == obj.isTariff());




}



void test_SetDeviceDetailsDto_deviceId_is_converted_to_json()
{

    bourne::json input = 
    {
        "deviceId", "hello"
    };

    SetDeviceDetailsDto obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["deviceId"] == output["deviceId"]);



}


void test_SetDeviceDetailsDto_tariff_is_converted_to_json()
{


    bourne::json input = 
    {
        "tariff", true
    };

    SetDeviceDetailsDto obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["tariff"] == output["tariff"]);


}


