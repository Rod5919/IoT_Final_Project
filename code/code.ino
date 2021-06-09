#pragma region webcode
char webpageCode0[] =R"=====(
<!DOCTYPE html>
<html>
<title>Final Proyect IoT</title>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="icon" href="icon.png" type="image/x-icon">
<link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css">
<link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Raleway">
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
<style>
html,body,h1,h2,h3,h4,h5 {font-family: "Raleway", sans-serif}
</style>
<body class="w3-light-grey">

<!-- Top container -->
<div class="w3-bar w3-top w3-black w3-large" style="z-index:4">
  <button class="w3-bar-item w3-button w3-hide-large w3-hover-none w3-hover-text-light-grey" onclick="w3_open();"><i class="fa fa-bars"></i> &nbsp;Menu</button>
  <div class="w3-bar-item w3-right" style="display: flex; justify-content: space-between;">
	<span>)=====";
//Time
char webpageCode1[] =R"=====(
    </span>
  </div>
</div>

<!-- Sidebar/menu -->
<nav class="w3-sidebar w3-collapse w3-white w3-animate-left" style="z-index:3;width:300px;" id="mySidebar"><br>
  <div class="w3-container">
    <h5><i class="fa fa-microchip"></i> Interaction</h5>
  </div>
  <div class="w3-bar-block">
	  <div id = "toggleauto" onclick="toggle()">
      <!-- <a href="#" class="w3-bar-item w3-button w3-padding w3-green"><i class="fa fa-hand-stop-o fa-fw"></i>&nbsp; Manual</a> -->
      <a href="#" class="w3-bar-item w3-button w3-padding w3-blue"><i class="fa fa-power-off fa-fw"></i>&nbsp; Auto</a>
    </div>
	  <a id="status1" onclick="actuator(this.id)" href="#" class="w3-bar-item w3-button w3-padding"><i class="fa fa-lightbulb-o fa-fw"></i>&nbsp; Light 1</a>
	  <a id="status2" onclick="actuator(this.id)" href="#" class="w3-bar-item w3-button w3-padding"><i class="fa fa-lightbulb-o fa-fw"></i>&nbsp; Light 2</a>
	  <a id="status3" onclick="actuator(this.id)" href="#" class="w3-bar-item w3-button w3-padding"><i class="fa fa-snowflake-o fa-fw"></i>&nbsp; Air conditioned</a>
	  <a id="status4" onclick="actuator(this.id)" href="#" class="w3-bar-item w3-button w3-padding"><i class="fa fa-fire fa-fw"></i>&nbsp; Heater</a>
)=====";
//Buttons
char webpageCode2[] =R"=====(
	  <img src="../../assets/UCB_logo.png" alt="UCB logo" style="height: 10rem ;">	
    <!-- <a target="_blank" href="https://www.booked.net/weather/la-paz-13481"><img src="https://w.bookcdn.com/weather/picture/21_13481_1_1_3658db_250_2a48ba_ffffff_ffffff_1_2071c9_ffffff_0_6.png?scode=124&domid=w209&anc_id=33716" alt="booked.net"/></a>weather widget end -->
  </div>
</nav>


<!-- Overlay effect when opening sidebar on small screens -->
<div class="w3-overlay w3-hide-large w3-animate-opacity" onclick="w3_close()" style="cursor:pointer" title="close side menu" id="myOverlay"></div>

<!-- !PAGE CONTENT! -->
<div class="w3-main" style="margin-left:300px;margin-top:43px;">

  <!-- Header -->
  <header class="w3-container" style="padding-top:22px">
    <h5><b><i class="fa fa-cloud"></i> Enviroment Control</b></h5>
  </header>

  <div class="w3-row-padding w3-margin-bottom">
    <div class="w3-quarter">
      <div class="w3-container w3-red w3-padding-16">
        <div class="w3-left"><i class="fa fa-user w3-xxxlarge"></i></div>
        <div class="w3-right">
          <h3>)=====";
