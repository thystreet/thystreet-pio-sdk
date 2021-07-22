
#include "DeviceTokenDto.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DeviceTokenDto_deviceId_is_assigned_from_json()
{


    bourne::json input = 
    {
        "deviceId", "hello"
    };

    DeviceTokenDto obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDeviceId().c_str());






}


void test_DeviceTokenDto_token_is_assigned_from_json()
{




    bourne::json input = 
    {
        "token", true
    };

    DeviceTokenDto obj(input.dump());

    TEST_ASSERT(true == obj.isToken());




}



void test_DeviceTokenDto_deviceId_is_converted_to_json()
{

    bourne::json input = 
    {
        "deviceId", "hello"
    };

    DeviceTokenDto obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["deviceId"] == output["deviceId"]);



}


void test_DeviceTokenDto_token_is_converted_to_json()
{


    bourne::json input = 
    {
        "token", true
    };

    DeviceTokenDto obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["token"] == output["token"]);


}


