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
            // Query    | 
            // Headers  | 
            // Form     | 
            // Body     | 

                std::string s_deviceId("{");
                s_deviceId.append("deviceId");
                s_deviceId.append("}");

                int pos = url.find(s_deviceId);

                url.erase(pos, s_deviceId.length());
                url.insert(pos, stringify(deviceId));

            begin(url);

            std::string payload = "";
            // Send Request
            // METHOD | GET
            int httpCode = http.sendRequest("GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = http.getString();
            std::string output_string = output.c_str();

            http.end();


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
            // Query    | 
            // Headers  | 
            // Form     | 
            // Body     | setDeviceDetailsDto


            begin(url);

            std::string payload = "";
            // Send Request
            // METHOD | PUT
            http.addHeader("Content-Type", "application/json");



            payload = setDeviceDetailsDto.toJson().dump();

            int httpCode = http.sendRequest("PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = http.getString();
            std::string output_string = output.c_str();

            http.end();


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
            // Query    | 
            // Headers  | 
            // Form     | 
            // Body     | deviceTokenDto


            begin(url);

            std::string payload = "";
            // Send Request
            // METHOD | PUT
            http.addHeader("Content-Type", "application/json");



            payload = deviceTokenDto.toJson().dump();

            int httpCode = http.sendRequest("PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = http.getString();
            std::string output_string = output.c_str();

            http.end();


            Response<String> response(output, httpCode);
            return response;
        }




