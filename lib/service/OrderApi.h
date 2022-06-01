#ifndef TINY_CPP_CLIENT_OrderApi_H_
#define TINY_CPP_CLIENT_OrderApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "OrderStatusDto.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class OrderApi : public Service {
public:
    OrderApi() = default;

    virtual ~OrderApi() = default;

    /**
    * .
    *
    * 
    * \param orderToken This is the id recieved from the qrcode or on your webhook *Required*
    */
    Response<
            String
        >
    getOrderById(
            
            std::string orderToken
            
    );
    /**
    * .
    *
    * 
    * \param orderToken This is the id recieved from the qrcode or on your webhook *Required*
    * \param orderStatusDto  *Required*
    */
    Response<
            String
        >
    setStatus(
            
            std::string orderToken
            , 
            
            OrderStatusDto orderStatusDto
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_OrderApi_H_ */