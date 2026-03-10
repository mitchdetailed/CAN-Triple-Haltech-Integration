#ifndef HALTECH_H
#define HALTECH_H

#include "backend_functions.h"
#include <stdint.h>

// Uncomment what peripherals you want to use //

#define HALTECH_CAN CAN_1
//#define ENABLE_ECU
//#define ENABLE_IO12A
//#define ENABLE_IO12B
//#define ENABLE_IO16A
//#define ENABLE_IO16B
//#define ENABLE_PD16A
//#define ENABLE_PD16B
//#define ENABLE_PD16C
//#define ENABLE_PD16D
//#define ENABLE_TCA4A
//#define ENABLE_TCA4B
//#define ENABLE_TCA2A
//#define ENABLE_TCA2B
//#define ENABLE_TMS4



// 3rd Party CAN Implementations
#define THIRDPARTYCAN CAN_3




#ifdef ENABLE_ECU
typedef struct {
  float Absolute_Humidity_gm3;
  float Accel_Pedal_Position_percent;
  float Air_Temperature_degC;
  float Ambient_Air_Temperature_degC;
  float Aux_1_Fuel_Pump_Duty_percent;
  float Aux_2_Fuel_Pump_Duty_percent;
  float Aux_3_Fuel_Pump_Duty_percent;
  float Barometric_Pressure_kPa;
  float Battery_Voltage_v;
  float Boost_Control_Output_percent;
  float Brake_Pressure_Front_Ratio_percent;
  float Brake_Pressure_Rear_Ratio_percent;
  float Brake_Pressure_Rear_kPa;
  float Brake_Pressure_Front_kPa;
  float Calculated_Air_Temp_degC;
  float Coolant_Pressure_kPa;
  float Coolant_Temperature_degC;
  float Crankcase_Pressure_kPa;
  float Cruise_Error_kmh;
  float Cruise_Last_Target_kmh;
  float Cruise_Target_kmh;
  float Cut_Percentage_percent;
  float Damper_FL_Raw_mm;
  float Damper_FL_mm;
  float Damper_FR_Raw_mm;
  float Damper_FR_mm;
  float Damper_RL_Raw_mm;
  float Damper_RL_mm;
  float Damper_RR_Raw_mm;
  float Damper_RR_mm;
  float Diff_Oil_Temperature_degC;
  float ECU_Temperature_degC;
  float EGT_10_degC;
  float EGT_11_degC;
  float EGT_12_degC;
  float EGT_1_degC;
  float EGT_2_degC;
  float EGT_3_degC;
  float EGT_4_degC;
  float EGT_5_degC;
  float EGT_6_degC;
  float EGT_7_degC;
  float EGT_8_degC;
  float EGT_9_degC;
  float Engine_Demand_percent;
  float Exh_Cam_Angle_1_deg;
  float Exh_Cam_Angle_2_deg;
  float Exhuast_Manifold_Pressure_kPa;
  float FL_TPMS_Voltage_v;
  float FL_Tire_Pressure_kPa;
  float FR_TPMS_Voltage_v;
  float FR_Tire_Pressure_kPa;
  float Front_Tire_Pres_Target_kPa;
  float Fuel_Composition_percent;
  float Fuel_Level_liters;
  float Fuel_Pressure_kPa;
  float Fuel_Temperature_degC;
  float Gearbox_Line_Pressure_kPa;
  float Gearbox_Oil_Temperature_degC;
  float Generic_Output_1_DC_percent;
  float Generic_Sensor_10;
  float Generic_Sensor_1;
  float Generic_Sensor_2;
  float Generic_Sensor_3;
  float Generic_Sensor_4;
  float Generic_Sensor_5;
  float Generic_Sensor_6;
  float Generic_Sensor_7;
  float Generic_Sensor_8;
  float Generic_Sensor_9;
  float Ignition_Angle_Bank_1_deg;
  float Ignition_Angle_Bank_2_deg;
  float Ignition_Angle_deg;
  float Inj_Differential_Pressure_kPa;
  float Inj_Stage_3_DC_percent;
  float Inj_Stage_4_DC_percent;
  float Inj_Stg_1_DC_percent;
  float Inj_Stg_2_DC_percent;
  float Injection_Stage_1_Avg_Pulsewidth_ms;
  float Injection_Stage_2_Avg_Pulsewidth_ms;
  float Injection_Stage_3_Avg_Pulsewidth_ms;
  float Injection_Stage_4_Avg_Pulsewidth_ms;
  float Int_Cam_Angle_1_deg;
  float Int_Cam_Angle_2_deg;
  float Knock_Level_1_db;
  float Knock_Level_2_db;
  float LTFT_Bank_1_percent;
  float LTFT_Bank_2_percent;
  float Lambda_10;
  float Lambda_11;
  float Lambda_12;
  float Lambda_1;
  float Lambda_2;
  float Lambda_3;
  float Lambda_4;
  float Lambda_5;
  float Lambda_6;
  float Lambda_7;
  float Lambda_8;
  float Lambda_9;
  float Lambda_Bank_1;
  float Lambda_Bank_2;
  float Lambda_Overall;
  float Lateral_G_ms2;
  float Launch_Control_Fuel_Enrich_percent;
  float Launch_Control_Ignition_Retard_deg;
  float Longitudinal_G_ms2;
  float Manifold_Pressure_kPa;
  float No2_Pressure_Sensor_1_kPa;
  float No2_Pressure_Sensor_2_kPa;
  float No2_Pressure_Sensor_3_kPa;
  float No2_Pressure_Sensor_4_kPa;
  float Oil_Pressure_kPa;
  float Oil_Temperature_degC;
  float Pitch_Rate_degsec;
  float Primary_Fuel_Pump_Duty_percent;
  float RL_TPMS_Voltage_v;
  float RL_Tire_Pressure_kPa;
  float RR_TPMS_Voltage_v;
  float RR_Tire_Pressure_kPa;
  float Rear_Tire_Pres_Target_kPa;
  float Relative_Humidity_percent;
  float Roll_Rate_degsec;
  float STFT_Bank_1_percent;
  float STFT_Bank_2_percent;
  float Steering_Wheel_Angle;
  float Target_Boost_Level_kPa;
  float Target_Lambda;
  float Throttle_Position_percent;
  float TqMgmt_Combined_Ign_Corr_deg;
  float TqMgmt_DS_Target_Err_Ign_Corr_deg;
  float TqMgmt_DS_Timed_Ign_Corr_deg;
  float Turbo_Speed_Sensor_2_rpm;
  float Vehicle_Speed_kmh;
  float Vertical_G_ms2;
  float Wastegate_Pressure_kPa;
  float Water_Inj_Adv_Solenoid_Duty_percent;
  float Wheel_Diff_kmh;
  float Wheel_Slip_kmh;
  float Wheel_Speed_FL_kmh;
  float Wheel_Speed_FR_kmh;
  float Wheel_Speed_RL_kmh;
  float Wheel_Speed_RR_kmh;
  float Yaw_Rate_degsec;
  int32_t Fuel_Used_Since_Trip1_Reset;
  int32_t TqMgmt_DS_Error_rpm;
  int32_t TqMgmt_DS_Target_rpm;
  int32_t Trip_Meter_1;
  uint32_t Race_Timer_ms;
  uint32_t Specific_Humidity_ppm;
  uint32_t Total_Fuel_Used_cc;
  uint32_t Turbo_Speed_Sensor_1_rpm;
  int16_t Brake_Pressure_Difference_kPa;
  uint16_t Cruise_Control_Input_State : 9;
  uint16_t Driveshaft_rpm;
  uint16_t Engine_Limiter_Max_rpm;
  uint16_t Engine_Protection_DTC;
  uint16_t Engine_Speed_rpm;
  uint16_t FL_Tire_Temp_degC;
  uint16_t FR_Tire_Temp_degC;
  uint16_t Fuel_Flow_Return_ccmin;
  uint16_t Fuel_Flow_ccmin;
  uint16_t Launch_Control_End_rpm;
  uint16_t RL_Tire_Temp_degC;
  uint16_t RR_Tire_Temp_degC;
  uint16_t Trigger_Sync_Level;
  uint16_t Trigger_System_Error_Count;
  uint16_t Trigger_Counter;
  int8_t Exhaust_Cutout_State : 4;
  int8_t Gear : 5;
  int8_t Gear_Selector_Position : 5;
  int8_t Generic_Open_Loop_Motor_1_State : 4;
  int8_t Generic_Open_Loop_Motor_2_State : 4;
  int8_t Generic_Open_Loop_Motor_3_State : 4;
  int8_t Nitrous_Bottle_Opener_State : 4;
  int8_t Rotary_Trimpot_1 : 5;
  int8_t Rotary_Trimpot_2 : 5;
  int8_t Rotary_Trimpot_3 : 5;
  int8_t TqMgmt_Knob : 5;
  uint8_t ABS_Active : 1;
  uint8_t ABS_Armed : 1;
  uint8_t ABS_Error : 1;
  uint8_t Aircon_Output : 1;
  uint8_t Aircon_Request : 1;
  uint8_t Antilag_Output_State : 1;
  uint8_t Antilag_Switch_State : 1;
  uint8_t Aux_1_Fuel_Pump_Output_State : 1;
  uint8_t Aux_2_Fuel_Pump_Output_State : 1;
  uint8_t Aux_3_Fuel_Pump_Output_State : 1;
  uint8_t Aux_RPM_Limiter_Active : 1;
  uint8_t Battery_Light_Active : 1;
  uint8_t Brake_Pedal_Switch : 1;
  uint8_t Check_Engine_Light : 1;
  uint8_t Clutch_Switch : 1;
  uint8_t Cruise_Controller_State : 3;
  uint8_t Cut_Percentage_Function : 7;
  uint8_t Cut_Percentage_Method : 2;
  uint8_t Decel_Cut_Active : 1;
  uint8_t Engine_Limiter_Function : 7;
  uint8_t Engine_Limiter_Method : 2;
  uint8_t Engine_Limiting_Active : 1;
  uint8_t Engine_Protection_Level : 2;
  uint8_t FL_Tire_Leaking : 1;
  uint8_t FR_Tire_Leaking : 1;
  uint8_t Flat_Shift_Switch : 1;
  uint8_t Gear_Switch : 1;
  uint8_t Generic_Output_10_State : 1;
  uint8_t Generic_Output_11_State : 1;
  uint8_t Generic_Output_12_State : 1;
  uint8_t Generic_Output_13_State : 1;
  uint8_t Generic_Output_14_State : 1;
  uint8_t Generic_Output_15_State : 1;
  uint8_t Generic_Output_16_State : 1;
  uint8_t Generic_Output_17_State : 1;
  uint8_t Generic_Output_18_State : 1;
  uint8_t Generic_Output_19_State : 1;
  uint8_t Generic_Output_1_State : 1;
  uint8_t Generic_Output_20_State : 1;
  uint8_t Generic_Output_2_State : 1;
  uint8_t Generic_Output_3_State : 1;
  uint8_t Generic_Output_4_State : 1;
  uint8_t Generic_Output_5_State : 1;
  uint8_t Generic_Output_6_State : 1;
  uint8_t Generic_Output_7_State : 1;
  uint8_t Generic_Output_8_State : 1;
  uint8_t Generic_Output_9_State : 1;
  uint8_t HandBrake_State : 1;
  uint8_t Head_Light_State : 1;
  uint8_t High_Beam_Light_State : 1;
  uint8_t Ignition_Switch : 1;
  uint8_t Launch_Control_Active : 1;
  uint8_t Launch_Control_Switch : 1;
  uint8_t Left_Indicator_State : 1;
  uint8_t Neutral_Switch : 1;
  uint8_t Nitrous_Enable_1_Output_State : 1;
  uint8_t Nitrous_Enable_1_Switch_State : 1;
  uint8_t Nitrous_Enable_2_Output_State : 1;
  uint8_t Nitrous_Enable_2_Switch_State : 1;
  uint8_t Nitrous_Enable_3_Output_State : 1;
  uint8_t Nitrous_Enable_3_Switch_State : 1;
  uint8_t Nitrous_Enable_4_Output_State : 1;
  uint8_t Nitrous_Enable_4_Switch_State : 1;
  uint8_t Nitrous_Override_1_Output_State : 1;
  uint8_t Nitrous_Override_1_Switch_State : 1;
  uint8_t Nitrous_Override_2_Output_State : 1;
  uint8_t Nitrous_Override_2_Switch_State : 1;
  uint8_t Nitrous_Override_3_Output_State : 1;
  uint8_t Nitrous_Override_3_Switch_State : 1;
  uint8_t Nitrous_Override_4_Output_State : 1;
  uint8_t Nitrous_Override_4_Switch_State : 1;
  uint8_t Nitrous_Stage_1_Output : 1;
  uint8_t Nitrous_Stage_2_Outout : 1;
  uint8_t Nitrous_Stage_3_Output : 1;
  uint8_t Nitrous_Stage_4_Outout : 1;
  uint8_t Nitrous_Stage_5_Outout : 1;
  uint8_t Nitrous_Stage_6_Output : 1;
  uint8_t Oil_Pressure_Light : 1;
  uint8_t Park_Light_State : 1;
  uint8_t Pit_Limiter_Active : 1;
  uint8_t Pit_Limiter_Error : 1;
  uint8_t Pit_Limiter_Switch_State : 1;
  uint8_t Primary_Fuel_Pump_Output_State : 1;
  uint8_t RL_Tire_Leaking : 1;
  uint8_t RPM_Limiter_Function : 7;
  uint8_t RPM_Limiter_Method : 2;
  uint8_t RR_Tire_Leaking : 1;
  uint8_t Reverse_Switch : 1;
  uint8_t Right_Indicator_State : 1;
  uint8_t Rolling_Antilag_Switch_State : 1;
  uint8_t ThermoFan_1_On : 1;
  uint8_t ThermoFan_2_On : 1;
  uint8_t ThermoFan_3_On : 1;
  uint8_t ThermoFan_4_On : 1;
  uint8_t Torque_Reduction_Active : 1;
  uint8_t Traction_Control_Active : 1;
  uint8_t Traction_Control_Enabled : 1;
  uint8_t Traction_Control_Light : 1;
  uint8_t Traction_Control_Switch_State : 1;
  uint8_t Transient_Throttle_Active : 1;
  uint8_t Turbo_Timer_Eng_Sec_Remaining;
  uint8_t Turbo_Timer_Sec_Remaining;
  uint8_t Water_Inj_Adv_Enable_Out_State : 1;
  uint8_t Water_Inj_Adv_Enable_Sw_State : 1;
  uint8_t Water_Inj_Adv_Out_State : 1;
  uint8_t Water_Inj_Adv_Override_Out_State : 1;
  uint8_t Water_Inj_Adv_Override_Sw_State : 1;
} HaltechECUSignals_t;
#endif

