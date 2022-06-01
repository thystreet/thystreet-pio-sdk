# Documentation for Thy Street SDK
This is a client generator for microcontrollers on the Espressif32 platform and the Arduino framework

# Documentation for Thy Street 0.0.2 cpp client (Arduino) 

All URIs are relative to https://cheffy-api.thystreet.com/api/v1

### DeviceApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*generateToken* | *GET* /device/generate/{deviceId} | .|
|*setDetails* | *PUT* /device/details | Toggle your device tariff when your device goes online using this api..|
|*setToken* | *PUT* /device/token | .|

### OrderApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*getOrderById* | *GET* /order/params/{orderToken} | .|
|*setStatus* | *PUT* /order/status/{orderToken} | .|


## What are the Model files for the data structures/objects?
|Class | Description|
|------------- | -------------|
|*DeviceTokenDto* | |
|*OrderStatusDto* | |
|*SetDeviceDetailsDto* | |

