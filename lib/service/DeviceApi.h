#ifndef TINY_CPP_CLIENT_DeviceApi_H_
#define TINY_CPP_CLIENT_DeviceApi_H_


#include "Response.h"
#include "Arduino.h"
#include "AbstractService.h"
#include "Helpers.h"
#include <list>

#include "DeviceTokenDto.h"
#include "SetDeviceDetailsDto.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class DeviceApi : public AbstractService {
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
    * .
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