#if defined(ENABLE_IO16A) || defined(ENABLE_IO16B) || defined(ENABLE_PD16A) || defined(ENABLE_PD16B) || defined(ENABLE_PD16C) || defined(ENABLE_PD16D) || defined(ENABLE_IO12A) || defined(ENABLE_IO12B)
/* AVI INPUTS IO16 | IO12 | PD16 */
typedef enum {
  ENUM_AVI_PULLUP_OFF = 0,
  ENUM_AVI_PULLUP_1K = 1,
  ENUM_AVI_PULLUP_240 = 2
} AVI_Pullup_t;

typedef enum {
  ENUM_HB_ACTIVE_STATE_LOW = 0,
  ENUM_HB_ACTIVE_STATE_HIGH = 1
} ActiveState_t;

#endif
#if defined(ENABLE_IO16A) || defined(ENABLE_IO16B) || defined(ENABLE_PD16A) || defined(ENABLE_PD16B) || defined(ENABLE_PD16C) || defined(ENABLE_PD16D)
typedef struct {
  uint16_t Voltage_mV;
  uint16_t SwitchOff_Threshold_mV;
  uint16_t SwitchOn_Threshold_mV;
  AVI_Pullup_t Pullup : 2;
  uint8_t State : 1;
} AVI_Signal_t;
/* End AVI INPUTS */

