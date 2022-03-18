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
    * \param orderToken This is the id recieved from the qrcode *Required*
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
    * \param orderStatusDto  *Required*
    */
    Response<
            String
        >
    setStatus(
            
            OrderStatusDto orderStatusDto
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_OrderApi_H_ */