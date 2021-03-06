#include "DeviceApi.h"

const char* ssid = "your wifi name"; // TODO Change wifi name
const char* password = "Your wifi password"; //TODO Change wifi password

const char* apiKey = "Thy Street API key"; // TODO Change wifi name
const char* apiSecret = "Thy Street API secret"; //TODO Change wifi password

void setup(){
    //Initialize serial and wait for port to open:
    Serial.begin(9600);
    delay(100);

    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    WiFi.begin(ssid, password);

    // attempt to connect to Wifi network:
    while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    // wait 1 second for re-trying
    delay(1000);
    }

    Serial.print("Connected to ");
    Serial.println(ssid);

    //Print LAN IP.
    Serial.print("IP address set: ");
    Serial.println(WiFi.localIP());

    Tiny::DeviceApi api;
    api.setAuthorization(apiKey, apiSecret);

    Tiny::SetDeviceDetailsDto ddDto;
    ddDto.setDeviceId("device-id");
    ddDto.setTariff(pdTRUE);
    auto resp = api.setDetails(ddDto);
    Serial.println(resp.code);
    Serial.println(resp.obj.c_str());
}

void loop(){}
