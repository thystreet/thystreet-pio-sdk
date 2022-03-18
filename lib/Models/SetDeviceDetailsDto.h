
/*
 * SetDeviceDetailsDto.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_SetDeviceDetailsDto_H_
#define TINY_CPP_CLIENT_SetDeviceDetailsDto_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class SetDeviceDetailsDto{
public:

    /*! \brief Constructor.
	 */
    SetDeviceDetailsDto();
    SetDeviceDetailsDto(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~SetDeviceDetailsDto();


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
	/*! \brief Get Toggle device tariff on public page
	 */
	bool isTariff();

	/*! \brief Set Toggle device tariff on public page
	 */
	void setTariff(bool  tariff);


    private:
    std::string deviceId{};
    bool tariff{};
};
}

#endif /* TINY_CPP_CLIENT_SetDeviceDetailsDto_H_ */
