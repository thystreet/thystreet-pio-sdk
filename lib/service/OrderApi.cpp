#include "OrderApi.h"

using namespace Tiny;



        Response<
            String
        >
        OrderApi::
        getOrderById(
            
            std::string orderToken
            
        )
        {
            std::string url = basepath + "/order/params/{orderToken}"; //orderToken 
            // Query    | 
            // Headers  | 
            // Form     | 
            // Body     | 

                std::string s_orderToken("{");
                s_orderToken.append("orderToken");
                s_orderToken.append("}");

                int pos = url.find(s_orderToken);

                url.erase(pos, s_orderToken.length());
                url.insert(pos, stringify(orderToken));

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




