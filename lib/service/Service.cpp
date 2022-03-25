#include "Service.h"
#include "Arduino.h"

void Tiny::Service::begin(std::string url){
    http.begin(String(url.c_str()), test_root_ca); //HTTPS connection


    // reset params
    queryParams.begin();
    formParams.begin();
}

void Tiny::Service::setAuthorization(const char *username, const char *password)
{
    http.setAuthorization(username, password);
}

void Tiny::Service::addHeader(std::string key, std::string value){
    _customheaders.push_back(std::make_tuple(key, value));
}

void Tiny::Service::addQueryParam(std::string key, std::string value){
    formParams.push_back(std::make_tuple(key, value));
}

void Tiny::Service::addFormParam(std::string key, std::string value){
    formParams.push_back(std::make_tuple(key, value));
}

int Tiny::Service::sendRequest(std::string url, const char * type, uint8_t * payload, size_t size){
    this->url = url;
    prepareRequest();

    begin(this->url);

    if(!_customheaders.empty()) {
        for (auto const& tuple : this->_customheaders) {
            http.addHeader(String(std::get<0>(tuple).c_str()), String(std::get<1>(tuple).c_str()));
        }
    }
    _customheaders.begin();

    int httpCode = http.sendRequest(type, payload, size);
    return httpCode;
}

void Tiny::Service::prepareRequest(){
    if (!queryParams.empty()){
        this->url += "?" + encodeKeyValueTuple(this->queryParams);
    }

    if (!formParams.empty()){
        this->payload = encodeKeyValueTuple(this->formParams);
    }
}

std::string Tiny::Service::encodeKeyValueTuple(std::list<std::tuple<std::string, std::string>> params){
    std::string encoded = "";
    for (auto const& tuple : params) {
        encoded += std::get<0>(tuple) + "=" + std::get<1>(tuple) + "&";
    }

    // Remove last '&' char from url
    if (! encoded.empty())
        encoded.pop_back();

    return encoded;
}


String Tiny::Service::getResponseBody(){
    String respBody = http.getString();
    http.end();
    return respBody;
}

