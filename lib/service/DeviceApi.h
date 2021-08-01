#ifndef TINY_CPP_CLIENT_DeviceApi_H_
#define TINY_CPP_CLIENT_DeviceApi_H_


#include "Response.h"
#include "Arduino.h"
#include "AbstractService.h"
#include "Helpers.h"
#include <list>

#include "DeviceStatusDto.h"
#include "DeviceTokenDto.h"

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
    * \param deviceTokenDto  *Required*
    */
    Response<
            String
        >
    setDeviceToken(
            
            DeviceTokenDto deviceTokenDto
            
    );
    /**
    * .
    *
    * 
    * \param deviceStatusDto  *Required*
    */
    Response<
            String
        >
    setStatus(
            
            DeviceStatusDto deviceStatusDto
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_DeviceApi_H_ */