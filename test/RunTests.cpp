
#include "DeviceStatusDtoTest.cpp"

#include "DeviceTokenDtoTest.cpp"

#include "OrderStatusDtoTest.cpp"



void setUp(){}

void tearDown(){}

void runTests(){
    
    
    RUN_TEST(test_DeviceStatusDto_available_is_assigned_from_json);
    
    
    RUN_TEST(test_DeviceStatusDto_deviceId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_DeviceTokenDto_deviceId_is_assigned_from_json);
    
    
    RUN_TEST(test_DeviceTokenDto_token_is_assigned_from_json);
    
    
    
    RUN_TEST(test_OrderStatusDto_orderId_is_assigned_from_json);
    
    
    RUN_TEST(test_OrderStatusDto_status_is_assigned_from_json);
    
    

    
    
    RUN_TEST(test_DeviceStatusDto_available_is_converted_to_json);
    
    
    RUN_TEST(test_DeviceStatusDto_deviceId_is_converted_to_json);
    
    
    
    RUN_TEST(test_DeviceTokenDto_deviceId_is_converted_to_json);
    
    
    RUN_TEST(test_DeviceTokenDto_token_is_converted_to_json);
    
    
    
    RUN_TEST(test_OrderStatusDto_orderId_is_converted_to_json);
    
    
    RUN_TEST(test_OrderStatusDto_status_is_converted_to_json);
    
    

    
}

int main(void) {
    UNITY_BEGIN();
    runTests();
    return UNITY_END();
}

void setup() {
    UNITY_BEGIN();
    runTests();
    UNITY_END();
}

void loop() {
    
}