/* HB OUTPUTS  IO16 | PD16 */
typedef enum {
  ENUM_HB_RETRIES_NEVER = 0,
  ENUM_HB_RETRIES_1 = 1,
  ENUM_HB_RETRIES_2 = 2,
  ENUM_HB_RETRIES_5 = 3,
  ENUM_HB_RETRIES_10 = 4,
  ENUM_HB_RETRIES_20 = 5,
  ENUM_HB_RETRIES_30 = 6,
  ENUM_HB_RETRIES_INDEFINITE = 7
} Enum_Retries_t;


typedef enum {
  HB_CONTROL_METHOD_DUTY_CYCLE = 0,
  HB_CONTROL_METHOD_CURRENT = 1
} HB_ControlMethod_t;

typedef enum {
  PINSTATE_OPERATIONAL = 0,
  PINSTATE_HIGHCURRENT = 1,
  PINSTATE_OVERCURRENT = 2,
  PINSTATE_SHORTCIRCUIT = 3,
  PINSTATE_OPENCIRCUIT = 4
} PinState_t;

typedef enum {
  HB_DRIVE_TYPE_UNDEFINED = 0,
  HB_DRIVE_TYPE_HIGHSIDE = 1,
  HB_DRIVE_TYPE_LOWSIDE = 2,
  HB_DRIVE_TYPE_OPEN_CIRCUIT = 3
} DriveType_t;

