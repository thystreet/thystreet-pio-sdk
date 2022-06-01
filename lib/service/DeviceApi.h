#ifndef TINY_CPP_CLIENT_DeviceApi_H_
#define TINY_CPP_CLIENT_DeviceApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "DeviceTokenDto.h"
#include "SetDeviceDetailsDto.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class DeviceApi : public Service {
public:
    DeviceApi() = default;

    virtual ~DeviceApi() = default;

    /**
    * .
    *
    * 
    * \param deviceId  *Required*
    */
    Response<
            String
        >
    generateToken(
            
            std::string deviceId
            
    );
    /**
    * Toggle your device tariff when your device goes online using this api..
    *
    * 
    * \param setDeviceDetailsDto  *Required*
    */
    Response<
            String
        >
    setDetails(
            
            SetDeviceDetailsDto setDeviceDetailsDto
            
    );
    /**
    * .
    *
    * 
    * \param deviceTokenDto  *Required*
    */
    Response<
            String
        >
    setToken(
            
            DeviceTokenDto deviceTokenDto
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_DeviceApi_H_ */