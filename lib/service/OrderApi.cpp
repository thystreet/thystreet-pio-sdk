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


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_orderToken("{");
                s_orderToken.append("orderToken");
                s_orderToken.append("}");

                int pos = url.find(s_orderToken);

                url.erase(pos, s_orderToken.length());
                url.insert(pos, stringify(orderToken));


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
        OrderApi::
        setStatus(
            
            std::string orderToken
            , 
            
            OrderStatusDto orderStatusDto
            
        )
        {
            std::string url = basepath + "/order/status/{orderToken}"; //orderToken 


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_orderToken("{");
                s_orderToken.append("orderToken");
                s_orderToken.append("}");

                int pos = url.find(s_orderToken);

                url.erase(pos, s_orderToken.length());
                url.insert(pos, stringify(orderToken));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | orderStatusDto



            payload = orderStatusDto.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();


            Response<String> response(output, httpCode);
            return response;
        }