typedef enum {
  HB_SAFE_STATE_INACTIVE = 0,
  HB_SAFE_STATE_ACTIVE = 1,
  HB_SAFE_STATE_OPEN_CIRCUIT = 2,
  HB_SAFE_STATE_UNDEFINED = 3
} SafeState_t;

typedef struct {
  float Duty_Cycle_CMD_percent;
  uint16_t HS_Current_mA;
  uint16_t LS_Current_mA;
  uint16_t Voltage_mV;
  uint16_t FuseCurrent_mA;
  uint16_t Frequency_Hz : 14;
  SafeState_t SafeState : 2;
  uint8_t RetryDelay_s;
  uint8_t RetryCount : 5;
  Enum_Retries_t RetriesAllotted : 3;
  PinState_t PinState : 3;
  ActiveState_t ActiveState : 1;
  HB_ControlMethod_t ControlMethod : 1;
  DriveType_t DriveType : 2;
} HB_Signal_t;
/* End HB OUTPUTS */

/* SPI INPUTS IO16 | PD16 */
typedef enum {
  SPI_EDGE_DETECT_RISING = 0,
  SPI_EDGE_DETECT_FALLING = 1
} SPI_EdgeDetect_t;

typedef enum {
  ENUM_SPI_SENSOR_PULLUP_DISABLED = 0,
  ENUM_SPI_SENSOR_PULLUP_ENABLED = 1
} SPI_Pullup_t;

