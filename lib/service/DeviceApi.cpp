#include "DeviceApi.h"

using namespace Tiny;



        Response<
            String
        >
        DeviceApi::
        generateToken(
            
            std::string deviceId
            
        )
        {
            std::string url = basepath + "/device/generate/{deviceId}"; //deviceId 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_deviceId("{");
                s_deviceId.append("deviceId");
                s_deviceId.append("}");

                int pos = url.find(s_deviceId);

                url.erase(pos, s_deviceId.length());
                url.insert(pos, stringify(deviceId));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();


            Response<String> response(output, httpCode);
            return response;
        }

        Response<
            String
        >
        DeviceApi::
        setDetails(
            
            SetDeviceDetailsDto setDeviceDetailsDto
            
        )
        {
            std::string url = basepath + "/device/details"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | setDeviceDetailsDto



            payload = setDeviceDetailsDto.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();


            Response<String> response(output, httpCode);
            return response;
        }

        Response<
            String
        >
        DeviceApi::
        setToken(
            
            DeviceTokenDto deviceTokenDto
            
        )
        {
            std::string url = basepath + "/device/token"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | deviceTokenDto



            payload = deviceTokenDto.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();


            Response<String> response(output, httpCode);
            return response;
        }



