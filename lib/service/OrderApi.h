#ifndef TINY_CPP_CLIENT_OrderApi_H_
#define TINY_CPP_CLIENT_OrderApi_H_


#include "Response.h"
#include "Arduino.h"
#include "AbstractService.h"
#include "Helpers.h"
#include <list>

#include "OrderStatusDto.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class OrderApi : public AbstractService {
public:
    OrderApi() = default;

    virtual ~OrderApi() = default;

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