typedef enum {
  ENUM_SPI_SENSORTYPE_RELUCTOR = 0,
  ENUM_SPI_SENSORTYPE_HALL = 1,
  ENUM_SPI_SENSORTYPE_CUSTOM = 2
} SPI_SensorType_t;

typedef struct {
  float Duty_Cycle_percent;
  uint16_t UpperThreshold_mV;
  uint16_t Voltage_mV;
  uint16_t Frequency_Hz : 14;
  uint8_t State : 1;
  SPI_EdgeDetect_t EdgeDetect : 1;
  uint16_t Glitchfilter : 9;
  SPI_Pullup_t Pullup : 1;
  SPI_SensorType_t SensorType : 2;
} SPI_Signal_t;

/* End SPI INPUTS */

/* IO16 Device config */

typedef enum {
  ENUM_CANPOWER_DISABLED = 0,
  ENUM_CANPOWER_ENABLED = 1 
} CANPower_t;

typedef enum {
  ENUM_CANTERMINATION_DISABLED = 0,
  ENUM_CANTERMINATION_ENABLED = 1
} CANTermination_t;

typedef enum {
  ENUM_TEMPERATURE_NORMAL = 0,
  ENUM_TEMPERATURE_HIGH = 1,
  ENUM_TEMPERATURE_SHUTDOWN = 2
} Temperature_Enum_t;
#endif