//People
char webpageCode3[] =R"=====(
          </h3>
        </div>
        <div class="w3-clear"></div>
        <h4>People</h4>
      </div>
    </div>
    <div class="w3-quarter">
      <div class="w3-container w3-blue w3-padding-16">
        <div class="w3-left"><i class="fa fa-sun-o w3-xxxlarge"></i></div>
        <div class="w3-right">
          <h3>30°C</h3>
        </div>
        <div class="w3-clear"></div>
        <h4>Weather</h4>
      </div>
    </div>
    <div class="w3-quarter">
      <div class="w3-container w3-teal w3-padding-16">
        <div class="w3-left"><i class="fa fa-thermometer-1 w3-xxxlarge"></i></div>
        <div class="w3-right">
          <h3>)=====";
// Temperature sensor
char webpageCode4[] =R"=====(
          </h3>
        </div>
        <div class="w3-clear"></div>
        <h4>Temperature</h4>
      </div>
    </div>
    <div class="w3-quarter">
      <div class="w3-container w3-orange w3-text-white w3-padding-16">
        <div class="w3-left"><i class="fa fa-wifi w3-xxxlarge"></i></div>
        <div class="w3-right">
          <h3>)=====";
// Wifi Stength
char webpageCode5[] =R"=====(
          </h3>
        </div>
        <div class="w3-clear"></div>
        <h4>Wifi signal</h4>
      </div>
    </div>
  </div>

  <div class="w3-panel">
    <div class="w3-row-padding" style="margin:0 -16px">
      <div class="w3-twothird">
        <h5><i class="fa fa-home fa-fw"></i>Home status</h5>
        <table class="w3-table w3-striped w3-white">
          <tr>
            <td><i class="fa fa-lightbulb-o w3-text-green w3-large"></i></td>
            <td>Light 1</td>)=====";
//<td id="state1"><i class="fa fa-toggle-off"></i></td>
char webpageCode6[] =R"=====(
          </tr>
          <tr>
            <td><i class="fa fa-lightbulb-o w3-text-yellow w3-large"></i></td>
            <td>Light 2</td>)=====";
//<td id="state2"><i class="fa fa-toggle-off"></td>
char webpageCode7[] =R"=====(
          </tr>
          <tr>
            <td><i class="fa fa-snowflake-o w3-text-blue w3-large"></i></td>
            <td>Air conditioned</td>)=====";
//<td id="state3"><i class="fa fa-toggle-off"></i></td>
char webpageCode8[] =R"=====(
          </tr>
          <tr>
            <td><i class="fa fa-fire w3-text-red w3-large"></i></td>
            <td>Heater</td>)=====";
//<td id="state4"><i class="fa fa-toggle-off"></i></td>
char webpageCode9[] =R"=====(
          </tr>
        </table>
      </div>
    </div>
  </div>
  <hr>
  <div class="w3-container">

  <!-- Footer -->
  <footer class="w3-container w3-padding-16 w3-light-grey" >
    <h4>AUTHOR</h4>
    <a href="mailto:sergio.fernandez@ucb.edu.bo" target="_blank"><i class="fa fa-envelope fa-fw"></i> Sergio Fernandez</a>
  </footer>

  <!-- End page content -->
</div>

<script>
// Get the Sidebar
var mySidebar = document.getElementById("mySidebar");

// Get the DIV with overlay effect
var overlayBg = document.getElementById("myOverlay");

// Toggle between showing and hiding the sidebar, and add overlay effect
function w3_open() {
  if (mySidebar.style.display === 'block') {
    mySidebar.style.display = 'none';
    overlayBg.style.display = "none";
  } else {
    mySidebar.style.display = 'block';
    overlayBg.style.display = "block";
  }
}

