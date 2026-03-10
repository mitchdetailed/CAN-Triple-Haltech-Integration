/*
 * user_code.c - All User Code should be applied here unless specified
 * otherwise.
 *
 */

 /* File Includes */
#include "user_code.h"
#include "backend_functions.h"
#include "haltech.h"
#include "main.h"
#include "snprintf.h"
#include "stm32g4xx_hal.h"
#include <string.h>

/* End File Includes */

/* Variable Declarations */

/* Startup Functions */

void events_Startup() {
  setupCANbus(CAN_1, 1000000, NORMAL_MODE); // Set up as Haltech CAN Bus
  setupCANbus(CAN_2, 1000000, NORMAL_MODE);
  setupCANbus(CAN_3, 1000000, NORMAL_MODE);
  setCAN_Termination(CAN_1, true);
  setCAN_Termination(CAN_2, true);
  setCAN_Termination(CAN_3, true);
  startCANbus(CAN_1);
  startCANbus(CAN_2);
  startCANbus(CAN_3);
  haltech_Events_Startup();
}

/* End Startup Functions */

//-----------------------------//
//-----------------------------//
//-----------------------------//

void onSerialReceive(uint8_t* serialMessage) {
  // What do you want to do when you receive a UART message.. ?
  // printf("%07.4f message received...\r\n",getTimestamp());
}

void onReceive(CAN_Message Message) {
  // What do you want to do when you receive a CAN message.. ?
  if (Message.Bus == CAN_1) {
  }

  if (Message.Bus == CAN_2) {
  }

  if (Message.Bus == CAN_3) {
  }

  if (Message.Bus == HALTECH_CAN) {
    haltech_CAN_Receive(Message);
  }
}

/* Run 2000Hz Functions here */
void events_2000Hz() 
{

}

/* Run 1000Hz Functions here */
void events_1000Hz() 
{

}

/* Run 500Hz Functions here */
void events_500Hz() 
{

}

/* Run 200Hz Functions here */
void events_200Hz() 
{

}

/* Run 100Hz Functions here */
void events_100Hz() 
{
  haltech_Events_100Hz();
}

/* Run 50Hz Functions here */
void events_50Hz() 
{
  haltech_Events_50Hz(); 
}

/* Run 20Hz Functions here */
void events_20Hz() 
{
  haltech_Events_20Hz(); 
}

/* Run 10Hz Functions here */
void events_10Hz() 
{
  haltech_Events_10Hz(); 
}
/* Run 5Hz Functions here */
void events_5Hz() 
{
  toggleLED(LED_1);
  haltech_Events_5Hz();
}

/* Run 2Hz Functions here */
void events_2Hz() 
{ 
  haltech_Events_2Hz(); 
}

/* Run 1Hz Functions here */
void events_1Hz() 
{ 
  haltech_Events_1Hz(); 
}