#if defined(ENABLE_IO16A) || defined(ENABLE_IO16B) 
typedef struct {
  AVI_Signal_t AVI_1;
  AVI_Signal_t AVI_2;
  AVI_Signal_t AVI_3;
  AVI_Signal_t AVI_4;
  AVI_Signal_t AVI_5;
  AVI_Signal_t AVI_6;
  HB_Signal_t HBO_1;
  HB_Signal_t HBO_2;
  HB_Signal_t HBO_3;
  HB_Signal_t HBO_4;
  HB_Signal_t HBO_5;
  HB_Signal_t HBO_6;
  SPI_Signal_t SPI_1;
  SPI_Signal_t SPI_2;
  SPI_Signal_t SPI_3;
  SPI_Signal_t SPI_4;
  uint16_t Battery_Voltage_mV;
  uint16_t Boost_Voltage_mV;
  uint16_t ECR_Plug_Voltage_mV;
  uint16_t MainRail_Voltage_mV;
  uint16_t OnTime_s;
  uint16_t ProtectedRail_Voltage_mV;
  uint16_t SEPIC_Voltage_mV;
  uint16_t ECR_Plug_Current_mA;
  uint16_t SensorGround_Voltage_mV;
  uint16_t TenVolt_Rail_Voltage_mV;
  uint16_t UVLO_Voltage_mV;
  uint16_t VDD_Voltage_mV;
  uint16_t TotalCurrent_mA;
  uint8_t Serial[12];
  uint8_t Message[8];
  uint8_t Thermistor1_Temp_C;
  uint8_t Thermistor2_Temp_C;
  uint8_t Thermistor3_Temp_C;
  uint8_t FW_Minor;
  uint8_t FW_Release;
  uint8_t FW_Bugfix;
  uint8_t MainRail_Temperature_C;
  uint8_t CPU_Temperature_C;
  uint8_t Counter;
  uint8_t FW_Boot_Version : 5;
  uint8_t FW_Major : 2;
  uint8_t ID_Conflict : 1;
  uint8_t Status : 4;
  Temperature_Enum_t MainRail_Temp_enum : 2;
  Temperature_Enum_t TVS_Temp_Enum : 2;
  uint8_t Ignition_Status : 1;
  CANPower_t CANPower : 1;
  CANTermination_t CANTermination : 1;
  uint8_t ECR_Status : 1;
  uint8_t USB_Connected : 1;
} IO16Config_t;
#endif

#if defined(ENABLE_PD16A) || defined(ENABLE_PD16B) || defined(ENABLE_PD16C) || defined(ENABLE_PD16D)
/* HC8 Outputs PD16*/
typedef struct {
  float Duty_Cycle_CMD_percent;
  uint16_t Voltage_mV;
  uint16_t FuseCurrent_mA; 
  uint16_t Current_mA; 
  uint8_t Load_Percent; 
  uint8_t RetryDelay_s; 
  uint16_t Frequency_Hz : 14; 
  Temperature_Enum_t Temp_Enum : 2;
  uint8_t RetryCount : 5; 
  PinState_t PinState : 3; 
  Enum_Retries_t RetriesAllotted : 3; 
  ActiveState_t ActiveState : 1; 
  DriveType_t DriveType : 2; 
  SafeState_t SafeState : 2; 
} HC8_Signal_t;

/* HC25 Outputs PD16*/
typedef struct {
  float Duty_Cycle_CMD_percent;
  uint16_t SoftstartCurrent_mA;
  uint16_t SoftStartDuration_mS;
  uint16_t Voltage_mV;
  uint16_t FuseCurrent_mA;
  uint16_t HS_Current_mA;
  uint16_t LS_Current_mA;
  uint8_t Load_Percent;
  uint8_t RetryDelay_s;
  uint16_t Frequency_Hz : 14;
  Temperature_Enum_t Temp_Enum : 2;
  uint8_t RetryCount : 5;
  PinState_t PinState : 3;
  Enum_Retries_t RetriesAllotted : 3;
  ActiveState_t ActiveState : 1;
  DriveType_t DriveType : 2;
  SafeState_t SafeState : 2;
} HC25_Signal_t;

