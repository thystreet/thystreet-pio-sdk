#include "OrderApi.h"

using namespace Tiny;



        Response<
            String
        >
        OrderApi::
        setStatus(
            
            OrderStatusDto orderStatusDto
            
        )
        {
            std::string url = basepath + "/order/status"; //
            // Query    | 
            // Headers  | 
            // Form     | 
            // Body     | orderStatusDto


            begin(url);

            std::string payload = "";
            // Send Request
            // METHOD | PUT
            http.addHeader("Content-Type", "application/json");



            payload = orderStatusDto.toJson().dump();

            int httpCode = http.sendRequest("PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = http.getString();
            std::string output_string = output.c_str();

            http.end();


            Response<String> response(output, httpCode);
            return response;
        }




