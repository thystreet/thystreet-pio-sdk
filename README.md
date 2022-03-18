# Documentation for OpenAPI Petstore
This is a client generator for microcontrollers on the Espressif32 platform and the Arduino framework
After the client have been generated, you have to change these following variablies:
- root.cert | Provide your service root certificate.
- src/main.cpp | Change wifi name
- src/main.cpp | Change wifi password
- lib/service/AbstractService.h | Change to your url

# Documentation for Thy Street 0.0.2 Tiny client cpp (Arduino) 

The project is structured like this:
```
samples/client/petstore/tiny/cpp/
├── lib
│   ├── Models
│   ├── service
│   └── TestFiles
├── platformio.ini
├── pre_compiling_bourne.py
├── README.md
├── root.cert
├── src
│   └── main.cpp
└── test
    └── RunTests.cpp
```

All URIs are relative to https://cheffy-api.thystreet.comhttps://cheffy-api.thystreet.com/api/v1

### DeviceApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*generateToken* | *GET* /device/generate/{deviceId} | .|
|*setDetails* | *PUT* /device/details | .|
|*setToken* | *PUT* /device/token | .|

### OrderApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*getOrderById* | *GET* /order/params/{orderToken} | .|
|*setStatus* | *PUT* /order/status | .|


## What are the Model files for the data structures/objects?
|Class | Description|
|------------- | -------------|
|*DeviceTokenDto* | |
|*OrderStatusDto* | |
|*SetDeviceDetailsDto* | |