typedef struct {
  AVI_Signal_t AVI_1;
  AVI_Signal_t AVI_2;
  AVI_Signal_t AVI_3;
  AVI_Signal_t AVI_4;
  HB_Signal_t HBO_1;
  HB_Signal_t HBO_2;
  SPI_Signal_t SPI_1;
  SPI_Signal_t SPI_2;
  SPI_Signal_t SPI_3;
  SPI_Signal_t SPI_4;
  HC8_Signal_t HC8_1;
  HC8_Signal_t HC8_2;
  HC8_Signal_t HC8_3;
  HC8_Signal_t HC8_4;
  HC8_Signal_t HC8_5;
  HC8_Signal_t HC8_6;
  HC8_Signal_t HC8_7;
  HC8_Signal_t HC8_8;
  HC8_Signal_t HC8_9;
  HC8_Signal_t HC8_10;
  HC25_Signal_t HC25_1;
  HC25_Signal_t HC25_2;
  HC25_Signal_t HC25_3;
  HC25_Signal_t HC25_4;
  uint16_t Battery_Voltage_mV;
  uint16_t Boost_Voltage_mV;
  uint16_t ECR_Plug_Voltage_mV;
  uint16_t MainRail_Voltage_mV;
  uint16_t OnTime_s;
  uint16_t ProtectedRail_Voltage_mV;
  uint16_t SEPIC_Voltage_mV;
  uint16_t ECR_Plug_Current_mA;
  uint16_t SensorGround_Voltage_mV;
  uint16_t TenVolt_Rail_Voltage_mV;
  uint16_t UVLO_Voltage_mV;
  uint16_t VDD_Voltage_mV;
  uint16_t TotalCurrent_mA;
  uint8_t Serial[12];
  uint8_t Message[8];
  uint8_t Thermistor1_Temp_C;
  uint8_t Thermistor2_Temp_C;
  uint8_t Thermistor3_Temp_C;
  uint8_t FW_Minor;
  uint8_t FW_Release;
  uint8_t FW_Bugfix;
  uint8_t MainRail_Temperature_C;
  uint8_t CPU_Temperature_C;
  uint8_t Counter;
  uint8_t FW_Boot_Version : 5;
  uint8_t FW_Major : 2;
  uint8_t ID_Conflict : 1;
  uint8_t Status : 4;
  Temperature_Enum_t MainRail_Temp_enum : 2;
  Temperature_Enum_t TVS_Temp_Enum : 2;
  uint8_t Ignition_Status : 1;
  CANPower_t CANPower : 1;
  CANTermination_t CANTermination : 1;
  uint8_t ECR_Status : 1;
  uint8_t USB_Connected : 1;
} PD16Config_t;
/* End Device config */
#endif

#if defined(ENABLE_IO12A) || defined(ENABLE_IO12B)
typedef struct {
  uint16_t Voltage_mV;
  uint8_t Pullup : 1;
} IO12AVISignal_t;

typedef enum {
  ERRORSTATE_INACTIVE = 0,
  ERRORSTATE_ACTIVE = 1
} Enum_ErrorState_t;

typedef struct {
  float DutyCycle_percent;
  uint16_t Frequency_Hz;
} IO12DPI_Signal_t;

typedef struct {
  float DutyCycle_CMD_percent;
  uint16_t Frequency_Hz;
  Enum_ErrorState_t ErrorState : 1;
  ActiveState_t ActiveState : 1;
} IO12DPO_Signal_t;