// Close the sidebar with the close button
function w3_close() {
  mySidebar.style.display = "none";
  overlayBg.style.display = "none";
}
let manual = ['<a href="#" class="w3-bar-item w3-button w3-padding w3-green"><i class="fa fa-hand-stop-o fa-fw"></i>&nbsp; Manual</a>', '<a href="#" class="w3-bar-item w3-button w3-padding w3-blue"><i class="fa fa-power-off fa-fw"></i>&nbsp; Auto</a>']
let flag = 0;
var sts = {'status1': ['state1',0],
           'status2': ['state2',0],
           'status3': ['state3',0],
           'status4': ['state4',0]
}

function onoff(x){
  if(x){
    return '<i class="fa fa-toggle-on">';
    }
  else{
    return '<i class="fa fa-toggle-off">';
  }
}

function actuator(clicked_id){
  if(flag){
    document.getElementById(sts[clicked_id][0]).innerHTML = onoff(sts[clicked_id][1]);
    sts[clicked_id][1] += 1;
    sts[clicked_id][1] %= 2;
  }
}

var toggle = function(){
  var attribute = this.id;
  document.getElementById('toggleauto').innerHTML = manual[flag];
  flag +=1;
  flag %= 2;
}

</script>
</body>
</html>
)=====";
#pragma endregion webcode

//============================================
//ESP8266 Web Server (HTML + CSS + JavaScript)
//============================================
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#include <ESP8266WiFi.h>
//------------------------------------------
// OTA Variables
#ifndef STASSID
#define STASSID "Fernandez"
#define STAPSK  "sparkie5919"
#endif
#define BLYNK_PRINT Serial
//------------------------------------------
WiFiServer server(80);
const char* ssid = "Fernandez";
const char* password = "sparkie5919";
//------------------------------------------
void otaconnect();
void otaconnect(){
  Serial.println("Booting");
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    Serial.println("Connection Failed! Rebooting...");
    delay(5000);
    ESP.restart();
  }

  ArduinoOTA.onStart([]() {
    String type;
    if (ArduinoOTA.getCommand() == U_FLASH) {
      type = "sketch";
    } else { // U_FS
      type = "filesystem";
    }

    // NOTE: if updating FS this would be the place to unmount FS using FS.end()
    Serial.println("Start updating " + type);
  });
  ArduinoOTA.onEnd([]() {
    Serial.println("\nEnd");
  });
  ArduinoOTA.onProgress([](unsigned int progress, unsigned int total) {
    Serial.printf("Progress: %u%%\r", (progress / (total / 100)));
  });
  ArduinoOTA.onError([](ota_error_t error) {
    Serial.printf("Error[%u]: ", error);
    if (error == OTA_AUTH_ERROR) {
      Serial.println("Auth Failed");
    } else if (error == OTA_BEGIN_ERROR) {
      Serial.println("Begin Failed");
    } else if (error == OTA_CONNECT_ERROR) {
      Serial.println("Connect Failed");
    } else if (error == OTA_RECEIVE_ERROR) {
      Serial.println("Receive Failed");
    } else if (error == OTA_END_ERROR) {
      Serial.println("End Failed");
    }
  });
  ArduinoOTA.begin();
  Serial.println("Ready");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

//=================================================================
void setup()
{
  otaconnect();
  WiFi.begin(ssid, password);  
  while (WiFi.status() != WL_CONNECTED)
    delay(500);
  server.begin();                         
}
//=================================================================
void loop()
{
  ArduinoOTA.handle();
  WiFiClient client = server.available();  
  if (!client) {
    return;
  }

  // Espera hasta que el cliente envía alguna petición  while(!client.available()){
    delay(1);
  }

  // Lee la petición
  String peticion = client.readStringUntil('\r');  client.flush();
  client.println("HTTP/1.1 200 OK");
  client.println("");
  Client.println(webpageCode0);
  Client.println(webpageCode1);
  Client.println(webpageCode2);
  Client.println(webpageCode3);
  Client.println(webpageCode4);
  Client.println(webpageCode5);
  Client.println(webpageCode6);
  Client.println(webpageCode7);
  Client.println(webpageCode8);
}
