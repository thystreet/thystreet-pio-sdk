
/*
 * OrderStatusDto.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_OrderStatusDto_H_
#define TINY_CPP_CLIENT_OrderStatusDto_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class OrderStatusDto{
public:

    /*! \brief Constructor.
	 */
    OrderStatusDto();
    OrderStatusDto(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~OrderStatusDto();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Order ID
	 */
	std::string getOrderId();

	/*! \brief Set Order ID
	 */
	void setOrderId(std::string  orderId);
	/*! \brief Get Set order status
	 */
	std::string getStatus();

	/*! \brief Set Set order status
	 */
	void setStatus(std::string  status);


    private:
    std::string orderId{};
    std::string status{};
};
}

#endif /* TINY_CPP_CLIENT_OrderStatusDto_H_ */