typedef struct {
  uint8_t Message[8];
  uint8_t FW_Minor;
  uint8_t FW_Release;
  uint8_t FW_Bugfix;
  uint8_t FW_Boot_Version : 5;
  uint8_t FW_Major : 2;
  uint8_t ID_Conflict : 1;
  uint8_t Status : 4;
  IO12AVISignal_t AVI_1;
  IO12AVISignal_t AVI_2;
  IO12AVISignal_t AVI_3;
  IO12AVISignal_t AVI_4;
  IO12DPI_Signal_t DPI_1;
  IO12DPI_Signal_t DPI_2;
  IO12DPI_Signal_t DPI_3;
  IO12DPI_Signal_t DPI_4;
  IO12DPO_Signal_t DPO_1;
  IO12DPO_Signal_t DPO_2;
  IO12DPO_Signal_t DPO_3;
  IO12DPO_Signal_t DPO_4;
}IO12Config_t;
#endif


#if defined(ENABLE_TCA4A) || defined(ENABLE_TCA4B)
typedef struct{
  uint16_t Thermocouple1_C;
  uint16_t Thermocouple2_C;
  uint16_t Thermocouple3_C;
  uint16_t Thermocouple4_C;
  uint8_t Message[8];
  uint8_t FW_Minor;
  uint8_t FW_Release;
  uint8_t FW_Bugfix;
  uint8_t FW_Boot_Version : 5;
  uint8_t FW_Major : 2;
  uint8_t ID_Conflict : 1;
  uint8_t Status : 4;
} TCA4Config_t;
#endif


#if defined(ENABLE_TCA2A) || defined(ENABLE_TCA2B)
typedef struct{
  uint16_t Thermocouple1_C;
  uint16_t Thermocouple2_C;
  uint8_t Message[8];
  uint8_t FW_Minor;
  uint8_t FW_Release;
  uint8_t FW_Bugfix;
  uint8_t FW_Boot_Version : 5;
  uint8_t FW_Major : 2;
  uint8_t ID_Conflict : 1;
  uint8_t Status : 4;
} TCA2Config_t;
#endif


#ifdef ENABLE_TMS4
typedef struct{
  uint16_t Pressure_kPa;
  uint16_t Voltage_mV;
  uint8_t Temperature_C;  
  uint8_t Leaking : 1;
  uint8_t TempNegative : 1;
} Tms4Corner_t;

typedef struct {
  uint8_t Message[8];
  Tms4Corner_t FL;
  Tms4Corner_t FR;
  Tms4Corner_t RL;
  Tms4Corner_t RR;
  uint8_t Counter : 2;
} TMS4Config_t;
#endif


typedef struct {
#ifdef ENABLE_ECU
  HaltechECUSignals_t ECU;
#endif
#ifdef ENABLE_IO16A
  IO16Config_t IO16A;
#endif
#ifdef ENABLE_IO16B
  IO16Config_t IO16B;
#endif
#ifdef ENABLE_PD16A
  PD16Config_t PD16A;
#endif
#ifdef ENABLE_PD16B
  PD16Config_t PD16B;
#endif
#ifdef ENABLE_PD16C
  PD16Config_t PD16C;
#endif
#ifdef ENABLE_PD16D
  PD16Config_t PD16D;
#endif
#ifdef ENABLE_TCA4A
  TCA4Config_t TCA4A;
#endif
#ifdef ENABLE_TCA4B
  TCA4Config_t TCA4B;
#endif
#ifdef ENABLE_TCA2A
  TCA2Config_t TCA2A;
#endif
#ifdef ENABLE_TCA2B
  TCA2Config_t TCA2B;
#endif
#ifdef ENABLE_IO12A
  IO12Config_t IO12A;
#endif
#ifdef ENABLE_IO12B
  IO12Config_t IO12B;
#endif
#ifdef ENABLE_TMS4
  TMS4Config_t TMS4;
#endif

} HaltechEcosystem_t;

extern HaltechEcosystem_t Haltech;

void haltech_CAN_Receive(CAN_Message Message);
void haltech_Events_Startup();
void haltech_Events_100Hz();
void haltech_Events_50Hz();
void haltech_Events_20Hz();
void haltech_Events_10Hz();
void haltech_Events_5Hz();
void haltech_Events_2Hz();
void haltech_Events_1Hz();

bool UpdateAVIState(bool CurrentState, float OnVoltage, float OffVoltage, float Voltage);
#endif /* HALTECH_H */