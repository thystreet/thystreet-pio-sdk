
/*
 * DeviceTokenDto.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_DeviceTokenDto_H_
#define TINY_CPP_CLIENT_DeviceTokenDto_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class DeviceTokenDto{
public:

    /*! \brief Constructor.
	 */
    DeviceTokenDto();
    DeviceTokenDto(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DeviceTokenDto();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Device ID
	 */
	std::string getDeviceId();

	/*! \brief Set Device ID
	 */
	void setDeviceId(std::string  deviceId);
	/*! \brief Get Set device token 
	 */
	bool isToken();

	/*! \brief Set Set device token 
	 */
	void setToken(bool  token);


    private:
    std::string deviceId{};
    bool token{};
};
}

#endif /* TINY_CPP_CLIENT_DeviceTokenDto_H_ */
