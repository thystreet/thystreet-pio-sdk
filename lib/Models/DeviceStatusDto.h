
/*
 * DeviceStatusDto.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_DeviceStatusDto_H_
#define TINY_CPP_CLIENT_DeviceStatusDto_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class DeviceStatusDto{
public:

    /*! \brief Constructor.
	 */
    DeviceStatusDto();
    DeviceStatusDto(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DeviceStatusDto();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Set current device availablity
	 */
	bool isAvailable();

	/*! \brief Set Set current device availablity
	 */
	void setAvailable(bool  available);
	/*! \brief Get Device ID
	 */
	std::string getDeviceId();

	/*! \brief Set Device ID
	 */
	void setDeviceId(std::string  deviceId);


    private:
    bool available{};
    std::string deviceId{};
};
}

#endif /* TINY_CPP_CLIENT_DeviceStatusDto_H_ */
