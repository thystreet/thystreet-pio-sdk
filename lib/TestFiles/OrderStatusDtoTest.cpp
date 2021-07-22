
#include "OrderStatusDto.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_OrderStatusDto_orderId_is_assigned_from_json()
{


    bourne::json input = 
    {
        "orderId", "hello"
    };

    OrderStatusDto obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOrderId().c_str());






}


void test_OrderStatusDto_status_is_assigned_from_json()
{


    bourne::json input = 
    {
        "status", "hello"
    };

    OrderStatusDto obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStatus().c_str());






}



void test_OrderStatusDto_orderId_is_converted_to_json()
{

    bourne::json input = 
    {
        "orderId", "hello"
    };

    OrderStatusDto obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["orderId"] == output["orderId"]);



}


void test_OrderStatusDto_status_is_converted_to_json()
{

    bourne::json input = 
    {
        "status", "hello"
    };

    OrderStatusDto obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["status"] == output["status"]);



}


