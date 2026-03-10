#include "haltech.h"
#include <string.h>

uint8_t Counter;

HaltechEcosystem_t Haltech = {
#ifdef ENABLE_ECU
    .ECU = {0}, // Zero-initialize all ECU fields
#endif
#ifdef ENABLE_IO12A
    .IO12A =
        {
            .Status = 1,
            .FW_Boot_Version = 31,
            .FW_Major = 3,
            .FW_Minor = 255,
        },
#endif
#ifdef ENABLE_IO12B
    .IO12B =
        {
            .Status = 1,
            .FW_Boot_Version = 31,
            .FW_Major = 3,
            .FW_Minor = 255,
        },
#endif
#ifdef ENABLE_IO16A
    .IO16A =
        {
            .Status = 1,
            .FW_Boot_Version = 31,
            .FW_Major = 3,
            .FW_Minor = 255,
            .FW_Release = 201, // Experimental 1
            .Battery_Voltage_mV = 12000,
            .Boost_Voltage_mV = 22000,
            .VDD_Voltage_mV = 5500,
            .UVLO_Voltage_mV = 0,
            .TotalCurrent_mA = 0,
            .TenVolt_Rail_Voltage_mV = 10000,   // PD16 Only
            .SensorGround_Voltage_mV = 0,
            .ECR_Plug_Current_mA = 10,
            .Serial = {0, 1, 2, 8, 1, 3, 3, 0, 8, 0, 0, 4},
            .ProtectedRail_Voltage_mV = 0,
            .MainRail_Voltage_mV = 0,
            .MainRail_Temperature_C = 25,
            .CANPower = 0,
            .CPU_Temperature_C = 25,
        },
#endif
#ifdef ENABLE_IO16B
    .IO16B =
        {
            .Status = 1,
            .FW_Boot_Version = 31,
            .FW_Major = 3,
            .FW_Minor = 255,
            .FW_Release = 201, // Experimental 1
            .Battery_Voltage_mV = 12000,
            .Boost_Voltage_mV = 22000,
            .VDD_Voltage_mV = 5500,
            .UVLO_Voltage_mV = 0,
            .TotalCurrent_mA = 0,
            .TenVolt_Rail_Voltage_mV = 10000,   // PD16 Only
            .SensorGround_Voltage_mV = 0,
            .ECR_Plug_Current_mA = 10,
            .Serial = {0, 2, 2, 8, 1, 3, 3, 0, 8, 0, 0, 4},
            .ProtectedRail_Voltage_mV = 0,
            .MainRail_Voltage_mV = 0,
            .MainRail_Temperature_C = 25,
            .CANPower = 0,
            .CPU_Temperature_C = 25,
        },
#endif
#ifdef ENABLE_PD16A
    .PD16A =
        {
            .Status = 1,
            .FW_Boot_Version = 31,
            .FW_Major = 3,
            .FW_Minor = 255,
            .FW_Release = 201, // Experimental 1
            .Battery_Voltage_mV = 12000,
            .Boost_Voltage_mV = 22000,
            .VDD_Voltage_mV = 3300,
            .UVLO_Voltage_mV = 0,
            .TotalCurrent_mA = 0,
            .TenVolt_Rail_Voltage_mV = 10000,   // PD16 Only
            .SensorGround_Voltage_mV = 0,
            .ECR_Plug_Current_mA = 10,
            .Serial = {0, 3, 2, 8, 1, 3, 3, 0, 8, 0, 0, 4},
            .ProtectedRail_Voltage_mV = 0,
            .MainRail_Voltage_mV = 0,
            .MainRail_Temperature_C = 25,
            .CANPower = 0,
            .CPU_Temperature_C = 25,
        },
#endif
#ifdef ENABLE_PD16B
    .PD16B =
        {
            .Status = 1,
            .FW_Boot_Version = 31,
            .FW_Major = 3,
            .FW_Minor = 255,
            .FW_Release = 201, // Experimental 1
            .Battery_Voltage_mV = 12000,
            .Boost_Voltage_mV = 22000,
            .VDD_Voltage_mV = 3300,
            .UVLO_Voltage_mV = 0,
            .TotalCurrent_mA = 0,
            .TenVolt_Rail_Voltage_mV = 10000,   // PD16 Only
            .SensorGround_Voltage_mV = 0,
            .ECR_Plug_Current_mA = 10,
            .Serial = {0, 4, 2, 8, 1, 3, 3, 0, 8, 0, 0, 4},
            .ProtectedRail_Voltage_mV = 0,
            .MainRail_Voltage_mV = 0,
            .MainRail_Temperature_C = 25,
            .CANPower = 0,
            .CPU_Temperature_C = 25,
        },
#endif
#ifdef ENABLE_PD16C
    .PD16C =
        {
            .Status = 1,
            .FW_Boot_Version = 31,
            .FW_Major = 3,
            .FW_Minor = 255,
            .FW_Release = 201, // Experimental 1
            .Battery_Voltage_mV = 12000,
            .Boost_Voltage_mV = 22000,
            .VDD_Voltage_mV = 3300,
            .UVLO_Voltage_mV = 0,
            .TotalCurrent_mA = 0,
            .TenVolt_Rail_Voltage_mV = 10000,   // PD16 Only
            .SensorGround_Voltage_mV = 0,
            .ECR_Plug_Current_mA = 10,
            .Serial = {0, 5, 2, 8, 1, 3, 3, 0, 8, 0, 0, 4},
            .ProtectedRail_Voltage_mV = 0,
            .MainRail_Voltage_mV = 0,
            .MainRail_Temperature_C = 25,
            .CANPower = 0,
            .CPU_Temperature_C = 25,
        },
#endif
#ifdef ENABLE_PD16D
    .PD16D =
        {
            .Status = 1,
            .FW_Boot_Version = 31,
            .FW_Major = 3,
            .FW_Minor = 255,
            .FW_Release = 201, // Experimental 1
            .Battery_Voltage_mV = 12000,
            .Boost_Voltage_mV = 22000,
            .VDD_Voltage_mV = 3300,
            .UVLO_Voltage_mV = 0,
            .TotalCurrent_mA = 0,
            .TenVolt_Rail_Voltage_mV = 10000,   // PD16 Only
            .SensorGround_Voltage_mV = 0,
            .ECR_Plug_Current_mA = 10,
            .Serial = {0, 6, 2, 8, 1, 3, 3, 0, 8, 0, 0, 4},
            .ProtectedRail_Voltage_mV = 0,
            .MainRail_Voltage_mV = 0,
            .MainRail_Temperature_C = 25,
            .CANPower = 0,
            .CPU_Temperature_C = 25,
        },
#endif
#ifdef ENABLE_TCA4A
    .TCA4A =
        {
            .Status = 1,
            .FW_Boot_Version = 31,
            .FW_Major = 3,
            .FW_Minor = 255,
        },
#endif
#ifdef ENABLE_TCA4B
    .TCA4B =
        {
            .Status = 1,
            .FW_Boot_Version = 31,
            .FW_Major = 3,
            .FW_Minor = 255,
        },
#endif

};

void haltech_Events_Startup() {
    // Instantiate all variables here that aren't == 0;
}

void haltech_CAN_Receive(CAN_Message Message) {
    switch (Message.arbitration_id) {

#ifdef ENABLE_IO12A
    case 0x2D0:
        // Node: IO12A (From CAN_Node)
        // Common Signals
        Haltech.IO12A.DPO_1.DutyCycle_CMD_percent = dbc_decode(Message.data, false, true, 14, 10, 0.1, 0, 1);
        Haltech.IO12A.DPO_1.ActiveState = (bool)dbc_decode(Message.data, false, true, 13, 1, 1, 0, 0);
        Haltech.IO12A.DPO_1.ErrorState = (bool)dbc_decode(Message.data, false, true, 12, 1, 1, 0, 0);
        Haltech.IO12A.AVI_1.Pullup = (bool)dbc_decode(Message.data, false, true, 11, 1, 1, 0, 0);
        Haltech.IO12A.DPO_1.Frequency_Hz = (uint16_t)(period_10uS_to_frequency_Hz(dbc_decode(Message.data, false, true, 24, 17, 0.01, 0, 2)));
        Haltech.IO12A.DPO_2.DutyCycle_CMD_percent = dbc_decode(Message.data, false, true, 46, 10, 0.1, 0, 1);
        Haltech.IO12A.DPO_2.ActiveState = (bool)dbc_decode(Message.data, false, true, 45, 1, 1, 0, 0);
        Haltech.IO12A.DPO_2.ErrorState = (bool)dbc_decode(Message.data, false, true, 44, 1, 1, 0, 0);
        Haltech.IO12A.AVI_2.Pullup = (bool)dbc_decode(Message.data, false, true, 43, 1, 1, 0, 0);
        Haltech.IO12A.DPO_2.Frequency_Hz = (uint16_t)(period_10uS_to_frequency_Hz(dbc_decode(Message.data, false, true, 56, 17, 0.01, 0, 2)));
        break;


    case 0x2D2:
        // Node: IO12A (From CAN_Node)
        // Common Signals
        Haltech.IO12A.DPO_3.DutyCycle_CMD_percent = dbc_decode(Message.data, false, true, 14, 10, 0.1, 0, 1);
        Haltech.IO12A.DPO_3.ActiveState = (bool)dbc_decode(Message.data, false, true, 13, 1, 1, 0, 0);
        Haltech.IO12A.DPO_3.ErrorState = (bool)dbc_decode(Message.data, false, true, 12, 1, 1, 0, 0);
        Haltech.IO12A.AVI_3.Pullup = (bool)dbc_decode(Message.data, false, true, 11, 1, 1, 0, 0);
        Haltech.IO12A.DPO_3.Frequency_Hz = (uint16_t)(period_10uS_to_frequency_Hz(dbc_decode(Message.data, false, true, 24, 17, 0.01, 0, 2)));
        Haltech.IO12A.DPO_4.DutyCycle_CMD_percent = dbc_decode(Message.data, false, true, 46, 10, 0.1, 0, 1);
        Haltech.IO12A.DPO_4.ActiveState = (bool)dbc_decode(Message.data, false, true, 45, 1, 1, 0, 0);
        Haltech.IO12A.DPO_4.ErrorState = (bool)dbc_decode(Message.data, false, true, 44, 1, 1, 0, 0);
        Haltech.IO12A.AVI_4.Pullup = (bool)dbc_decode(Message.data, false, true, 43, 1, 1, 0, 0);
        Haltech.IO12A.DPO_4.Frequency_Hz = (uint16_t)(period_10uS_to_frequency_Hz(dbc_decode(Message.data, false, true, 56, 17, 0.01, 0, 2)));
        break;

#endif

#ifdef ENABLE_IO12B
    case 0x2D1:
        Haltech.IO12B.DPO_1.DutyCycle_CMD_percent = dbc_decode(Message.data, false, true, 14, 10, 0.1, 0, 1);
        Haltech.IO12B.DPO_1.ActiveState = (bool)dbc_decode(Message.data, false, true, 13, 1, 1, 0, 0);
        Haltech.IO12B.DPO_1.ErrorState = (bool)dbc_decode(Message.data, false, true, 12, 1, 1, 0, 0);
        Haltech.IO12B.AVI_1.Pullup = (bool)dbc_decode(Message.data, false, true, 11, 1, 1, 0, 0);
        Haltech.IO12B.DPO_1.Frequency_Hz = (uint16_t)(period_10uS_to_frequency_Hz(dbc_decode(Message.data, false, true, 24, 17, 0.01, 0, 2)));
        Haltech.IO12B.DPO_2.DutyCycle_CMD_percent = dbc_decode(Message.data, false, true, 46, 10, 0.1, 0, 1);
        Haltech.IO12B.DPO_2.ActiveState = (bool)dbc_decode(Message.data, false, true, 45, 1, 1, 0, 0);
        Haltech.IO12B.DPO_2.ErrorState = (bool)dbc_decode(Message.data, false, true, 44, 1, 1, 0, 0);
        Haltech.IO12B.AVI_2.Pullup = (bool)dbc_decode(Message.data, false, true, 43, 1, 1, 0, 0);
        Haltech.IO12B.DPO_2.Frequency_Hz = (uint16_t)(period_10uS_to_frequency_Hz(dbc_decode(Message.data, false, true, 56, 17, 0.01, 0, 2)));
        break;
    case 0x2D3:
        Haltech.IO12B.DPO_3.DutyCycle_CMD_percent = dbc_decode(Message.data, false, true, 14, 10, 0.1, 0, 1);
        Haltech.IO12B.DPO_3.ActiveState = (bool)dbc_decode(Message.data, false, true, 13, 1, 1, 0, 0);
        Haltech.IO12B.DPO_3.ErrorState = (bool)dbc_decode(Message.data, false, true, 12, 1, 1, 0, 0);
        Haltech.IO12B.AVI_3.Pullup = (bool)dbc_decode(Message.data, false, true, 11, 1, 1, 0, 0);
        Haltech.IO12B.DPO_3.Frequency_Hz = (uint16_t)(period_10uS_to_frequency_Hz(dbc_decode(Message.data, false, true, 24, 17, 0.01, 0, 2)));
        Haltech.IO12B.DPO_4.DutyCycle_CMD_percent = dbc_decode(Message.data, false, true, 46, 10, 0.1, 0, 1);
        Haltech.IO12B.DPO_4.ActiveState = (bool)dbc_decode(Message.data, false, true, 45, 1, 1, 0, 0);
        Haltech.IO12B.DPO_4.ErrorState = (bool)dbc_decode(Message.data, false, true, 44, 1, 1, 0, 0);
        Haltech.IO12B.AVI_4.Pullup = (bool)dbc_decode(Message.data, false, true, 43, 1, 1, 0, 0);
        Haltech.IO12B.DPO_4.Frequency_Hz = (uint16_t)(period_10uS_to_frequency_Hz(dbc_decode(Message.data, false, true, 56, 17, 0.01, 0, 2)));
        break;
#endif

#ifdef ENABLE_IO16A
    case 0x6A8:
        // Multiplexed Signals
        switch (Message.data[0]) {
        case 0x40:
            Haltech.IO16A.HBO_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.IO16A.HBO_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x41:
            Haltech.IO16A.HBO_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.IO16A.HBO_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x42:
            Haltech.IO16A.HBO_3.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.IO16A.HBO_3.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x43:
            Haltech.IO16A.HBO_4.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.IO16A.HBO_4.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x44:
            Haltech.IO16A.HBO_5.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.IO16A.HBO_5.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x45:
            Haltech.IO16A.HBO_6.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.IO16A.HBO_6.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        default:
            break;
        }
        break;

    case 0x6A9:
        // Multiplexed Signals
        switch (Message.data[0]) {

            // HBO
        case 0x40:
            Haltech.IO16A.HBO_1.RetriesAllotted = (uint8_t)dbc_decode(Message.data, false, true, 13, 3, 1, 0, 0);
            Haltech.IO16A.HBO_1.DriveType = (uint8_t)dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.IO16A.HBO_1.SafeState = (uint8_t)dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.IO16A.HBO_1.ActiveState = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16A.HBO_1.RetryDelay_s = (uint8_t)dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.IO16A.HBO_1.ControlMethod = (bool)dbc_decode(Message.data, false, true, 24, 1, 1, 0, 0);
            Haltech.IO16A.HBO_1.FuseCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            break;
        case 0x41:
            Haltech.IO16A.HBO_2.RetriesAllotted = (uint8_t)dbc_decode(Message.data, false, true, 13, 3, 1, 0, 0);
            Haltech.IO16A.HBO_2.DriveType = (uint8_t)dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.IO16A.HBO_2.SafeState = (uint8_t)dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.IO16A.HBO_2.ActiveState = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16A.HBO_2.RetryDelay_s = (uint8_t)dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.IO16A.HBO_2.ControlMethod = (bool)dbc_decode(Message.data, false, true, 24, 1, 1, 0, 0);
            Haltech.IO16A.HBO_2.FuseCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            break;
        case 0x42:
            Haltech.IO16A.HBO_3.RetriesAllotted = (uint8_t)dbc_decode(Message.data, false, true, 13, 3, 1, 0, 0);
            Haltech.IO16A.HBO_3.DriveType = (uint8_t)dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.IO16A.HBO_3.SafeState = (uint8_t)dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.IO16A.HBO_3.ActiveState = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16A.HBO_3.RetryDelay_s = (uint8_t)dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.IO16A.HBO_3.ControlMethod = (bool)dbc_decode(Message.data, false, true, 24, 1, 1, 0, 0);
            Haltech.IO16A.HBO_3.FuseCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            break;
        case 0x43:
            Haltech.IO16A.HBO_4.RetriesAllotted = (uint8_t)dbc_decode(Message.data, false, true, 13, 3, 1, 0, 0);
            Haltech.IO16A.HBO_4.DriveType = (uint8_t)dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.IO16A.HBO_4.SafeState = (uint8_t)dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.IO16A.HBO_4.ActiveState = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16A.HBO_4.RetryDelay_s = (uint8_t)dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.IO16A.HBO_4.ControlMethod = (bool)dbc_decode(Message.data, false, true, 24, 1, 1, 0, 0);
            Haltech.IO16A.HBO_4.FuseCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            break;
        case 0x44:
            Haltech.IO16A.HBO_5.RetriesAllotted = (uint8_t)dbc_decode(Message.data, false, true, 13, 3, 1, 0, 0);
            Haltech.IO16A.HBO_5.DriveType = (uint8_t)dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.IO16A.HBO_5.SafeState = (uint8_t)dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.IO16A.HBO_5.ActiveState = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16A.HBO_5.RetryDelay_s = (uint8_t)dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.IO16A.HBO_5.ControlMethod = (bool)dbc_decode(Message.data, false, true, 24, 1, 1, 0, 0);
            Haltech.IO16A.HBO_5.FuseCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            break;
        case 0x45:
            Haltech.IO16A.HBO_6.RetriesAllotted = (uint8_t)dbc_decode(Message.data, false, true, 13, 3, 1, 0, 0);
            Haltech.IO16A.HBO_6.DriveType = (uint8_t)dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.IO16A.HBO_6.SafeState = (uint8_t)dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.IO16A.HBO_6.ActiveState = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16A.HBO_6.RetryDelay_s = (uint8_t)dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.IO16A.HBO_6.ControlMethod = (bool)dbc_decode(Message.data, false, true, 24, 1, 1, 0, 0);
            Haltech.IO16A.HBO_6.FuseCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            break;

            // SPI
        case 0x60:
            Haltech.IO16A.SPI_1.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.IO16A.SPI_1.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.IO16A.SPI_1.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16A.SPI_1.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.IO16A.SPI_1.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x61:
            Haltech.IO16A.SPI_2.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.IO16A.SPI_2.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.IO16A.SPI_2.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16A.SPI_2.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.IO16A.SPI_2.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x62:
            Haltech.IO16A.SPI_3.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.IO16A.SPI_3.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.IO16A.SPI_3.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16A.SPI_3.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.IO16A.SPI_3.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x63:
            Haltech.IO16A.SPI_4.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.IO16A.SPI_4.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.IO16A.SPI_4.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16A.SPI_4.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.IO16A.SPI_4.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;

            // AVI
        case 0x80:
            Haltech.IO16A.AVI_1.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.IO16A.AVI_1.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.IO16A.AVI_1.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x81:
            Haltech.IO16A.AVI_2.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.IO16A.AVI_2.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.IO16A.AVI_2.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x82:
            Haltech.IO16A.AVI_3.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.IO16A.AVI_3.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.IO16A.AVI_3.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x83:
            Haltech.IO16A.AVI_4.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.IO16A.AVI_4.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.IO16A.AVI_4.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x84:
            Haltech.IO16A.AVI_5.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.IO16A.AVI_5.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.IO16A.AVI_5.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x85:
            Haltech.IO16A.AVI_6.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.IO16A.AVI_6.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.IO16A.AVI_6.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        default:
            break;
        }
        break;

    case 0x6AA:
        Haltech.IO16A.ECR_Status = (bool)dbc_decode(Message.data, false, true, 7, 1, 1, 0, 0);
        Haltech.IO16A.CANPower = (bool)dbc_decode(Message.data, false, true, 6, 1, 1, 0, 0);
        Haltech.IO16A.CANTermination = (bool)dbc_decode(Message.data, false, true, 5, 1, 1, 0, 0);
        break;
#endif

#ifdef ENABLE_IO16B
    case 0x6B0:
        // Multiplexed Signals
        switch (Message.data[0]) {
        case 0x40:
            Haltech.IO16B.HBO_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.IO16B.HBO_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x41:
            Haltech.IO16B.HBO_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.IO16B.HBO_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x42:
            Haltech.IO16B.HBO_3.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.IO16B.HBO_3.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x43:
            Haltech.IO16B.HBO_4.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.IO16B.HBO_4.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x44:
            Haltech.IO16B.HBO_5.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.IO16B.HBO_5.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x45:
            Haltech.IO16B.HBO_6.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.IO16B.HBO_6.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        default:
            break;
        }
        break;

    case 0x6B1:

        // Multiplexed Signals
        switch (Message.data[0]) {

            // HBO
        case 0x40:
            Haltech.IO16B.HBO_1.RetriesAllotted = (uint8_t)dbc_decode(Message.data, false, true, 13, 3, 1, 0, 0);
            Haltech.IO16B.HBO_1.DriveType = (uint8_t)dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.IO16B.HBO_1.SafeState = (uint8_t)dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.IO16B.HBO_1.ActiveState = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16B.HBO_1.RetryDelay_s = (uint8_t)dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.IO16B.HBO_1.ControlMethod = (bool)dbc_decode(Message.data, false, true, 24, 1, 1, 0, 0);
            Haltech.IO16B.HBO_1.FuseCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            break;
        case 0x41:
            Haltech.IO16B.HBO_2.RetriesAllotted = (uint8_t)dbc_decode(Message.data, false, true, 13, 3, 1, 0, 0);
            Haltech.IO16B.HBO_2.DriveType = (uint8_t)dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.IO16B.HBO_2.SafeState = (uint8_t)dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.IO16B.HBO_2.ActiveState = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16B.HBO_2.RetryDelay_s = (uint8_t)dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.IO16B.HBO_2.ControlMethod = (bool)dbc_decode(Message.data, false, true, 24, 1, 1, 0, 0);
            Haltech.IO16B.HBO_2.FuseCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            break;
        case 0x42:
            Haltech.IO16B.HBO_3.RetriesAllotted = (uint8_t)dbc_decode(Message.data, false, true, 13, 3, 1, 0, 0);
            Haltech.IO16B.HBO_3.DriveType = (uint8_t)dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.IO16B.HBO_3.SafeState = (uint8_t)dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.IO16B.HBO_3.ActiveState = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16B.HBO_3.RetryDelay_s = (uint8_t)dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.IO16B.HBO_3.ControlMethod = (bool)dbc_decode(Message.data, false, true, 24, 1, 1, 0, 0);
            Haltech.IO16B.HBO_3.FuseCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            break;
        case 0x43:
            Haltech.IO16B.HBO_4.RetriesAllotted = (uint8_t)dbc_decode(Message.data, false, true, 13, 3, 1, 0, 0);
            Haltech.IO16B.HBO_4.DriveType = (uint8_t)dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.IO16B.HBO_4.SafeState = (uint8_t)dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.IO16B.HBO_4.ActiveState = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16B.HBO_4.RetryDelay_s = (uint8_t)dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.IO16B.HBO_4.ControlMethod = (bool)dbc_decode(Message.data, false, true, 24, 1, 1, 0, 0);
            Haltech.IO16B.HBO_4.FuseCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            break;
        case 0x44:
            Haltech.IO16B.HBO_5.RetriesAllotted = (uint8_t)dbc_decode(Message.data, false, true, 13, 3, 1, 0, 0);
            Haltech.IO16B.HBO_5.DriveType = (uint8_t)dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.IO16B.HBO_5.SafeState = (uint8_t)dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.IO16B.HBO_5.ActiveState = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16B.HBO_5.RetryDelay_s = (uint8_t)dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.IO16B.HBO_5.ControlMethod = (bool)dbc_decode(Message.data, false, true, 24, 1, 1, 0, 0);
            Haltech.IO16B.HBO_5.FuseCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            break;
        case 0x45:
            Haltech.IO16B.HBO_6.RetriesAllotted = (uint8_t)dbc_decode(Message.data, false, true, 13, 3, 1, 0, 0);
            Haltech.IO16B.HBO_6.DriveType = (uint8_t)dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.IO16B.HBO_6.SafeState = (uint8_t)dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.IO16B.HBO_6.ActiveState = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16B.HBO_6.RetryDelay_s = (uint8_t)dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.IO16B.HBO_6.ControlMethod = (bool)dbc_decode(Message.data, false, true, 24, 1, 1, 0, 0);
            Haltech.IO16B.HBO_6.FuseCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            break;

            // SPI
        case 0x60:
            Haltech.IO16B.SPI_1.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.IO16B.SPI_1.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.IO16B.SPI_1.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16B.SPI_1.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 2);
            Haltech.IO16B.SPI_1.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x61:
            Haltech.IO16B.SPI_2.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.IO16B.SPI_2.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.IO16B.SPI_2.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16B.SPI_2.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 2);
            Haltech.IO16B.SPI_2.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x62:
            Haltech.IO16B.SPI_3.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.IO16B.SPI_3.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.IO16B.SPI_3.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16B.SPI_3.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 2);
            Haltech.IO16B.SPI_3.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x63:
            Haltech.IO16B.SPI_4.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.IO16B.SPI_4.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.IO16B.SPI_4.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.IO16B.SPI_4.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 2);
            Haltech.IO16B.SPI_4.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;

            // AVI
        case 0x80:
            Haltech.IO16B.AVI_1.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.IO16B.AVI_1.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.IO16B.AVI_1.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x81:
            Haltech.IO16B.AVI_2.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.IO16B.AVI_2.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.IO16B.AVI_2.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x82:
            Haltech.IO16B.AVI_3.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.IO16B.AVI_3.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.IO16B.AVI_3.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x83:
            Haltech.IO16B.AVI_4.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.IO16B.AVI_4.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.IO16B.AVI_4.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x84:
            Haltech.IO16B.AVI_5.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.IO16B.AVI_5.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.IO16B.AVI_5.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x85:
            Haltech.IO16B.AVI_6.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.IO16B.AVI_6.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.IO16B.AVI_6.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        default:
            break;
        }
        break;

    case 0x6B2:
        Haltech.IO16B.ECR_Status = (bool)dbc_decode(Message.data, false, true, 7, 1, 1, 0, 0);
        Haltech.IO16B.CANPower = (bool)dbc_decode(Message.data, false, true, 6, 1, 1, 0, 0);
        Haltech.IO16B.CANTermination = (bool)dbc_decode(Message.data, false, true, 5, 1, 1, 0, 0);
        break;
#endif

#ifdef ENABLE_PD16A
    
    case 0x6D0:
        // Multiplexed Signals
        switch (Message.data[0]) {
        case 0x00:
            Haltech.PD16A.HC25_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC25_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x01:
            Haltech.PD16A.HC25_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC25_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x02:
            Haltech.PD16A.HC25_3.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC25_3.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x03:
            Haltech.PD16A.HC25_4.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC25_4.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x20:
            Haltech.PD16A.HC8_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC8_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x21:
            Haltech.PD16A.HC8_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC8_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x22:
            Haltech.PD16A.HC8_3.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC8_3.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x23:
            Haltech.PD16A.HC8_4.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC8_4.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x24:
            Haltech.PD16A.HC8_5.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC8_5.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x25:
            Haltech.PD16A.HC8_6.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC8_6.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x26:
            Haltech.PD16A.HC8_7.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC8_7.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x27:
            Haltech.PD16A.HC8_8.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC8_8.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x28:
            Haltech.PD16A.HC8_9.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC8_9.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x29:
            Haltech.PD16A.HC8_10.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HC8_10.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x40:
            Haltech.PD16A.HBO_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HBO_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x41:
            Haltech.PD16A.HBO_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16A.HBO_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        default:
            break;
        }
        break;

    case 0x6D1:
        // Multiplexed Signals
        switch (Message.data[0]) {  
        case 0x00:
            Haltech.PD16A.HC25_1.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC25_1.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC25_1.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC25_1.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC25_1.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC25_1.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16A.HC25_1.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16A.HC25_1.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x01:
            Haltech.PD16A.HC25_2.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC25_2.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC25_2.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC25_2.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC25_2.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC25_2.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16A.HC25_2.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16A.HC25_2.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x02:
            Haltech.PD16A.HC25_3.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC25_3.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC25_3.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC25_3.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC25_3.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC25_3.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16A.HC25_3.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16A.HC25_3.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x03:
            Haltech.PD16A.HC25_4.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC25_4.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC25_4.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC25_4.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC25_4.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC25_4.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16A.HC25_4.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16A.HC25_4.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x20:
            Haltech.PD16A.HC8_1.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC8_1.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC8_1.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC8_1.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC8_1.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC8_1.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x21:
            Haltech.PD16A.HC8_2.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC8_2.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC8_2.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC8_2.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC8_2.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC8_2.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x22:
            Haltech.PD16A.HC8_3.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC8_3.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC8_3.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC8_3.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC8_3.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC8_3.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x23:
            Haltech.PD16A.HC8_4.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC8_4.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC8_4.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC8_4.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC8_4.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC8_4.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x24:
            Haltech.PD16A.HC8_5.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC8_5.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC8_5.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC8_5.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC8_5.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC8_5.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x25:
            Haltech.PD16A.HC8_6.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC8_6.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC8_6.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC8_6.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC8_6.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC8_6.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x26:
            Haltech.PD16A.HC8_7.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC8_7.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC8_7.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC8_7.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC8_7.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC8_7.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x27:
            Haltech.PD16A.HC8_8.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC8_8.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC8_8.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC8_8.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC8_8.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC8_8.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x28:
            Haltech.PD16A.HC8_9.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC8_9.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC8_9.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC8_9.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC8_9.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC8_9.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x29:
            Haltech.PD16A.HC8_10.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HC8_10.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HC8_10.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HC8_10.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HC8_10.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16A.HC8_10.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x40:
            Haltech.PD16A.HBO_1.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HBO_1.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HBO_1.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HBO_1.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HBO_1.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            break;
        case 0x41:
            Haltech.PD16A.HBO_2.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.HBO_2.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16A.HBO_2.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16A.HBO_2.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16A.HBO_2.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            break;
        case 0x60:
            Haltech.PD16A.SPI_1.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16A.SPI_1.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16A.SPI_1.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.SPI_1.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16A.SPI_1.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x61:
            Haltech.PD16A.SPI_2.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16A.SPI_2.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16A.SPI_2.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.SPI_2.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16A.SPI_2.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x62:
            Haltech.PD16A.SPI_3.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16A.SPI_3.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16A.SPI_3.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.SPI_3.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16A.SPI_3.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x63:
            Haltech.PD16A.SPI_4.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16A.SPI_4.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16A.SPI_4.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16A.SPI_4.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16A.SPI_4.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x80:
            Haltech.PD16A.AVI_1.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16A.AVI_1.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16A.AVI_1.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x81:
            Haltech.PD16A.AVI_2.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16A.AVI_2.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16A.AVI_2.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x82:
            Haltech.PD16A.AVI_3.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16A.AVI_3.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16A.AVI_3.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x83:
            Haltech.PD16A.AVI_4.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16A.AVI_4.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16A.AVI_4.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        default:
            break;
        }
    
    case 0x6D2:
        Haltech.PD16A.ECR_Status = (bool)dbc_decode(Message.data, false, true, 7, 1, 1, 0, 0);
        Haltech.PD16A.CANPower = (bool)dbc_decode(Message.data, false, true, 6, 1, 1, 0, 0);
        Haltech.PD16A.CANTermination = (bool)dbc_decode(Message.data, false, true, 5, 1, 1, 0, 0);
        break;
#endif

#ifdef ENABLE_PD16B
    case 0x6D8:
        // Multiplexed Signals
        switch (Message.data[0]) {
        case 0x00:
            Haltech.PD16B.HC25_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC25_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x01:
            Haltech.PD16B.HC25_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC25_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x02:
            Haltech.PD16B.HC25_3.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC25_3.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x03:
            Haltech.PD16B.HC25_4.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC25_4.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x20:
            Haltech.PD16B.HC8_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC8_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x21:
            Haltech.PD16B.HC8_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC8_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x22:
            Haltech.PD16B.HC8_3.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC8_3.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x23:
            Haltech.PD16B.HC8_4.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC8_4.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x24:
            Haltech.PD16B.HC8_5.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC8_5.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x25:
            Haltech.PD16B.HC8_6.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC8_6.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x26:
            Haltech.PD16B.HC8_7.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC8_7.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x27:
            Haltech.PD16B.HC8_8.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC8_8.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x28:
            Haltech.PD16B.HC8_9.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC8_9.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x29:
            Haltech.PD16B.HC8_10.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HC8_10.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x40:
            Haltech.PD16B.HBO_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HBO_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x41:
            Haltech.PD16B.HBO_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16B.HBO_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        default:
            break;
        }
        break;

    case 0x6D9:
        // Multiplexed Signals
        switch (Message.data[0]) {  
        case 0x00:
            Haltech.PD16B.HC25_1.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC25_1.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC25_1.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC25_1.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC25_1.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC25_1.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16B.HC25_1.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16B.HC25_1.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x01:
            Haltech.PD16B.HC25_2.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC25_2.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC25_2.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC25_2.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC25_2.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC25_2.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16B.HC25_2.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16B.HC25_2.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x02:
            Haltech.PD16B.HC25_3.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC25_3.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC25_3.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC25_3.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC25_3.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC25_3.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16B.HC25_3.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16B.HC25_3.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x03:
            Haltech.PD16B.HC25_4.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC25_4.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC25_4.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC25_4.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC25_4.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC25_4.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16B.HC25_4.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16B.HC25_4.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x20:
            Haltech.PD16B.HC8_1.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC8_1.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC8_1.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC8_1.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC8_1.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC8_1.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x21:
            Haltech.PD16B.HC8_2.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC8_2.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC8_2.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC8_2.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC8_2.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC8_2.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x22:
            Haltech.PD16B.HC8_3.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC8_3.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC8_3.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC8_3.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC8_3.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC8_3.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x23:
            Haltech.PD16B.HC8_4.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC8_4.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC8_4.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC8_4.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC8_4.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC8_4.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x24:
            Haltech.PD16B.HC8_5.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC8_5.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC8_5.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC8_5.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC8_5.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC8_5.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x25:
            Haltech.PD16B.HC8_6.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC8_6.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC8_6.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC8_6.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC8_6.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC8_6.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x26:
            Haltech.PD16B.HC8_7.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC8_7.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC8_7.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC8_7.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC8_7.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC8_7.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x27:
            Haltech.PD16B.HC8_8.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC8_8.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC8_8.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC8_8.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC8_8.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC8_8.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x28:
            Haltech.PD16B.HC8_9.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC8_9.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC8_9.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC8_9.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC8_9.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC8_9.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x29:
            Haltech.PD16B.HC8_10.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HC8_10.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HC8_10.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HC8_10.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HC8_10.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16B.HC8_10.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x40:
            Haltech.PD16B.HBO_1.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HBO_1.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HBO_1.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HBO_1.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HBO_1.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            break;
        case 0x41:
            Haltech.PD16B.HBO_2.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.HBO_2.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16B.HBO_2.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16B.HBO_2.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16B.HBO_2.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            break;
        case 0x60:
            Haltech.PD16B.SPI_1.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16B.SPI_1.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16B.SPI_1.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.SPI_1.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16B.SPI_1.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x61:
            Haltech.PD16B.SPI_2.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16B.SPI_2.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16B.SPI_2.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.SPI_2.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16B.SPI_2.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x62:
            Haltech.PD16B.SPI_3.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16B.SPI_3.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16B.SPI_3.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.SPI_3.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16B.SPI_3.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x63:
            Haltech.PD16B.SPI_4.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16B.SPI_4.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16B.SPI_4.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16B.SPI_4.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16B.SPI_4.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x80:
            Haltech.PD16B.AVI_1.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16B.AVI_1.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16B.AVI_1.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x81:
            Haltech.PD16B.AVI_2.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16B.AVI_2.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16B.AVI_2.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x82:
            Haltech.PD16B.AVI_3.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16B.AVI_3.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16B.AVI_3.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x83:
            Haltech.PD16B.AVI_4.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16B.AVI_4.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16B.AVI_4.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        default:
            break;
        }
    
    case 0x6DA:
        Haltech.PD16B.ECR_Status = (bool)dbc_decode(Message.data, false, true, 7, 1, 1, 0, 0);
        Haltech.PD16B.CANPower = (bool)dbc_decode(Message.data, false, true, 6, 1, 1, 0, 0);
        Haltech.PD16B.CANTermination = (bool)dbc_decode(Message.data, false, true, 5, 1, 1, 0, 0);
        break;
#endif

#ifdef ENABLE_PD16C
    case 0x6E0:
        // Multiplexed Signals
        switch (Message.data[0]) {
        case 0x00:
            Haltech.PD16C.HC25_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC25_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x01:
            Haltech.PD16C.HC25_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC25_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x02:
            Haltech.PD16C.HC25_3.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC25_3.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x03:
            Haltech.PD16C.HC25_4.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC25_4.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x20:
            Haltech.PD16C.HC8_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC8_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x21:
            Haltech.PD16C.HC8_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC8_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x22:
            Haltech.PD16C.HC8_3.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC8_3.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x23:
            Haltech.PD16C.HC8_4.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC8_4.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x24:
            Haltech.PD16C.HC8_5.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC8_5.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x25:
            Haltech.PD16C.HC8_6.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC8_6.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x26:
            Haltech.PD16C.HC8_7.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC8_7.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x27:
            Haltech.PD16C.HC8_8.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC8_8.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x28:
            Haltech.PD16C.HC8_9.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC8_9.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x29:
            Haltech.PD16C.HC8_10.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HC8_10.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x40:
            Haltech.PD16C.HBO_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HBO_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x41:
            Haltech.PD16C.HBO_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16C.HBO_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        default:
            break;
        }
        break;

    case 0x6E1:
        // Multiplexed Signals
        switch (Message.data[0]) {  
        case 0x00:
            Haltech.PD16C.HC25_1.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC25_1.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC25_1.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC25_1.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC25_1.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC25_1.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16C.HC25_1.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16C.HC25_1.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x01:
            Haltech.PD16C.HC25_2.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC25_2.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC25_2.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC25_2.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC25_2.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC25_2.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16C.HC25_2.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16C.HC25_2.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x02:
            Haltech.PD16C.HC25_3.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC25_3.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC25_3.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC25_3.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC25_3.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC25_3.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16C.HC25_3.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16C.HC25_3.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x03:
            Haltech.PD16C.HC25_4.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC25_4.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC25_4.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC25_4.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC25_4.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC25_4.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16C.HC25_4.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16C.HC25_4.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x20:
            Haltech.PD16C.HC8_1.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC8_1.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC8_1.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC8_1.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC8_1.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC8_1.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x21:
            Haltech.PD16C.HC8_2.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC8_2.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC8_2.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC8_2.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC8_2.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC8_2.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x22:
            Haltech.PD16C.HC8_3.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC8_3.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC8_3.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC8_3.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC8_3.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC8_3.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x23:
            Haltech.PD16C.HC8_4.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC8_4.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC8_4.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC8_4.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC8_4.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC8_4.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x24:
            Haltech.PD16C.HC8_5.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC8_5.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC8_5.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC8_5.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC8_5.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC8_5.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x25:
            Haltech.PD16C.HC8_6.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC8_6.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC8_6.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC8_6.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC8_6.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC8_6.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x26:
            Haltech.PD16C.HC8_7.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC8_7.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC8_7.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC8_7.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC8_7.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC8_7.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x27:
            Haltech.PD16C.HC8_8.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC8_8.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC8_8.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC8_8.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC8_8.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC8_8.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x28:
            Haltech.PD16C.HC8_9.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC8_9.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC8_9.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC8_9.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC8_9.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC8_9.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x29:
            Haltech.PD16C.HC8_10.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HC8_10.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HC8_10.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HC8_10.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HC8_10.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16C.HC8_10.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x40:
            Haltech.PD16C.HBO_1.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HBO_1.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HBO_1.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HBO_1.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HBO_1.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            break;
        case 0x41:
            Haltech.PD16C.HBO_2.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.HBO_2.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16C.HBO_2.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16C.HBO_2.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16C.HBO_2.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            break;
        case 0x60:
            Haltech.PD16C.SPI_1.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16C.SPI_1.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16C.SPI_1.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.SPI_1.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16C.SPI_1.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x61:
            Haltech.PD16C.SPI_2.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16C.SPI_2.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16C.SPI_2.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.SPI_2.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16C.SPI_2.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x62:
            Haltech.PD16C.SPI_3.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16C.SPI_3.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16C.SPI_3.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.SPI_3.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16C.SPI_3.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x63:
            Haltech.PD16C.SPI_4.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16C.SPI_4.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16C.SPI_4.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16C.SPI_4.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16C.SPI_4.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x80:
            Haltech.PD16C.AVI_1.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16C.AVI_1.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16C.AVI_1.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x81:
            Haltech.PD16C.AVI_2.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16C.AVI_2.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16C.AVI_2.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x82:
            Haltech.PD16C.AVI_3.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16C.AVI_3.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16C.AVI_3.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x83:
            Haltech.PD16C.AVI_4.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16C.AVI_4.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16C.AVI_4.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        default:
            break;
        }
    
    case 0x6E2:
        Haltech.PD16C.ECR_Status = (bool)dbc_decode(Message.data, false, true, 7, 1, 1, 0, 0);
        Haltech.PD16C.CANPower = (bool)dbc_decode(Message.data, false, true, 6, 1, 1, 0, 0);
        Haltech.PD16C.CANTermination = (bool)dbc_decode(Message.data, false, true, 5, 1, 1, 0, 0);
        break;
#endif

#ifdef ENABLE_PD16D
    case 0x6E8:
        // Multiplexed Signals
        switch (Message.data[0]) {
        case 0x00:
            Haltech.PD16D.HC25_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC25_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x01:
            Haltech.PD16D.HC25_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC25_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x02:
            Haltech.PD16D.HC25_3.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC25_3.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x03:
            Haltech.PD16D.HC25_4.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC25_4.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x20:
            Haltech.PD16D.HC8_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC8_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x21:
            Haltech.PD16D.HC8_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC8_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x22:
            Haltech.PD16D.HC8_3.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC8_3.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x23:
            Haltech.PD16D.HC8_4.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC8_4.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x24:
            Haltech.PD16D.HC8_5.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC8_5.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x25:
            Haltech.PD16D.HC8_6.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC8_6.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x26:
            Haltech.PD16D.HC8_7.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC8_7.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x27:
            Haltech.PD16D.HC8_8.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC8_8.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x28:
            Haltech.PD16D.HC8_9.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC8_9.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x29:
            Haltech.PD16D.HC8_10.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HC8_10.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;    
        case 0x40:
            Haltech.PD16D.HBO_1.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HBO_1.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        case 0x41:
            Haltech.PD16D.HBO_2.Duty_Cycle_CMD_percent = dbc_decode(Message.data, false, true, 16, 16, 0.1, 0, 1);
            Haltech.PD16D.HBO_2.Frequency_Hz = (uint16_t)dbc_decode(Message.data, false, true, 32, 16, 1, 0, 0);
            break;
        default:
            break;
        }
        break;

    case 0x6E9:
        // Multiplexed Signals
        switch (Message.data[0]) {  
        case 0x00:
            Haltech.PD16D.HC25_1.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC25_1.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC25_1.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC25_1.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC25_1.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC25_1.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16D.HC25_1.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16D.HC25_1.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x01:
            Haltech.PD16D.HC25_2.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC25_2.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC25_2.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC25_2.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC25_2.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC25_2.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16D.HC25_2.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16D.HC25_2.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x02:
            Haltech.PD16D.HC25_3.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC25_3.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC25_3.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC25_3.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC25_3.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC25_3.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16D.HC25_3.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16D.HC25_3.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x03:
            Haltech.PD16D.HC25_4.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC25_4.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC25_4.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC25_4.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC25_4.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC25_4.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            Haltech.PD16D.HC25_4.SoftstartCurrent_mA = dbc_decode(Message.data, false, true, 32, 8, 200, 0, 0);
            Haltech.PD16D.HC25_4.SoftStartDuration_mS = dbc_decode(Message.data, false, true, 32, 8, 100, 0, 0);
            break;
        case 0x20:
            Haltech.PD16D.HC8_1.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC8_1.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC8_1.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC8_1.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC8_1.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC8_1.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x21:
            Haltech.PD16D.HC8_2.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC8_2.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC8_2.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC8_2.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC8_2.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC8_2.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x22:
            Haltech.PD16D.HC8_3.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC8_3.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC8_3.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC8_3.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC8_3.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC8_3.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x23:
            Haltech.PD16D.HC8_4.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC8_4.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC8_4.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC8_4.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC8_4.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC8_4.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x24:
            Haltech.PD16D.HC8_5.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC8_5.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC8_5.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC8_5.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC8_5.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC8_5.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x25:
            Haltech.PD16D.HC8_6.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC8_6.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC8_6.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC8_6.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC8_6.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC8_6.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x26:
            Haltech.PD16D.HC8_7.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC8_7.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC8_7.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC8_7.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC8_7.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC8_7.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x27:
            Haltech.PD16D.HC8_8.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC8_8.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC8_8.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC8_8.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC8_8.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC8_8.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x28:
            Haltech.PD16D.HC8_9.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC8_9.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC8_9.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC8_9.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC8_9.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC8_9.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x29:
            Haltech.PD16D.HC8_10.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HC8_10.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HC8_10.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HC8_10.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HC8_10.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            Haltech.PD16D.HC8_10.FuseCurrent_mA = dbc_decode(Message.data, false, true, 24, 8, 200, 0, 0);
            break;
        case 0x40:
            Haltech.PD16D.HBO_1.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HBO_1.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HBO_1.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HBO_1.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HBO_1.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            break;
        case 0x41:
            Haltech.PD16D.HBO_2.ActiveState = dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.HBO_2.SafeState = dbc_decode(Message.data, false, true, 9, 2, 1, 0, 0);
            Haltech.PD16D.HBO_2.DriveType = dbc_decode(Message.data, false, true, 11, 2, 1, 0, 0);
            Haltech.PD16D.HBO_2.RetriesAllotted = dbc_decode(Message.data, false, true, 13, 2, 1, 0, 0);
            Haltech.PD16D.HBO_2.RetryDelay_s = dbc_decode(Message.data, false, true, 16, 8, 1, 0, 0);
            break;
        case 0x60:
            Haltech.PD16D.SPI_1.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16D.SPI_1.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16D.SPI_1.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.SPI_1.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16D.SPI_1.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x61:
            Haltech.PD16D.SPI_2.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16D.SPI_2.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16D.SPI_2.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.SPI_2.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16D.SPI_2.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x62:
            Haltech.PD16D.SPI_3.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16D.SPI_3.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16D.SPI_3.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.SPI_3.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16D.SPI_3.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x63:
            Haltech.PD16D.SPI_4.SensorType = (uint8_t)dbc_decode(Message.data, false, true, 14, 2, 1, 0, 0);
            Haltech.PD16D.SPI_4.Pullup = (bool)dbc_decode(Message.data, false, true, 9, 1, 1, 0, 0);
            Haltech.PD16D.SPI_4.EdgeDetect = (bool)dbc_decode(Message.data, false, true, 8, 1, 1, 0, 0);
            Haltech.PD16D.SPI_4.UpperThreshold_mV = dbc_decode(Message.data, false, true, 40, 16, 10, 0, 0);
            Haltech.PD16D.SPI_4.Glitchfilter = (uint16_t)dbc_decode(Message.data, false, true, 56, 16, 1, 0, 0);
            break;
        case 0x80:
            Haltech.PD16D.AVI_1.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16D.AVI_1.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16D.AVI_1.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x81:
            Haltech.PD16D.AVI_2.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16D.AVI_2.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16D.AVI_2.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x82:
            Haltech.PD16D.AVI_3.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16D.AVI_3.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16D.AVI_3.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        case 0x83:
            Haltech.PD16D.AVI_4.Pullup = (uint8_t)dbc_decode(Message.data, false, true, 8, 3, 1, 0, 0);
            Haltech.PD16D.AVI_4.SwitchOn_Threshold_mV = dbc_decode(Message.data, false, true, 24, 16, 1, 0, 0);
            Haltech.PD16D.AVI_4.SwitchOff_Threshold_mV = dbc_decode(Message.data, false, true, 40, 16, 1, 0, 0);
            break;
        default:
            break;
        }
    
    case 0x6EA:
        Haltech.PD16D.ECR_Status = (bool)dbc_decode(Message.data, false, true, 7, 1, 1, 0, 0);
        Haltech.PD16D.CANPower = (bool)dbc_decode(Message.data, false, true, 6, 1, 1, 0, 0);
        Haltech.PD16D.CANTermination = (bool)dbc_decode(Message.data, false, true, 5, 1, 1, 0, 0);
        break;
#endif


#ifdef ENABLE_ECU
    case 0x360:
        Haltech.ECU.Engine_Speed_rpm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 1, 0, 0);
        Haltech.ECU.Manifold_Pressure_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Throttle_Position_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 8, 0.1, 0, 1);
        Haltech.ECU.Coolant_Pressure_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, -101.3, 1);
        break;

    case 0x361:
        Haltech.ECU.Fuel_Pressure_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, -101.3, 1);
        Haltech.ECU.Oil_Pressure_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, -101.3, 1);
        Haltech.ECU.Engine_Demand_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Wastegate_Pressure_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, -101.3, 1);
        break;

    case 0x362:
        Haltech.ECU.Inj_Stg_1_DC_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Inj_Stg_2_DC_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Ignition_Angle_deg =
            dbc_decode(Message.data, DBC_SIGNED, true, 40, 16, 0.1, 0, 1);
        break;

    case 0x363:
        Haltech.ECU.Wheel_Slip_kmh =
            dbc_decode(Message.data, DBC_SIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Wheel_Diff_kmh =
            dbc_decode(Message.data, DBC_SIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Launch_Control_End_rpm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 1, 0, 0);
        break;

    case 0x364:
        Haltech.ECU.Injection_Stage_1_Avg_Pulsewidth_ms =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.001, 0, 3);
        Haltech.ECU.Injection_Stage_2_Avg_Pulsewidth_ms =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.001, 0, 3);
        Haltech.ECU.Injection_Stage_3_Avg_Pulsewidth_ms =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.001, 0, 3);
        Haltech.ECU.Injection_Stage_4_Avg_Pulsewidth_ms =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.001, 0, 3);
        break;

    case 0x368:
        Haltech.ECU.Lambda_1 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.001, 0, 3);
        Haltech.ECU.Lambda_2 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.001, 0, 3);
        Haltech.ECU.Lambda_3 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.001, 0, 3);
        Haltech.ECU.Lambda_4 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.001, 0, 3);
        break;

    case 0x369:
        Haltech.ECU.Trigger_System_Error_Count =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 1, 0, 0);
        Haltech.ECU.Trigger_Counter =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 1, 0, 0);
        Haltech.ECU.Trigger_Sync_Level =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 1, 0, 0);
        break;

    case 0x36A:
        Haltech.ECU.Knock_Level_1_db =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.01, 0, 2);
        Haltech.ECU.Knock_Level_2_db =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.01, 0, 2);
        break;

    case 0x36B:
        Haltech.ECU.Brake_Pressure_Front_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 1, -101.3, 0);
        Haltech.ECU.No2_Pressure_Sensor_1_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.22, -101.3, 1);
        Haltech.ECU.Turbo_Speed_Sensor_1_rpm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 10, 0, 0);
        Haltech.ECU.Lateral_G_ms2 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x36C:
        Haltech.ECU.Wheel_Speed_FL_kmh =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Wheel_Speed_FR_kmh =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Wheel_Speed_RL_kmh =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Wheel_Speed_RR_kmh =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x36D:
        Haltech.ECU.Exh_Cam_Angle_1_deg =
            dbc_decode(Message.data, DBC_SIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Exh_Cam_Angle_2_deg =
            dbc_decode(Message.data, DBC_SIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x36E:
        Haltech.ECU.Engine_Limiting_Active =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 1, 0, 0);
        Haltech.ECU.Launch_Control_Ignition_Retard_deg =
            dbc_decode(Message.data, DBC_SIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Launch_Control_Fuel_Enrich_percent =
            dbc_decode(Message.data, DBC_SIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Longitudinal_G_ms2 =
            dbc_decode(Message.data, DBC_SIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x36F:
        Haltech.ECU.Generic_Output_1_DC_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Boost_Control_Output_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        break;

    case 0x370:
        Haltech.ECU.Vehicle_Speed_kmh =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Int_Cam_Angle_1_deg =
            dbc_decode(Message.data, DBC_SIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Int_Cam_Angle_2_deg =
            dbc_decode(Message.data, DBC_SIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x371:
        Haltech.ECU.Fuel_Flow_ccmin =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 1, 0, 0);
        Haltech.ECU.Fuel_Flow_Return_ccmin =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 1, 0, 0);
        break;

    case 0x372:
        Haltech.ECU.Battery_Voltage_v =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Target_Boost_Level_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Barometric_Pressure_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x373:
        Haltech.ECU.EGT_1_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, -273.2, 1);
        Haltech.ECU.EGT_2_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, -273.2, 1);
        Haltech.ECU.EGT_3_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, -273.2, 1);
        Haltech.ECU.EGT_4_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, -273.2, 1);
        break;

    case 0x374:
        Haltech.ECU.EGT_5_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, -273.2, 1);
        Haltech.ECU.EGT_6_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, -273.2, 1);
        Haltech.ECU.EGT_7_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, -273.2, 1);
        Haltech.ECU.EGT_8_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, -273.2, 1);
        break;

    case 0x375:
        Haltech.ECU.EGT_9_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, -273.2, 1);
        Haltech.ECU.EGT_10_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, -273.2, 1);
        Haltech.ECU.EGT_11_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, -273.2, 1);
        Haltech.ECU.EGT_12_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, -273.2, 1);
        break;

    case 0x376:
        Haltech.ECU.Ambient_Air_Temperature_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, -273.2, 1);
        Haltech.ECU.Relative_Humidity_percent =
            dbc_decode(Message.data, DBC_SIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Specific_Humidity_ppm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 100, 0, 0);
        Haltech.ECU.Absolute_Humidity_gm3 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x3E0:
        Haltech.ECU.Coolant_Temperature_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, -273.2, 1);
        Haltech.ECU.Air_Temperature_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, -273.2, 1);
        Haltech.ECU.Fuel_Temperature_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, -273.2, 1);
        Haltech.ECU.Oil_Temperature_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, -273.2, 1);
        break;

    case 0x3E1:
        Haltech.ECU.Gearbox_Oil_Temperature_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, -273.2, 1);
        Haltech.ECU.Diff_Oil_Temperature_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, -273.2, 1);
        Haltech.ECU.Fuel_Composition_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, 0, 1);
        break;

    case 0x3E2:
        Haltech.ECU.Fuel_Level_liters =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, 0, 1);
        break;

    case 0x3E3:
        Haltech.ECU.STFT_Bank_1_percent =
            dbc_decode(Message.data, DBC_SIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.STFT_Bank_2_percent =
            dbc_decode(Message.data, DBC_SIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.LTFT_Bank_1_percent =
            dbc_decode(Message.data, DBC_SIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.LTFT_Bank_2_percent =
            dbc_decode(Message.data, DBC_SIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x3E4:
        Haltech.ECU.Neutral_Switch =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 15, 1, 1, 0, 0);
        Haltech.ECU.Reverse_Switch =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 14, 1, 1, 0, 0);
        Haltech.ECU.Gear_Switch =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 13, 1, 1, 0, 0);
        Haltech.ECU.Decel_Cut_Active =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 12, 1, 1, 0, 0);
        Haltech.ECU.Transient_Throttle_Active =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 11, 1, 1, 0, 0);
        Haltech.ECU.Brake_Pedal_Switch =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 10, 1, 1, 0, 0);
        Haltech.ECU.Clutch_Switch =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 9, 1, 1, 0, 0);
        Haltech.ECU.Oil_Pressure_Light =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 1, 1, 0, 0);
        Haltech.ECU.Launch_Control_Active =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 23, 1, 1, 0, 0);
        Haltech.ECU.Launch_Control_Switch =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 22, 1, 1, 0, 0);
        Haltech.ECU.Aux_RPM_Limiter_Active =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 21, 1, 1, 0, 0);
        Haltech.ECU.Flat_Shift_Switch =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 19, 1, 1, 0, 0);
        Haltech.ECU.Torque_Reduction_Active =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 17, 1, 1, 0, 0);
        Haltech.ECU.Traction_Control_Active =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 31, 1, 1, 0, 0);
        Haltech.ECU.Traction_Control_Enabled =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 30, 1, 1, 0, 0);
        Haltech.ECU.Aircon_Request =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 29, 1, 1, 0, 0);
        Haltech.ECU.Aircon_Output =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 28, 1, 1, 0, 0);
        Haltech.ECU.ThermoFan_4_On =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 27, 1, 1, 0, 0);
        Haltech.ECU.ThermoFan_3_On =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 26, 1, 1, 0, 0);
        Haltech.ECU.ThermoFan_2_On =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 25, 1, 1, 0, 0);
        Haltech.ECU.ThermoFan_1_On =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 1, 1, 0, 0);
        Haltech.ECU.Rotary_Trimpot_1 =
            dbc_decode(Message.data, DBC_SIGNED, true, 32, 8, 1, 0, 0);
        Haltech.ECU.Rotary_Trimpot_2 =
            dbc_decode(Message.data, DBC_SIGNED, true, 40, 8, 1, 0, 0);
        Haltech.ECU.Rotary_Trimpot_3 =
            dbc_decode(Message.data, DBC_SIGNED, true, 48, 8, 1, 0, 0);
        Haltech.ECU.Check_Engine_Light =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 63, 1, 1, 0, 0);
        Haltech.ECU.Battery_Light_Active =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 62, 1, 1, 0, 0);
        Haltech.ECU.HandBrake_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 57, 1, 1, 0, 0);
        Haltech.ECU.Traction_Control_Light =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 1, 1, 0, 0);
        break;

    case 0x3E5:
        Haltech.ECU.Ignition_Switch =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 0, 1, 1, 0, 0);
        Haltech.ECU.Turbo_Timer_Sec_Remaining =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 8, 1, 0, 0);
        Haltech.ECU.Turbo_Timer_Eng_Sec_Remaining =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 16, 8, 1, 0, 0);
        Haltech.ECU.Pit_Limiter_Error =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 30, 1, 1, 0, 0);
        Haltech.ECU.Pit_Limiter_Active =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 29, 1, 1, 0, 0);
        Haltech.ECU.Pit_Limiter_Switch_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 28, 1, 1, 0, 0);
        Haltech.ECU.ABS_Error =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 26, 1, 1, 0, 0);
        Haltech.ECU.ABS_Active =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 25, 1, 1, 0, 0);
        Haltech.ECU.ABS_Armed =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 1, 1, 0, 0);
        Haltech.ECU.Steering_Wheel_Angle =
            dbc_decode(Message.data, DBC_SIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Driveshaft_rpm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 1, 0, 0);
        break;

    case 0x3E6:
        Haltech.ECU.No2_Pressure_Sensor_2_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.22, -101.3, 1);
        Haltech.ECU.No2_Pressure_Sensor_3_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.22, -101.3, 1);
        Haltech.ECU.No2_Pressure_Sensor_4_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.22, -101.3, 1);
        Haltech.ECU.Turbo_Speed_Sensor_2_rpm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x3E7:
        Haltech.ECU.Generic_Sensor_1 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Generic_Sensor_2 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Generic_Sensor_3 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Generic_Sensor_4 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x3E8:
        Haltech.ECU.Generic_Sensor_5 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Generic_Sensor_6 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Generic_Sensor_7 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Generic_Sensor_8 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x3E9:
        Haltech.ECU.Generic_Sensor_9 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Generic_Sensor_10 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Target_Lambda =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.001, 0, 3);
        Haltech.ECU.Nitrous_Stage_1_Output =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 55, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Stage_2_Outout =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 54, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Stage_3_Output =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 53, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Stage_4_Outout =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 52, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Stage_5_Outout =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 51, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Stage_6_Output =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 50, 1, 1, 0, 0);
        Haltech.ECU.Water_Inj_Adv_Out_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 49, 1, 1, 0, 0);
        Haltech.ECU.TqMgmt_Knob =
            dbc_decode(Message.data, DBC_SIGNED, true, 56, 8, 1, 0, 0);
        break;

    case 0x3EA:
        Haltech.ECU.Gearbox_Line_Pressure_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, -101.3, 1);
        Haltech.ECU.Inj_Stage_3_DC_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Inj_Stage_4_DC_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Crankcase_Pressure_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, -101.3, 1);
        break;

    case 0x3EB:
        Haltech.ECU.Race_Timer_ms =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 32, 1, 0, 0);
        Haltech.ECU.Ignition_Angle_Bank_1_deg =
            dbc_decode(Message.data, DBC_SIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Ignition_Angle_Bank_2_deg =
            dbc_decode(Message.data, DBC_SIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x3EC:
        Haltech.ECU.TqMgmt_DS_Target_rpm =
            dbc_decode(Message.data, DBC_SIGNED, true, 8, 16, 1, 0, 0);
        Haltech.ECU.TqMgmt_DS_Error_rpm =
            dbc_decode(Message.data, DBC_SIGNED, true, 24, 16, 1, 0, 0);
        Haltech.ECU.TqMgmt_DS_Target_Err_Ign_Corr_deg =
            dbc_decode(Message.data, DBC_SIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.TqMgmt_DS_Timed_Ign_Corr_deg =
            dbc_decode(Message.data, DBC_SIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x3ED:
        Haltech.ECU.TqMgmt_Combined_Ign_Corr_deg =
            dbc_decode(Message.data, DBC_SIGNED, true, 8, 16, 0.1, 0, 1);
        break;

    case 0x3EE:
        Haltech.ECU.Lambda_5 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.001, 0, 3);
        Haltech.ECU.Lambda_6 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.001, 0, 3);
        Haltech.ECU.Lambda_7 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.001, 0, 3);
        Haltech.ECU.Lambda_8 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.001, 0, 3);
        break;

    case 0x3EF:
        Haltech.ECU.Lambda_9 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.001, 0, 3);
        Haltech.ECU.Lambda_10 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.001, 0, 3);
        Haltech.ECU.Lambda_11 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.001, 0, 3);
        Haltech.ECU.Lambda_12 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.001, 0, 3);
        break;

    case 0x3F0:
        Haltech.ECU.Damper_FL_Raw_mm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Damper_FR_Raw_mm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Damper_RL_Raw_mm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Damper_RR_Raw_mm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x3F1:
        Haltech.ECU.Damper_FL_mm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Damper_FR_mm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Damper_RL_mm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Damper_RR_mm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x469:
        Haltech.ECU.ECU_Temperature_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, -273.2, 1);
        break;

    case 0x470:
        Haltech.ECU.Lambda_Overall =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.001, 0, 3);
        Haltech.ECU.Lambda_Bank_1 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.001, 0, 3);
        Haltech.ECU.Lambda_Bank_2 =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.001, 0, 3);
        Haltech.ECU.Gear_Selector_Position =
            dbc_decode(Message.data, DBC_SIGNED, true, 48, 8, 1, 0, 0);
        Haltech.ECU.Gear =
            dbc_decode(Message.data, DBC_SIGNED, true, 56, 8, 1, 0, 0);
        break;

    case 0x471:
        Haltech.ECU.Inj_Differential_Pressure_kPa =
            dbc_decode(Message.data, DBC_SIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Accel_Pedal_Position_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Exhuast_Manifold_Pressure_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, 0, 1);
        break;

    case 0x472:
        Haltech.ECU.Cruise_Target_kmh =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Cruise_Last_Target_kmh =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Cruise_Error_kmh =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Cruise_Controller_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 52, 4, 1, 0, 0);
        Haltech.ECU.Cruise_Control_Input_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 12, 1, 0, 0);
        break;

    case 0x473:
        Haltech.ECU.Total_Fuel_Used_cc =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 32, 1, 0, 0);
        Haltech.ECU.Rolling_Antilag_Switch_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 39, 1, 1, 0, 0);
        Haltech.ECU.Antilag_Switch_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 38, 1, 1, 0, 0);
        Haltech.ECU.Antilag_Output_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 37, 1, 1, 0, 0);
        Haltech.ECU.Traction_Control_Switch_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 36, 1, 1, 0, 0);
        Haltech.ECU.Primary_Fuel_Pump_Output_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 35, 1, 1, 0, 0);
        Haltech.ECU.Aux_1_Fuel_Pump_Output_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 34, 1, 1, 0, 0);
        Haltech.ECU.Aux_2_Fuel_Pump_Output_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 33, 1, 1, 0, 0);
        Haltech.ECU.Aux_3_Fuel_Pump_Output_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 32, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Enable_1_Switch_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 47, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Enable_1_Output_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 46, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Enable_2_Switch_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 45, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Enable_2_Output_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 44, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Enable_3_Switch_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 43, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Enable_3_Output_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 42, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Enable_4_Switch_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 41, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Enable_4_Output_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Override_1_Switch_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 55, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Override_1_Output_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 54, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Override_2_Switch_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 53, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Override_2_Output_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 52, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Override_3_Switch_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 51, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Override_3_Output_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 50, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Override_4_Switch_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 49, 1, 1, 0, 0);
        Haltech.ECU.Nitrous_Override_4_Output_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 48, 1, 1, 0, 0);
        Haltech.ECU.Water_Inj_Adv_Enable_Sw_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 63, 1, 1, 0, 0);
        Haltech.ECU.Water_Inj_Adv_Enable_Out_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 62, 1, 1, 0, 0);
        Haltech.ECU.Water_Inj_Adv_Override_Sw_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 61, 1, 1, 0, 0);
        Haltech.ECU.Water_Inj_Adv_Override_Out_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 60, 1, 1, 0, 0);
        Haltech.ECU.Cut_Percentage_Method =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 4, 1, 0, 0);
        break;

    case 0x474:
        Haltech.ECU.Vertical_G_ms2 =
            dbc_decode(Message.data, DBC_SIGNED, true, 8, 16, 0.0101972, 0, 2);
        Haltech.ECU.Pitch_Rate_degsec =
            dbc_decode(Message.data, DBC_SIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Roll_Rate_degsec =
            dbc_decode(Message.data, DBC_SIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Yaw_Rate_degsec =
            dbc_decode(Message.data, DBC_SIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x475:
        Haltech.ECU.Primary_Fuel_Pump_Duty_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, 0, 1);
        Haltech.ECU.Aux_1_Fuel_Pump_Duty_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Aux_2_Fuel_Pump_Duty_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Aux_3_Fuel_Pump_Duty_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x476:
        Haltech.ECU.Brake_Pressure_Rear_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 1, -101.3, 0);
        Haltech.ECU.Brake_Pressure_Front_Ratio_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Brake_Pressure_Rear_Ratio_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, 0, 1);
        Haltech.ECU.Brake_Pressure_Difference_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 1, 0, 0);
        break;

    case 0x477:
        Haltech.ECU.Engine_Limiter_Max_rpm =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 1, 0, 0);
        Haltech.ECU.Cut_Percentage_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, 0, 1);
        Haltech.ECU.Engine_Limiter_Function =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 32, 8, 1, 0, 0);
        Haltech.ECU.RPM_Limiter_Function =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 8, 1, 0, 0);
        Haltech.ECU.Cut_Percentage_Function =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 48, 8, 1, 0, 0);
        Haltech.ECU.Engine_Limiter_Method =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 60, 4, 1, 0, 0);
        Haltech.ECU.RPM_Limiter_Method =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 4, 1, 0, 0);
        break;

    case 0x6F0:
        Haltech.ECU.FL_Tire_Pressure_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, -101.3, 1);
        Haltech.ECU.FR_Tire_Pressure_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, -101.3, 1);
        Haltech.ECU.RL_Tire_Pressure_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, -101.3, 1);
        Haltech.ECU.RR_Tire_Pressure_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, -101.3, 1);
        break;

    case 0x6F1:
        Haltech.ECU.FL_Tire_Temp_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 1, -273.2, 0);
        Haltech.ECU.FR_Tire_Temp_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 1, -273.2, 0);
        Haltech.ECU.RL_Tire_Temp_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 1, -273.2, 0);
        Haltech.ECU.RR_Tire_Temp_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 1, -273.2, 0);
        break;

    case 0x6F2:
        Haltech.ECU.FL_TPMS_Voltage_v =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.001, 0, 3);
        Haltech.ECU.FR_TPMS_Voltage_v =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.001, 0, 3);
        Haltech.ECU.RL_TPMS_Voltage_v =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.001, 0, 3);
        Haltech.ECU.RR_TPMS_Voltage_v =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.001, 0, 3);
        break;

    case 0x6F3:
        Haltech.ECU.Front_Tire_Pres_Target_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 16, 0.1, -101.3, 1);
        Haltech.ECU.Rear_Tire_Pres_Target_kPa =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 16, 0.1, -101.3, 1);
        Haltech.ECU.RR_Tire_Leaking =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 35, 1, 1, 0, 0);
        Haltech.ECU.RL_Tire_Leaking =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 34, 1, 1, 0, 0);
        Haltech.ECU.FR_Tire_Leaking =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 33, 1, 1, 0, 0);
        Haltech.ECU.FL_Tire_Leaking =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 32, 1, 1, 0, 0);
        Haltech.ECU.Engine_Protection_Level =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 8, 1, 0, 0);
        Haltech.ECU.Engine_Protection_DTC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 14, 1, 0, 0);
        break;

    case 0x6F4:
        Haltech.ECU.Right_Indicator_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 4, 1, 1, 0, 0);
        Haltech.ECU.Left_Indicator_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 3, 1, 1, 0, 0);
        Haltech.ECU.High_Beam_Light_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 2, 1, 1, 0, 0);
        Haltech.ECU.Head_Light_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 1, 1, 1, 0, 0);
        Haltech.ECU.Park_Light_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 0, 1, 1, 0, 0);
        break;

    case 0x6F6:
        Haltech.ECU.Fuel_Used_Since_Trip1_Reset =
            dbc_decode(Message.data, DBC_SIGNED, true, 24, 32, 1, 0, 0);
        Haltech.ECU.Trip_Meter_1 =
            dbc_decode(Message.data, DBC_SIGNED, true, 56, 32, 1, 0, 0);
        break;

    case 0x6F7:
        Haltech.ECU.Generic_Output_20_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 11, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_19_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 10, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_18_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 9, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_17_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 8, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_16_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 23, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_15_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 22, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_14_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 21, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_13_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 20, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_12_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 19, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_11_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 18, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_10_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 17, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_9_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 16, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_8_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 31, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_7_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 30, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_6_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 29, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_5_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 28, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_4_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 27, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_3_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 26, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_2_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 25, 1, 1, 0, 0);
        Haltech.ECU.Generic_Output_1_State =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 24, 1, 1, 0, 0);
        Haltech.ECU.Calculated_Air_Temp_degC =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 40, 16, 0.1, -273.2, 1);
        Haltech.ECU.Water_Inj_Adv_Solenoid_Duty_percent =
            dbc_decode(Message.data, DBC_UNSIGNED, true, 56, 16, 0.1, 0, 1);
        break;

    case 0x6F8:
        Haltech.ECU.Exhaust_Cutout_State =
            dbc_decode(Message.data, DBC_SIGNED, true, 0, 8, 1, 0, 0);
        Haltech.ECU.Nitrous_Bottle_Opener_State =
            dbc_decode(Message.data, DBC_SIGNED, true, 8, 8, 1, 0, 0);
        Haltech.ECU.Generic_Open_Loop_Motor_1_State =
            dbc_decode(Message.data, DBC_SIGNED, true, 16, 8, 1, 0, 0);
        Haltech.ECU.Generic_Open_Loop_Motor_2_State =
            dbc_decode(Message.data, DBC_SIGNED, true, 24, 8, 1, 0, 0);
        Haltech.ECU.Generic_Open_Loop_Motor_3_State =
            dbc_decode(Message.data, DBC_SIGNED, true, 32, 8, 1, 0, 0);
        break;
#endif

    default:
        break;
    }
}

void haltech_Events_100Hz(void)
{
#ifdef ENABLE_IO16A
    memset(Haltech.IO16A.Message, 0, 8);
    Haltech.IO16A.AVI_1.State = UpdateAVIState(Haltech.IO16A.AVI_1.State, Haltech.IO16A.AVI_1.SwitchOn_Threshold_mV, Haltech.IO16A.AVI_1.SwitchOff_Threshold_mV, Haltech.IO16A.AVI_1.Voltage_mV);
    Haltech.IO16A.AVI_2.State = UpdateAVIState(Haltech.IO16A.AVI_2.State, Haltech.IO16A.AVI_2.SwitchOn_Threshold_mV, Haltech.IO16A.AVI_2.SwitchOff_Threshold_mV, Haltech.IO16A.AVI_2.Voltage_mV);
    Haltech.IO16A.AVI_3.State = UpdateAVIState(Haltech.IO16A.AVI_3.State, Haltech.IO16A.AVI_3.SwitchOn_Threshold_mV, Haltech.IO16A.AVI_3.SwitchOff_Threshold_mV, Haltech.IO16A.AVI_3.Voltage_mV);
    Haltech.IO16A.AVI_4.State = UpdateAVIState(Haltech.IO16A.AVI_4.State, Haltech.IO16A.AVI_4.SwitchOn_Threshold_mV, Haltech.IO16A.AVI_4.SwitchOff_Threshold_mV, Haltech.IO16A.AVI_4.Voltage_mV);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_1.State, 7, 1, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_1.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_2.State, 23, 1, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_2.Voltage_mV, 24, 15, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_3.State, 39, 1, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_3.Voltage_mV, 40, 15, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_4.State, 55, 1, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_4.Voltage_mV, 56, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x330, 8, Haltech.IO16A.Message);

    memset(Haltech.IO16A.Message, 0, 8);
    Haltech.IO16A.AVI_5.State = UpdateAVIState(Haltech.IO16A.AVI_5.State, Haltech.IO16A.AVI_5.SwitchOn_Threshold_mV, Haltech.IO16A.AVI_5.SwitchOff_Threshold_mV, Haltech.IO16A.AVI_5.Voltage_mV);
    Haltech.IO16A.AVI_6.State = UpdateAVIState(Haltech.IO16A.AVI_6.State, Haltech.IO16A.AVI_6.SwitchOn_Threshold_mV, Haltech.IO16A.AVI_6.SwitchOff_Threshold_mV, Haltech.IO16A.AVI_6.Voltage_mV);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_5.State, 7, 1, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_5.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_6.State, 23, 1, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_6.Voltage_mV, 24, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x331, 8, Haltech.IO16A.Message);

    memset(Haltech.IO16A.Message, 0, 8);
    Haltech.IO16A.SPI_1.State = (Haltech.IO16A.SPI_1.Voltage_mV > Haltech.IO16A.SPI_1.UpperThreshold_mV) ? true : false;
    Haltech.IO16A.SPI_2.State = (Haltech.IO16A.SPI_2.Voltage_mV > Haltech.IO16A.SPI_2.UpperThreshold_mV) ? true : false;
    Haltech.IO16A.SPI_3.State = (Haltech.IO16A.SPI_3.Voltage_mV > Haltech.IO16A.SPI_3.UpperThreshold_mV) ? true : false;
    Haltech.IO16A.SPI_4.State = (Haltech.IO16A.SPI_4.Voltage_mV > Haltech.IO16A.SPI_4.UpperThreshold_mV) ? true : false;

    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_1.State, 7, 1, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_1.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_2.State, 23, 1, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_2.Voltage_mV, 24, 15, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_3.State, 39, 1, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_3.Voltage_mV, 40, 15, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_4.State, 55, 1, 1, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_4.Voltage_mV, 56, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x332, 8, Haltech.IO16A.Message);


    memset(Haltech.IO16A.Message, 0, 8);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_1.Frequency_Hz, 8, 16, 0.25, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_2.Frequency_Hz, 24, 16, 0.25, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_3.Frequency_Hz, 40, 16, 0.25, 0);
    dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_4.Frequency_Hz, 56, 16, 0.25, 0);
    send_message(HALTECH_CAN, false, 0x333, 8, Haltech.IO16A.Message);

#endif

#ifdef ENABLE_IO16B
    memset(Haltech.IO16B.Message, 0, 8);
    Haltech.IO16B.AVI_1.State = UpdateAVIState(Haltech.IO16B.AVI_1.State, Haltech.IO16B.AVI_1.SwitchOn_Threshold_mV, Haltech.IO16B.AVI_1.SwitchOff_Threshold_mV, Haltech.IO16B.AVI_1.Voltage_mV);
    Haltech.IO16B.AVI_2.State = UpdateAVIState(Haltech.IO16B.AVI_2.State, Haltech.IO16B.AVI_2.SwitchOn_Threshold_mV, Haltech.IO16B.AVI_2.SwitchOff_Threshold_mV, Haltech.IO16B.AVI_2.Voltage_mV);
    Haltech.IO16B.AVI_3.State = UpdateAVIState(Haltech.IO16B.AVI_3.State, Haltech.IO16B.AVI_3.SwitchOn_Threshold_mV, Haltech.IO16B.AVI_3.SwitchOff_Threshold_mV, Haltech.IO16B.AVI_3.Voltage_mV);
    Haltech.IO16B.AVI_4.State = UpdateAVIState(Haltech.IO16B.AVI_4.State, Haltech.IO16B.AVI_4.SwitchOn_Threshold_mV, Haltech.IO16B.AVI_4.SwitchOff_Threshold_mV, Haltech.IO16B.AVI_4.Voltage_mV);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_1.State, 7, 1, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_1.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_2.State, 23, 1, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_2.Voltage_mV, 24, 15, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_3.State, 39, 1, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_3.Voltage_mV, 40, 15, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_4.State, 55, 1, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_4.Voltage_mV, 56, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x334, 8, Haltech.IO16B.Message);

    memset(Haltech.IO16B.Message, 0, 8);
    Haltech.IO16B.AVI_5.State = UpdateAVIState(Haltech.IO16B.AVI_5.State, Haltech.IO16B.AVI_5.SwitchOn_Threshold_mV, Haltech.IO16B.AVI_5.SwitchOff_Threshold_mV, Haltech.IO16B.AVI_5.Voltage_mV);
    Haltech.IO16B.AVI_6.State = UpdateAVIState(Haltech.IO16B.AVI_6.State, Haltech.IO16B.AVI_6.SwitchOn_Threshold_mV, Haltech.IO16B.AVI_6.SwitchOff_Threshold_mV, Haltech.IO16B.AVI_6.Voltage_mV);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_5.State, 7, 1, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_5.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_6.State, 23, 1, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_6.Voltage_mV, 24, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x335, 8, Haltech.IO16B.Message);

    memset(Haltech.IO16B.Message, 0, 8);
    Haltech.IO16B.SPI_1.State = (Haltech.IO16B.SPI_1.Voltage_mV > Haltech.IO16B.SPI_1.UpperThreshold_mV) ? true : false;
    Haltech.IO16B.SPI_2.State = (Haltech.IO16B.SPI_2.Voltage_mV > Haltech.IO16B.SPI_2.UpperThreshold_mV) ? true : false;
    Haltech.IO16B.SPI_3.State = (Haltech.IO16B.SPI_3.Voltage_mV > Haltech.IO16B.SPI_3.UpperThreshold_mV) ? true : false;
    Haltech.IO16B.SPI_4.State = (Haltech.IO16B.SPI_4.Voltage_mV > Haltech.IO16B.SPI_4.UpperThreshold_mV) ? true : false;

    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_1.State, 7, 1, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_1.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_2.State, 23, 1, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_2.Voltage_mV, 24, 15, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_3.State, 39, 1, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_3.Voltage_mV, 40, 15, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_4.State, 55, 1, 1, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_4.Voltage_mV, 56, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x336, 8, Haltech.IO16B.Message);


    memset(Haltech.IO16B.Message, 0, 8);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_1.Frequency_Hz, 8, 16, 0.25, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_2.Frequency_Hz, 24, 16, 0.25, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_3.Frequency_Hz, 40, 16, 0.25, 0);
    dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_4.Frequency_Hz, 56, 16, 0.25, 0);
    send_message(HALTECH_CAN, false, 0x337, 8, Haltech.IO16B.Message);

#endif
#ifdef ENABLE_PD16A
    memset(Haltech.PD16A.Message, 0, 8);
    Haltech.PD16A.AVI_1.State = UpdateAVIState(Haltech.PD16A.AVI_1.State, Haltech.PD16A.AVI_1.SwitchOn_Threshold_mV, Haltech.PD16A.AVI_1.SwitchOff_Threshold_mV, Haltech.PD16A.AVI_1.Voltage_mV);
    Haltech.PD16A.AVI_2.State = UpdateAVIState(Haltech.PD16A.AVI_2.State, Haltech.PD16A.AVI_2.SwitchOn_Threshold_mV, Haltech.PD16A.AVI_2.SwitchOff_Threshold_mV, Haltech.PD16A.AVI_2.Voltage_mV);
    Haltech.PD16A.AVI_3.State = UpdateAVIState(Haltech.PD16A.AVI_3.State, Haltech.PD16A.AVI_3.SwitchOn_Threshold_mV, Haltech.PD16A.AVI_3.SwitchOff_Threshold_mV, Haltech.PD16A.AVI_3.Voltage_mV);
    Haltech.PD16A.AVI_4.State = UpdateAVIState(Haltech.PD16A.AVI_4.State, Haltech.PD16A.AVI_4.SwitchOn_Threshold_mV, Haltech.PD16A.AVI_4.SwitchOff_Threshold_mV, Haltech.PD16A.AVI_4.Voltage_mV);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_1.State, 7, 1, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_1.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_2.State, 23, 1, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_2.Voltage_mV, 24, 15, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_3.State, 39, 1, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_3.Voltage_mV, 40, 15, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_4.State, 55, 1, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_4.Voltage_mV, 56, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x320, 8, Haltech.PD16A.Message);

    memset(Haltech.PD16A.Message, 0, 8);
    Haltech.PD16A.SPI_1.State = (Haltech.PD16A.SPI_1.Voltage_mV > Haltech.PD16A.SPI_1.UpperThreshold_mV) ? true : false;
    Haltech.PD16A.SPI_2.State = (Haltech.PD16A.SPI_2.Voltage_mV > Haltech.PD16A.SPI_2.UpperThreshold_mV) ? true : false;
    Haltech.PD16A.SPI_3.State = (Haltech.PD16A.SPI_3.Voltage_mV > Haltech.PD16A.SPI_3.UpperThreshold_mV) ? true : false;
    Haltech.PD16A.SPI_4.State = (Haltech.PD16A.SPI_4.Voltage_mV > Haltech.PD16A.SPI_4.UpperThreshold_mV) ? true : false;

    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_1.State, 7, 1, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_1.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_2.State, 23, 1, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_2.Voltage_mV, 24, 15, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_3.State, 39, 1, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_3.Voltage_mV, 40, 15, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_4.State, 55, 1, 1, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_4.Voltage_mV, 56, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x324, 8, Haltech.PD16A.Message);


    memset(Haltech.PD16A.Message, 0, 8);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_1.Frequency_Hz, 8, 16, 0.25, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_2.Frequency_Hz, 24, 16, 0.25, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_3.Frequency_Hz, 40, 16, 0.25, 0);
    dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_4.Frequency_Hz, 56, 16, 0.25, 0);
    send_message(HALTECH_CAN, false, 0x328, 8, Haltech.PD16A.Message);
#endif

#ifdef ENABLE_PD16B
    memset(Haltech.PD16B.Message, 0, 8);
    Haltech.PD16B.AVI_1.State = UpdateAVIState(Haltech.PD16B.AVI_1.State, Haltech.PD16B.AVI_1.SwitchOn_Threshold_mV, Haltech.PD16B.AVI_1.SwitchOff_Threshold_mV, Haltech.PD16B.AVI_1.Voltage_mV);
    Haltech.PD16B.AVI_2.State = UpdateAVIState(Haltech.PD16B.AVI_2.State, Haltech.PD16B.AVI_2.SwitchOn_Threshold_mV, Haltech.PD16B.AVI_2.SwitchOff_Threshold_mV, Haltech.PD16B.AVI_2.Voltage_mV);
    Haltech.PD16B.AVI_3.State = UpdateAVIState(Haltech.PD16B.AVI_3.State, Haltech.PD16B.AVI_3.SwitchOn_Threshold_mV, Haltech.PD16B.AVI_3.SwitchOff_Threshold_mV, Haltech.PD16B.AVI_3.Voltage_mV);
    Haltech.PD16B.AVI_4.State = UpdateAVIState(Haltech.PD16B.AVI_4.State, Haltech.PD16B.AVI_4.SwitchOn_Threshold_mV, Haltech.PD16B.AVI_4.SwitchOff_Threshold_mV, Haltech.PD16B.AVI_4.Voltage_mV);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_1.State, 7, 1, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_1.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_2.State, 23, 1, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_2.Voltage_mV, 24, 15, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_3.State, 39, 1, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_3.Voltage_mV, 40, 15, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_4.State, 55, 1, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_4.Voltage_mV, 56, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x321, 8, Haltech.PD16B.Message);

    memset(Haltech.PD16B.Message, 0, 8);
    Haltech.PD16B.SPI_1.State = (Haltech.PD16B.SPI_1.Voltage_mV > Haltech.PD16B.SPI_1.UpperThreshold_mV) ? true : false;
    Haltech.PD16B.SPI_2.State = (Haltech.PD16B.SPI_2.Voltage_mV > Haltech.PD16B.SPI_2.UpperThreshold_mV) ? true : false;
    Haltech.PD16B.SPI_3.State = (Haltech.PD16B.SPI_3.Voltage_mV > Haltech.PD16B.SPI_3.UpperThreshold_mV) ? true : false;
    Haltech.PD16B.SPI_4.State = (Haltech.PD16B.SPI_4.Voltage_mV > Haltech.PD16B.SPI_4.UpperThreshold_mV) ? true : false;

    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_1.State, 7, 1, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_1.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_2.State, 23, 1, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_2.Voltage_mV, 24, 15, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_3.State, 39, 1, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_3.Voltage_mV, 40, 15, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_4.State, 55, 1, 1, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_4.Voltage_mV, 56, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x325, 8, Haltech.PD16B.Message);


    memset(Haltech.PD16B.Message, 0, 8);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_1.Frequency_Hz, 8, 16, 0.25, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_2.Frequency_Hz, 24, 16, 0.25, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_3.Frequency_Hz, 40, 16, 0.25, 0);
    dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_4.Frequency_Hz, 56, 16, 0.25, 0);
    send_message(HALTECH_CAN, false, 0x329, 8, Haltech.PD16B.Message);

#endif

#ifdef ENABLE_PD16C
    memset(Haltech.PD16C.Message, 0, 8);
    Haltech.PD16C.AVI_1.State = UpdateAVIState(Haltech.PD16C.AVI_1.State, Haltech.PD16C.AVI_1.SwitchOn_Threshold_mV, Haltech.PD16C.AVI_1.SwitchOff_Threshold_mV, Haltech.PD16C.AVI_1.Voltage_mV);
    Haltech.PD16C.AVI_2.State = UpdateAVIState(Haltech.PD16C.AVI_2.State, Haltech.PD16C.AVI_2.SwitchOn_Threshold_mV, Haltech.PD16C.AVI_2.SwitchOff_Threshold_mV, Haltech.PD16C.AVI_2.Voltage_mV);
    Haltech.PD16C.AVI_3.State = UpdateAVIState(Haltech.PD16C.AVI_3.State, Haltech.PD16C.AVI_3.SwitchOn_Threshold_mV, Haltech.PD16C.AVI_3.SwitchOff_Threshold_mV, Haltech.PD16C.AVI_3.Voltage_mV);
    Haltech.PD16C.AVI_4.State = UpdateAVIState(Haltech.PD16C.AVI_4.State, Haltech.PD16C.AVI_4.SwitchOn_Threshold_mV, Haltech.PD16C.AVI_4.SwitchOff_Threshold_mV, Haltech.PD16C.AVI_4.Voltage_mV);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_1.State, 7, 1, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_1.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_2.State, 23, 1, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_2.Voltage_mV, 24, 15, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_3.State, 39, 1, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_3.Voltage_mV, 40, 15, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_4.State, 55, 1, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_4.Voltage_mV, 56, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x322, 8, Haltech.PD16C.Message);

    memset(Haltech.PD16C.Message, 0, 8);
    Haltech.PD16C.SPI_1.State = (Haltech.PD16C.SPI_1.Voltage_mV > Haltech.PD16C.SPI_1.UpperThreshold_mV) ? true : false;
    Haltech.PD16C.SPI_2.State = (Haltech.PD16C.SPI_2.Voltage_mV > Haltech.PD16C.SPI_2.UpperThreshold_mV) ? true : false;
    Haltech.PD16C.SPI_3.State = (Haltech.PD16C.SPI_3.Voltage_mV > Haltech.PD16C.SPI_3.UpperThreshold_mV) ? true : false;
    Haltech.PD16C.SPI_4.State = (Haltech.PD16C.SPI_4.Voltage_mV > Haltech.PD16C.SPI_4.UpperThreshold_mV) ? true : false;

    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_1.State, 7, 1, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_1.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_2.State, 23, 1, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_2.Voltage_mV, 24, 15, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_3.State, 39, 1, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_3.Voltage_mV, 40, 15, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_4.State, 55, 1, 1, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_4.Voltage_mV, 56, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x326, 8, Haltech.PD16C.Message);


    memset(Haltech.PD16C.Message, 0, 8);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_1.Frequency_Hz, 8, 16, 0.25, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_2.Frequency_Hz, 24, 16, 0.25, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_3.Frequency_Hz, 40, 16, 0.25, 0);
    dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_4.Frequency_Hz, 56, 16, 0.25, 0);
    send_message(HALTECH_CAN, false, 0x32A, 8, Haltech.PD16C.Message);

#endif

#ifdef ENABLE_PD16D
    memset(Haltech.PD16D.Message, 0, 8);
    Haltech.PD16D.AVI_1.State = UpdateAVIState(Haltech.PD16D.AVI_1.State, Haltech.PD16D.AVI_1.SwitchOn_Threshold_mV, Haltech.PD16D.AVI_1.SwitchOff_Threshold_mV, Haltech.PD16D.AVI_1.Voltage_mV);
    Haltech.PD16D.AVI_2.State = UpdateAVIState(Haltech.PD16D.AVI_2.State, Haltech.PD16D.AVI_2.SwitchOn_Threshold_mV, Haltech.PD16D.AVI_2.SwitchOff_Threshold_mV, Haltech.PD16D.AVI_2.Voltage_mV);
    Haltech.PD16D.AVI_3.State = UpdateAVIState(Haltech.PD16D.AVI_3.State, Haltech.PD16D.AVI_3.SwitchOn_Threshold_mV, Haltech.PD16D.AVI_3.SwitchOff_Threshold_mV, Haltech.PD16D.AVI_3.Voltage_mV);
    Haltech.PD16D.AVI_4.State = UpdateAVIState(Haltech.PD16D.AVI_4.State, Haltech.PD16D.AVI_4.SwitchOn_Threshold_mV, Haltech.PD16D.AVI_4.SwitchOff_Threshold_mV, Haltech.PD16D.AVI_4.Voltage_mV);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_1.State, 7, 1, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_1.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_2.State, 23, 1, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_2.Voltage_mV, 24, 15, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_3.State, 39, 1, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_3.Voltage_mV, 40, 15, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_4.State, 55, 1, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_4.Voltage_mV, 56, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x323, 8, Haltech.PD16D.Message);

    memset(Haltech.PD16D.Message, 0, 8);
    Haltech.PD16D.SPI_1.State = (Haltech.PD16D.SPI_1.Voltage_mV > Haltech.PD16D.SPI_1.UpperThreshold_mV) ? true : false;
    Haltech.PD16D.SPI_2.State = (Haltech.PD16D.SPI_2.Voltage_mV > Haltech.PD16D.SPI_2.UpperThreshold_mV) ? true : false;
    Haltech.PD16D.SPI_3.State = (Haltech.PD16D.SPI_3.Voltage_mV > Haltech.PD16D.SPI_3.UpperThreshold_mV) ? true : false;
    Haltech.PD16D.SPI_4.State = (Haltech.PD16D.SPI_4.Voltage_mV > Haltech.PD16D.SPI_4.UpperThreshold_mV) ? true : false;

    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_1.State, 7, 1, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_1.Voltage_mV, 8, 15, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_2.State, 23, 1, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_2.Voltage_mV, 24, 15, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_3.State, 39, 1, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_3.Voltage_mV, 40, 15, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_4.State, 55, 1, 1, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_4.Voltage_mV, 56, 15, 1, 0);
    send_message(HALTECH_CAN, false, 0x327, 8, Haltech.PD16D.Message);


    memset(Haltech.PD16D.Message, 0, 8);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_1.Frequency_Hz, 8, 16, 0.25, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_2.Frequency_Hz, 24, 16, 0.25, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_3.Frequency_Hz, 40, 16, 0.25, 0);
    dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_4.Frequency_Hz, 56, 16, 0.25, 0);
    send_message(HALTECH_CAN, false, 0x32B, 8, Haltech.PD16D.Message);

#endif
}


void haltech_Events_50Hz(void)
{
#ifdef ENABLE_IO12A
        // Message 2C0
        memset(Haltech.IO12A.Message, 0, 8);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.AVI_1.Voltage_mV, 8, 12, 1.22100122100122, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.AVI_2.Voltage_mV, 24, 12, 1.22100122100122, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.AVI_3.Voltage_mV, 40, 12, 1.22100122100122, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.AVI_4.Voltage_mV, 56, 12, 1.22100122100122, 0);
        send_message(HALTECH_CAN, false, 0x2C0, 8, Haltech.IO12A.Message);


        // Message 2C2
        memset(Haltech.IO12A.Message, 0, 8);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.DPI_1.DutyCycle_percent, 14, 10, 0.1, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, frequency_Hz_to_period_10uS(Haltech.IO12A.DPI_1.Frequency_Hz), 24, 17, 0.01, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.DPI_2.DutyCycle_percent, 46, 10, 0.1, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, frequency_Hz_to_period_10uS(Haltech.IO12A.DPI_2.Frequency_Hz), 56, 17, 0.01, 0);
        send_message(HALTECH_CAN, false, 0x2C2, 8, Haltech.IO12A.Message);

        // Message 2C4
        memset(Haltech.IO12A.Message, 0, 8);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.DPI_3.DutyCycle_percent, 14, 10, 0.1, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, frequency_Hz_to_period_10uS(Haltech.IO12A.DPI_3.Frequency_Hz), 24, 17, 0.01, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.DPI_4.DutyCycle_percent, 46, 10, 0.1, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, frequency_Hz_to_period_10uS(Haltech.IO12A.DPI_4.Frequency_Hz), 56, 17, 0.01, 0);
        send_message(HALTECH_CAN, false, 0x2C4, 8, Haltech.IO12A.Message);

        // Message 2C6
        memset(Haltech.IO12A.Message, 0, 8);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.Status, 4, 4, 1, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.ID_Conflict, 0, 1, 1, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.FW_Boot_Version, 10, 6, 1, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.FW_Major, 8, 2, 1, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.FW_Minor, 16, 8, 1, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.FW_Bugfix, 24, 8, 1, 0);
        dbc_encode(Haltech.IO12A.Message, 8, DBC_UNSIGNED, true, Haltech.IO12A.FW_Release, 32, 8, 1, 0);
        send_message(HALTECH_CAN, false, 0x2C6, 8, Haltech.IO12A.Message);
#endif

#ifdef ENABLE_IO12B
        // Message 2C1
        memset(Haltech.IO12B.Message, 0, 8);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.AVI_1.Voltage_mV, 8, 12, 1.22100122100122, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.AVI_2.Voltage_mV, 24, 12, 1.22100122100122, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.AVI_3.Voltage_mV, 40, 12, 1.22100122100122, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.AVI_4.Voltage_mV, 56, 12, 1.22100122100122, 0);
        send_message(HALTECH_CAN, false, 0x2C1, 8, Haltech.IO12B.Message);


        // Message 2C3
        memset(Haltech.IO12B.Message, 0, 8);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.DPI_1.DutyCycle_percent, 14, 10, 0.1, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, frequency_Hz_to_period_10uS(Haltech.IO12B.DPI_1.Frequency_Hz), 24, 17, 0.01, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.DPI_2.DutyCycle_percent, 46, 10, 0.1, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, frequency_Hz_to_period_10uS(Haltech.IO12B.DPI_2.Frequency_Hz), 56, 17, 0.01, 0);
        send_message(HALTECH_CAN, false, 0x2C3, 8, Haltech.IO12B.Message);

        // Message 2C5
        memset(Haltech.IO12B.Message, 0, 8);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.DPI_3.DutyCycle_percent, 14, 10, 0.1, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, frequency_Hz_to_period_10uS(Haltech.IO12B.DPI_3.Frequency_Hz), 24, 17, 0.01, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.DPI_4.DutyCycle_percent, 46, 10, 0.1, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, frequency_Hz_to_period_10uS(Haltech.IO12B.DPI_4.Frequency_Hz), 56, 17, 0.01, 0);
        send_message(HALTECH_CAN, false, 0x2C5, 8, Haltech.IO12B.Message);

        // Message 2C7
        memset(Haltech.IO12B.Message, 0, 8);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.Status, 4, 4, 1, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.ID_Conflict, 0, 1, 1, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.FW_Boot_Version, 10, 6, 1, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.FW_Major, 8, 2, 1, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.FW_Minor, 16, 8, 1, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.FW_Bugfix, 24, 8, 1, 0);
        dbc_encode(Haltech.IO12B.Message, 8, DBC_UNSIGNED, true, Haltech.IO12B.FW_Release, 32, 8, 1, 0);
        send_message(HALTECH_CAN, false, 0x2C7, 8, Haltech.IO12B.Message);
#endif

#ifdef ENABLE_IO16A

    switch (Haltech.IO16A.Counter % 10)
    {
    case 0:
        // --- 6AB Mux ID: 0x60 SPI 1 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x60, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_1.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_1.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_1.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AB, 8, Haltech.IO16A.Message);
        break;

    case 1:
        // --- 6AB Mux ID: 0x61 SPI 2 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x61, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_2.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_2.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_2.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AB, 8, Haltech.IO16A.Message);
        break;

    case 2:
        // --- 6AB Mux ID: 0x62 SPI 3 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x62, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_3.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_3.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_3.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AB, 8, Haltech.IO16A.Message);
        break;

    case 3:
        // --- 6AB Mux ID: 0x63 SPI 4 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x63, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_4.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_4.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SPI_4.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AB, 8, Haltech.IO16A.Message);
        break;

    case 4:
        // --- 6AB Mux ID: 0x80 AVI 1 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x80, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_1.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_1.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AB, 8, Haltech.IO16A.Message);
        break;

    case 5:
        // --- 6AB Mux ID: 0x81 AVI 2 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x81, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_2.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_2.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AB, 8, Haltech.IO16A.Message);
        break;

    case 6:
        // --- 6AB Mux ID: 0x82 AVI 3 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x82, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_3.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_3.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AB, 8, Haltech.IO16A.Message);
        break;

    case 7:
        // --- 6AB Mux ID: 0x83 AVI 4 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x83, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_4.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_4.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AB, 8, Haltech.IO16A.Message);
        break;

    case 8:
        // --- 6AB Mux ID: 0x84 AVI 5 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x84, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_5.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_5.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AB, 8, Haltech.IO16A.Message);
        break;

    case 9:
        // --- 6AB Mux ID: 0x85 AVI 6 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x85, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_6.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.AVI_6.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AB, 8, Haltech.IO16A.Message);
        break;

    default:
        break;
    }

    switch (Haltech.IO16A.Counter % 12)
    {
    case 0:
        // --- 6AC Mux ID: 0x40 HBO 1 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x40, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_1.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_1.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_1.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_1.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AC, 8, Haltech.IO16A.Message);
        break;

    case 1:
        // --- 6AE Mux ID: 0x0 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x0, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.CANPower, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.MainRail_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.ProtectedRail_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.ECR_Plug_Voltage_mV, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AE, 8, Haltech.IO16A.Message);
        break;

    case 2:
        // --- 6AC Mux ID: 0x41 HBO 2 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x41, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_2.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_2.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_2.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_2.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AC, 8, Haltech.IO16A.Message);
        break;

    case 3:
        // --- 6AE Mux ID: 0x1 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x1, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Boost_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.TenVolt_Rail_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.ECR_Plug_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AE, 8, Haltech.IO16A.Message);
        break;

    case 4:
        // --- 6AC Mux ID: 0x42 HBO 3 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x42, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_3.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_3.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_3.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_3.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AC, 8, Haltech.IO16A.Message);
        break;

    case 5:
        // --- 6AE Mux ID: 0x2 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x2, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.UVLO_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.SensorGround_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.VDD_Voltage_mV, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AE, 8, Haltech.IO16A.Message);
        break;

    case 6:
        // --- 6AC Mux ID: 0x43 HBO 4 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x43, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_4.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_4.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_4.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_4.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AC, 8, Haltech.IO16A.Message);
        break;

    case 7:
        // --- 6AE Mux ID: 0x3 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x3, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.MainRail_Temperature_C, 8, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Thermistor1_Temp_C, 16, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Thermistor2_Temp_C, 24, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Thermistor3_Temp_C, 32, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.CPU_Temperature_C, 40, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.TotalCurrent_mA, 56, 16, 100, 0);
        send_message(HALTECH_CAN, false, 0x6AE, 8, Haltech.IO16A.Message);
        break;

    case 8:
        // --- 6AC Mux ID: 0x44 HBO 5 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x44, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_5.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_5.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_5.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_5.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_5.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AC, 8, Haltech.IO16A.Message);
        break;

    case 9:
        // --- 6AE Mux ID: 0x4 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x4, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Battery_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.OnTime_s, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.TVS_Temp_Enum, 50, 2, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.MainRail_Temp_enum, 48, 2, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AE, 8, Haltech.IO16A.Message);
        break;

    case 10:
        // --- 6AC Mux ID: 0x45 HBO 6 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x45, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_6.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_6.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_6.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_6.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.HBO_6.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AC, 8, Haltech.IO16A.Message);
        break;

    case 11:
        // --- 6AE Mux ID: 0x5 --- //
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, 0x5, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Serial[0], 20, 4, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Serial[1], 16, 4, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Serial[2], 28, 4, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Serial[3], 24, 4, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Serial[4], 36, 4, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Serial[5], 32, 4, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Serial[6], 44, 4, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Serial[7], 40, 4, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Serial[8], 52, 4, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Serial[9], 48, 4, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Serial[10], 60, 4, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Serial[11], 56, 4, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AE, 8, Haltech.IO16A.Message);
        break;

    default:
        break;
    }

    if ((Haltech.IO16A.Counter + 1) % 15 == 14)
    {
        memset(Haltech.IO16A.Message, 0, 8);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.Status, 4, 4, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.USB_Connected, 3, 1, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.ID_Conflict, 1, 1, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.FW_Boot_Version, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.FW_Major, 8, 2, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.FW_Minor, 16, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.FW_Bugfix, 24, 8, 1, 0);
        dbc_encode(Haltech.IO16A.Message, 8, DBC_UNSIGNED, true, Haltech.IO16A.FW_Release, 32, 8, 1, 0);
        send_message(HALTECH_CAN, false, 0x6AD, 8, Haltech.IO16A.Message);
    }

    Haltech.IO16A.Counter = (Haltech.IO16A.Counter + 1) % 60;
#endif

#ifdef ENABLE_IO16B

    switch (Haltech.IO16B.Counter % 10)
    {
    case 0:
        // --- 6B3 Mux ID: 0x60 SPI 1 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x60, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_1.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_1.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_1.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B3, 8, Haltech.IO16B.Message);
        break;

    case 1:
        // --- 6B3 Mux ID: 0x61 SPI 2 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x61, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_2.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_2.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_2.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B3, 8, Haltech.IO16B.Message);
        break;

    case 2:
        // --- 6B3 Mux ID: 0x62 SPI 3 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x62, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_3.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_3.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_3.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B3, 8, Haltech.IO16B.Message);
        break;

    case 3:
        // --- 6B3 Mux ID: 0x63 SPI 4 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x63, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_4.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_4.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SPI_4.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B3, 8, Haltech.IO16B.Message);
        break;

    case 4:
        // --- 6B3 Mux ID: 0x80 AVI 1 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x80, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_1.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_1.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B3, 8, Haltech.IO16B.Message);
        break;

    case 5:
        // --- 6B3 Mux ID: 0x81 AVI 2 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x81, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_2.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_2.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B3, 8, Haltech.IO16B.Message);
        break;

    case 6:
        // --- 6B3 Mux ID: 0x82 AVI 3 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x82, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_3.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_3.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B3, 8, Haltech.IO16B.Message);
        break;

    case 7:
        // --- 6B3 Mux ID: 0x83 AVI 4 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x83, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_4.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_4.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B3, 8, Haltech.IO16B.Message);
        break;

    case 8:
        // --- 6B3 Mux ID: 0x84 AVI 5 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x84, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_5.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_5.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B3, 8, Haltech.IO16B.Message);
        break;

    case 9:
        // --- 6B3 Mux ID: 0x85 AVI 6 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x85, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_6.State, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.AVI_6.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B3, 8, Haltech.IO16B.Message);
        break;

    default:
        break;
    }

    switch (Haltech.IO16B.Counter % 12)
    {
    case 0:
        // --- 6B4 Mux ID: 0x40 HBO 1 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x40, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_1.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_1.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_1.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_1.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B4, 8, Haltech.IO16B.Message);
        break;

    case 1:
        // --- 6B6 Mux ID: 0x0 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x0, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.CANPower, 8, 1, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.MainRail_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.ProtectedRail_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.ECR_Plug_Voltage_mV, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B6, 8, Haltech.IO16B.Message);
        break;

    case 2:
        // --- 6B4 Mux ID: 0x41 HBO 2 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x41, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_2.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_2.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_2.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_2.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B4, 8, Haltech.IO16B.Message);
        break;

    case 3:
        // --- 6B6 Mux ID: 0x1 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x1, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Boost_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.TenVolt_Rail_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.ECR_Plug_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B6, 8, Haltech.IO16B.Message);
        break;

    case 4:
        // --- 6B4 Mux ID: 0x42 HBO 3 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x42, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_3.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_3.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_3.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_3.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B4, 8, Haltech.IO16B.Message);
        break;

    case 5:
        // --- 6B6 Mux ID: 0x2 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x2, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.UVLO_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.SensorGround_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.VDD_Voltage_mV, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B6, 8, Haltech.IO16B.Message);
        break;

    case 6:
        // --- 6B4 Mux ID: 0x43 HBO 4 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x43, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_4.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_4.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_4.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_4.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B4, 8, Haltech.IO16B.Message);
        break;

    case 7:
        // --- 6B6 Mux ID: 0x3 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x3, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.MainRail_Temperature_C, 8, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Thermistor1_Temp_C, 16, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Thermistor2_Temp_C, 24, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Thermistor3_Temp_C, 32, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.CPU_Temperature_C, 40, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.TotalCurrent_mA, 56, 16, 100, 0);
        send_message(HALTECH_CAN, false, 0x6B6, 8, Haltech.IO16B.Message);
        break;

    case 8:
        // --- 6B4 Mux ID: 0x44 HBO 5 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x44, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_5.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_5.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_5.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_5.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_5.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B4, 8, Haltech.IO16B.Message);
        break;

    case 9:
        // --- 6B6 Mux ID: 0x4 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x4, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Battery_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.OnTime_s, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.TVS_Temp_Enum, 50, 2, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.MainRail_Temp_enum, 48, 2, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B6, 8, Haltech.IO16B.Message);
        break;

    case 10:
        // --- 6B4 Mux ID: 0x45 HBO 6 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x45, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_6.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_6.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_6.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_6.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.HBO_6.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B4, 8, Haltech.IO16B.Message);
        break;

    case 11:
        // --- 6B6 Mux ID: 0x5 --- //
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, 0x5, 0, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Serial[0], 20, 4, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Serial[1], 16, 4, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Serial[2], 28, 4, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Serial[3], 24, 4, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Serial[4], 36, 4, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Serial[5], 32, 4, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Serial[6], 44, 4, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Serial[7], 40, 4, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Serial[8], 52, 4, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Serial[9], 48, 4, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Serial[10], 60, 4, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Serial[11], 56, 4, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B6, 8, Haltech.IO16B.Message);
        break;

    default:
        break;
    }

    if ((Haltech.IO16B.Counter + 1) % 15 == 14)
    {
        memset(Haltech.IO16B.Message, 0, 8);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.Status, 4, 4, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.USB_Connected, 3, 1, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.ID_Conflict, 1, 1, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.FW_Boot_Version, 11, 5, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.FW_Major, 8, 2, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.FW_Minor, 16, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.FW_Bugfix, 24, 8, 1, 0);
        dbc_encode(Haltech.IO16B.Message, 8, DBC_UNSIGNED, true, Haltech.IO16B.FW_Release, 32, 8, 1, 0);
        send_message(HALTECH_CAN, false, 0x6B5, 8, Haltech.IO16B.Message);
    }

    Haltech.IO16B.Counter = (Haltech.IO16B.Counter + 1) % 60;
#endif

#ifdef ENABLE_PD16A

    switch (Haltech.PD16A.Counter % 16)
    {
    case 0:
        // --- 6D3 Mux ID: 0x60 SPI 1 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x60, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_1.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_1.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_1.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D3, 8, Haltech.PD16A.Message);
        break;

    case 2:
        // --- 6D3 Mux ID: 0x61 SPI 2 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x61, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_2.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_2.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_2.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D3, 8, Haltech.PD16A.Message);
        break;

    case 4:
        // --- 6D3 Mux ID: 0x62 SPI 3 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x62, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_3.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_3.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_3.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D3, 8, Haltech.PD16A.Message);
        break;

    case 6:
        // --- 6D3 Mux ID: 0x63 SPI 4 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x63, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_4.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_4.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SPI_4.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D3, 8, Haltech.PD16A.Message);
        break;

    case 8:
        // --- 6D3 Mux ID: 0x80 AVI 1 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x80, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_1.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_1.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D3, 8, Haltech.PD16A.Message);
        break;

    case 10:
        // --- 6D3 Mux ID: 0x81 AVI 2 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x81, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_2.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_2.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D3, 8, Haltech.PD16A.Message);
        break;

    case 12:
        // --- 6D3 Mux ID: 0x82 AVI 3 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x82, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_3.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_3.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D3, 8, Haltech.PD16A.Message);
        break;

    case 14:
        // --- 6D3 Mux ID: 0x83 AVI 4 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x83, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_4.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.AVI_4.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D3, 8, Haltech.PD16A.Message);
        break;


    default:
        break;
    }

    switch (Haltech.PD16A.Counter % 16)
    {
    case 0:
        // --- 6D4 Mux ID: 0x00 HC25 1 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x01, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_1.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_1.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_1.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_1.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_1.RetryCount, 59, 5, 1, 0);
        break;

    case 1:
        // --- 6D4 Mux ID: 0x01 HC25 2 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x02, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_2.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_2.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_2.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_2.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_2.RetryCount, 59, 5, 1, 0);
        break;

    case 2:
        // --- 6D4 Mux ID: 0x02 HC25 3 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x03, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_3.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_3.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_3.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_3.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_3.RetryCount, 59, 5, 1, 0);
        break;

    case 3:
        // --- 6D4 Mux ID: 0x03 HC25 4 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x04, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_4.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_4.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_4.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_4.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC25_4.RetryCount, 59, 5, 1, 0);
        break;

    case 4:
        // --- 6D4 Mux ID: 0x20 HC8 1 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x20, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_1.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_1.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_1.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_1.Current_mA, 48, 8, 1, 0);
        break;
    case 5:
        // --- 6D4 Mux ID: 0x21 HC8 2 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x21, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_2.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_2.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_2.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_2.Current_mA, 48, 8, 1, 0);
        break;
    case 6:
        // --- 6D4 Mux ID: 0x22 HC8 3 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x22, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_3.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_3.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_3.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_3.Current_mA, 48, 8, 1, 0);
        break;
    case 7:
        // --- 6D4 Mux ID: 0x23 HC8 4 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x23, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_4.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_4.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_4.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_4.Current_mA, 48, 8, 1, 0);
        break;
    case 8:
        // --- 6D4 Mux ID: 0x24 HC8 5 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x24, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_5.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_5.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_5.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_5.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_5.Current_mA, 48, 8, 1, 0);
        break;
    case 9:
        // --- 6D4 Mux ID: 0x25 HC8 6 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x25, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_6.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_6.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_6.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_6.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_6.Current_mA, 48, 8, 1, 0);
        break;
    case 10:
        // --- 6D4 Mux ID: 0x26 HC8 7 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x26, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_7.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_7.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_7.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_7.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_7.Current_mA, 48, 8, 1, 0);
        break;
    case 11:
        // --- 6D4 Mux ID: 0x27 HC8 8 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x27, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_8.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_8.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_8.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_8.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_8.Current_mA, 48, 8, 1, 0);
        break;
    case 12:
        // --- 6D4 Mux ID: 0x28 HC8 9 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x28, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_9.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_9.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_9.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_9.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_9.Current_mA, 48, 8, 1, 0);
        break;
    case 13:
        // --- 6D4 Mux ID: 0x29 HC8 10 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x29, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_10.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_10.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_10.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_10.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HC8_10.Current_mA, 48, 8, 1, 0);
        break;

    case 14:
        // --- 6D4 Mux ID: 0x40 HBO 1 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x40, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HBO_1.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HBO_1.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HBO_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HBO_1.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HBO_1.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D4, 8, Haltech.PD16A.Message);
        break;
    case 15:
        // --- 6D4 Mux ID: 0x41 HBO 2 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x41, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HBO_2.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HBO_2.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HBO_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HBO_2.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.HBO_2.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D4, 8, Haltech.PD16A.Message);

        // --- 6D5 : Firmware Details --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Status, 4, 4, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.USB_Connected, 3, 1, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.ID_Conflict, 1, 1, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.FW_Boot_Version, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.FW_Major, 8, 2, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.FW_Minor, 16, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.FW_Bugfix, 24, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.FW_Release, 32, 8, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D5, 8, Haltech.PD16A.Message);
        break;

    default:
        break;
    }

    switch (Haltech.PD16A.Counter % 12)
    {

    case 1:
        // --- 6D6 Mux ID: 0x0 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x0, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.CANPower, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.MainRail_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.ProtectedRail_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.ECR_Plug_Voltage_mV, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D6, 8, Haltech.PD16A.Message);
        break;

    case 3:
        // --- 6D6 Mux ID: 0x1 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x1, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Boost_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.TenVolt_Rail_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.ECR_Plug_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D6, 8, Haltech.PD16A.Message);
        break;

    case 5:
        // --- 6D6 Mux ID: 0x2 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x2, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.UVLO_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.SensorGround_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.VDD_Voltage_mV, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D6, 8, Haltech.PD16A.Message);
        break;

    case 7:
        // --- 6D6 Mux ID: 0x3 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x3, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.MainRail_Temperature_C, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Thermistor1_Temp_C, 16, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Thermistor2_Temp_C, 24, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Thermistor3_Temp_C, 32, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.CPU_Temperature_C, 40, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.TotalCurrent_mA, 56, 16, 100, 0);
        send_message(HALTECH_CAN, false, 0x6D6, 8, Haltech.PD16A.Message);
        break;

    case 9:
        // --- 6D6 Mux ID: 0x4 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x4, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Battery_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.OnTime_s, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.TVS_Temp_Enum, 50, 2, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.MainRail_Temp_enum, 48, 2, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D6, 8, Haltech.PD16A.Message);
        break;

    case 11:
        // --- 6D6 Mux ID: 0x5 --- //
        memset(Haltech.PD16A.Message, 0, 8);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, 0x5, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Serial[0], 20, 4, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Serial[1], 16, 4, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Serial[2], 28, 4, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Serial[3], 24, 4, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Serial[4], 36, 4, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Serial[5], 32, 4, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Serial[6], 44, 4, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Serial[7], 40, 4, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Serial[8], 52, 4, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Serial[9], 48, 4, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Serial[10], 60, 4, 1, 0);
        dbc_encode(Haltech.PD16A.Message, 8, DBC_UNSIGNED, true, Haltech.PD16A.Serial[11], 56, 4, 1, 0);
        send_message(HALTECH_CAN, false, 0x6D6, 8, Haltech.PD16A.Message);
        break;

    default:
        break;
    }


Haltech.PD16A.Counter = (Haltech.PD16A.Counter + 1) % 96;
#endif

#ifdef ENABLE_PD16B

    switch (Haltech.PD16B.Counter % 16)
    {
    case 0:
        // --- 6DB Mux ID: 0x60 SPI 1 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x60, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_1.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_1.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_1.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DB, 8, Haltech.PD16B.Message);
        break;

    case 2:
        // --- 6DB Mux ID: 0x61 SPI 2 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x61, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_2.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_2.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_2.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DB, 8, Haltech.PD16B.Message);
        break;

    case 4:
        // --- 6DB Mux ID: 0x62 SPI 3 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x62, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_3.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_3.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_3.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DB, 8, Haltech.PD16B.Message);
        break;

    case 6:
        // --- 6DB Mux ID: 0x63 SPI 4 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x63, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_4.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_4.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SPI_4.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DB, 8, Haltech.PD16B.Message);
        break;

    case 8:
        // --- 6DB Mux ID: 0x80 AVI 1 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x80, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_1.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_1.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DB, 8, Haltech.PD16B.Message);
        break;

    case 10:
        // --- 6DB Mux ID: 0x81 AVI 2 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x81, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_2.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_2.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DB, 8, Haltech.PD16B.Message);
        break;

    case 12:
        // --- 6DB Mux ID: 0x82 AVI 3 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x82, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_3.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_3.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DB, 8, Haltech.PD16B.Message);
        break;

    case 14:
        // --- 6DB Mux ID: 0x83 AVI 4 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x83, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_4.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.AVI_4.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DB, 8, Haltech.PD16B.Message);
        break;


    default:
        break;
    }

    switch (Haltech.PD16B.Counter % 16)
    {
    case 0:
        // --- 6DC Mux ID: 0x00 HC25 1 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x01, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_1.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_1.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_1.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_1.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_1.RetryCount, 59, 5, 1, 0);
        break;

    case 1:
        // --- 6DC Mux ID: 0x01 HC25 2 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x02, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_2.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_2.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_2.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_2.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_2.RetryCount, 59, 5, 1, 0);
        break;

    case 2:
        // --- 6DC Mux ID: 0x02 HC25 3 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x03, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_3.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_3.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_3.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_3.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_3.RetryCount, 59, 5, 1, 0);
        break;

    case 3:
        // --- 6DC Mux ID: 0x03 HC25 4 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x04, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_4.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_4.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_4.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_4.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC25_4.RetryCount, 59, 5, 1, 0);
        break;

    case 4:
        // --- 6DC Mux ID: 0x20 HC8 1 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x20, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_1.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_1.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_1.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_1.Current_mA, 48, 8, 1, 0);
        break;
    case 5:
        // --- 6DC Mux ID: 0x21 HC8 2 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x21, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_2.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_2.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_2.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_2.Current_mA, 48, 8, 1, 0);
        break;
    case 6:
        // --- 6DC Mux ID: 0x22 HC8 3 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x22, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_3.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_3.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_3.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_3.Current_mA, 48, 8, 1, 0);
        break;
    case 7:
        // --- 6DC Mux ID: 0x23 HC8 4 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x23, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_4.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_4.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_4.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_4.Current_mA, 48, 8, 1, 0);
        break;
    case 8:
        // --- 6DC Mux ID: 0x24 HC8 5 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x24, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_5.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_5.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_5.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_5.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_5.Current_mA, 48, 8, 1, 0);
        break;
    case 9:
        // --- 6DC Mux ID: 0x25 HC8 6 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x25, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_6.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_6.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_6.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_6.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_6.Current_mA, 48, 8, 1, 0);
        break;
    case 10:
        // --- 6DC Mux ID: 0x26 HC8 7 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x26, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_7.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_7.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_7.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_7.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_7.Current_mA, 48, 8, 1, 0);
        break;
    case 11:
        // --- 6DC Mux ID: 0x27 HC8 8 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x27, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_8.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_8.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_8.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_8.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_8.Current_mA, 48, 8, 1, 0);
        break;
    case 12:
        // --- 6DC Mux ID: 0x28 HC8 9 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x28, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_9.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_9.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_9.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_9.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_9.Current_mA, 48, 8, 1, 0);
        break;
    case 13:
        // --- 6DC Mux ID: 0x29 HC8 10 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x29, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_10.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_10.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_10.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_10.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HC8_10.Current_mA, 48, 8, 1, 0);
        break;

    case 14:
        // --- 6DC Mux ID: 0x40 HBO 1 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x40, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HBO_1.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HBO_1.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HBO_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HBO_1.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HBO_1.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DC, 8, Haltech.PD16B.Message);
        break;
    case 15:
        // --- 6DC Mux ID: 0x41 HBO 2 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x41, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HBO_2.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HBO_2.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HBO_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HBO_2.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.HBO_2.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DC, 8, Haltech.PD16B.Message);

        // --- 6DD : Firmware Details --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Status, 4, 4, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.USB_Connected, 3, 1, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.ID_Conflict, 1, 1, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.FW_Boot_Version, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.FW_Major, 8, 2, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.FW_Minor, 16, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.FW_Bugfix, 24, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.FW_Release, 32, 8, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DD, 8, Haltech.PD16B.Message);
        break;

    default:
        break;
    }

    switch (Haltech.PD16B.Counter % 12)
    {

    case 1:
        // --- 6DE Mux ID: 0x0 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x0, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.CANPower, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.MainRail_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.ProtectedRail_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.ECR_Plug_Voltage_mV, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DE, 8, Haltech.PD16B.Message);
        break;

    case 3:
        // --- 6DE Mux ID: 0x1 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x1, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Boost_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.TenVolt_Rail_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.ECR_Plug_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DE, 8, Haltech.PD16B.Message);
        break;

    case 5:
        // --- 6DE Mux ID: 0x2 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x2, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.UVLO_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.SensorGround_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.VDD_Voltage_mV, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DE, 8, Haltech.PD16B.Message);
        break;

    case 7:
        // --- 6DE Mux ID: 0x3 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x3, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.MainRail_Temperature_C, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Thermistor1_Temp_C, 16, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Thermistor2_Temp_C, 24, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Thermistor3_Temp_C, 32, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.CPU_Temperature_C, 40, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.TotalCurrent_mA, 56, 16, 100, 0);
        send_message(HALTECH_CAN, false, 0x6DE, 8, Haltech.PD16B.Message);
        break;

    case 9:
        // --- 6DE Mux ID: 0x4 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x4, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Battery_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.OnTime_s, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.TVS_Temp_Enum, 50, 2, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.MainRail_Temp_enum, 48, 2, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DE, 8, Haltech.PD16B.Message);
        break;

    case 11:
        // --- 6DE Mux ID: 0x5 --- //
        memset(Haltech.PD16B.Message, 0, 8);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, 0x5, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Serial[0], 20, 4, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Serial[1], 16, 4, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Serial[2], 28, 4, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Serial[3], 24, 4, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Serial[4], 36, 4, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Serial[5], 32, 4, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Serial[6], 44, 4, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Serial[7], 40, 4, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Serial[8], 52, 4, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Serial[9], 48, 4, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Serial[10], 60, 4, 1, 0);
        dbc_encode(Haltech.PD16B.Message, 8, DBC_UNSIGNED, true, Haltech.PD16B.Serial[11], 56, 4, 1, 0);
        send_message(HALTECH_CAN, false, 0x6DE, 8, Haltech.PD16B.Message);
        break;

    default:
        break;
    }

Haltech.PD16B.Counter = (Haltech.PD16B.Counter + 1) % 96;
#endif


#ifdef ENABLE_PD16C

    switch (Haltech.PD16C.Counter % 16)
    {
    case 0:
        // --- 6E3 Mux ID: 0x60 SPI 1 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x60, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_1.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_1.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_1.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E3, 8, Haltech.PD16C.Message);
        break;

    case 2:
        // --- 6E3 Mux ID: 0x61 SPI 2 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x61, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_2.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_2.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_2.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E3, 8, Haltech.PD16C.Message);
        break;

    case 4:
        // --- 6E3 Mux ID: 0x62 SPI 3 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x62, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_3.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_3.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_3.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E3, 8, Haltech.PD16C.Message);
        break;

    case 6:
        // --- 6E3 Mux ID: 0x63 SPI 4 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x63, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_4.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_4.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SPI_4.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E3, 8, Haltech.PD16C.Message);
        break;

    case 8:
        // --- 6E3 Mux ID: 0x80 AVI 1 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x80, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_1.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_1.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E3, 8, Haltech.PD16C.Message);
        break;

    case 10:
        // --- 6E3 Mux ID: 0x81 AVI 2 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x81, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_2.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_2.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E3, 8, Haltech.PD16C.Message);
        break;

    case 12:
        // --- 6E3 Mux ID: 0x82 AVI 3 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x82, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_3.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_3.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E3, 8, Haltech.PD16C.Message);
        break;

    case 14:
        // --- 6E3 Mux ID: 0x83 AVI 4 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x83, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_4.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.AVI_4.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E3, 8, Haltech.PD16C.Message);
        break;


    default:
        break;
    }

    switch (Haltech.PD16C.Counter % 16)
    {
    case 0:
        // --- 6E4 Mux ID: 0x00 HC25 1 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x01, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_1.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_1.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_1.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_1.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_1.RetryCount, 59, 5, 1, 0);
        break;

    case 1:
        // --- 6E4 Mux ID: 0x01 HC25 2 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x02, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_2.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_2.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_2.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_2.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_2.RetryCount, 59, 5, 1, 0);
        break;

    case 2:
        // --- 6E4 Mux ID: 0x02 HC25 3 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x03, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_3.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_3.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_3.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_3.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_3.RetryCount, 59, 5, 1, 0);
        break;

    case 3:
        // --- 6E4 Mux ID: 0x03 HC25 4 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x04, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_4.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_4.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_4.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_4.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC25_4.RetryCount, 59, 5, 1, 0);
        break;

    case 4:
        // --- 6E4 Mux ID: 0x20 HC8 1 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x20, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_1.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_1.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_1.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_1.Current_mA, 48, 8, 1, 0);
        break;
    case 5:
        // --- 6E4 Mux ID: 0x21 HC8 2 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x21, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_2.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_2.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_2.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_2.Current_mA, 48, 8, 1, 0);
        break;
    case 6:
        // --- 6E4 Mux ID: 0x22 HC8 3 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x22, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_3.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_3.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_3.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_3.Current_mA, 48, 8, 1, 0);
        break;
    case 7:
        // --- 6E4 Mux ID: 0x23 HC8 4 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x23, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_4.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_4.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_4.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_4.Current_mA, 48, 8, 1, 0);
        break;
    case 8:
        // --- 6E4 Mux ID: 0x24 HC8 5 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x24, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_5.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_5.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_5.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_5.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_5.Current_mA, 48, 8, 1, 0);
        break;
    case 9:
        // --- 6E4 Mux ID: 0x25 HC8 6 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x25, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_6.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_6.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_6.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_6.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_6.Current_mA, 48, 8, 1, 0);
        break;
    case 10:
        // --- 6E4 Mux ID: 0x26 HC8 7 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x26, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_7.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_7.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_7.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_7.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_7.Current_mA, 48, 8, 1, 0);
        break;
    case 11:
        // --- 6E4 Mux ID: 0x27 HC8 8 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x27, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_8.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_8.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_8.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_8.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_8.Current_mA, 48, 8, 1, 0);
        break;
    case 12:
        // --- 6E4 Mux ID: 0x28 HC8 9 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x28, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_9.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_9.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_9.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_9.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_9.Current_mA, 48, 8, 1, 0);
        break;
    case 13:
        // --- 6E4 Mux ID: 0x29 HC8 10 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x29, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_10.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_10.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_10.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_10.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HC8_10.Current_mA, 48, 8, 1, 0);
        break;

    case 14:
        // --- 6E4 Mux ID: 0x40 HBO 1 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x40, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HBO_1.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HBO_1.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HBO_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HBO_1.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HBO_1.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E4, 8, Haltech.PD16C.Message);
        break;
    case 15:
        // --- 6E4 Mux ID: 0x41 HBO 2 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x41, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HBO_2.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HBO_2.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HBO_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HBO_2.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.HBO_2.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E4, 8, Haltech.PD16C.Message);

        // --- 6E5 : Firmware Details --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Status, 4, 4, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.USB_Connected, 3, 1, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.ID_Conflict, 1, 1, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.FW_Boot_Version, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.FW_Major, 8, 2, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.FW_Minor, 16, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.FW_Bugfix, 24, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.FW_Release, 32, 8, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E5, 8, Haltech.PD16C.Message);
        break;

    default:
        break;
    }

    switch (Haltech.PD16C.Counter % 12)
    {

    case 1:
        // --- 6E6 Mux ID: 0x0 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x0, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.CANPower, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.MainRail_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.ProtectedRail_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.ECR_Plug_Voltage_mV, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E6, 8, Haltech.PD16C.Message);
        break;

    case 3:
        // --- 6E6 Mux ID: 0x1 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x1, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Boost_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.TenVolt_Rail_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.ECR_Plug_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E6, 8, Haltech.PD16C.Message);
        break;

    case 5:
        // --- 6E6 Mux ID: 0x2 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x2, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.UVLO_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.SensorGround_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.VDD_Voltage_mV, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E6, 8, Haltech.PD16C.Message);
        break;

    case 7:
        // --- 6E6 Mux ID: 0x3 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x3, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.MainRail_Temperature_C, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Thermistor1_Temp_C, 16, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Thermistor2_Temp_C, 24, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Thermistor3_Temp_C, 32, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.CPU_Temperature_C, 40, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.TotalCurrent_mA, 56, 16, 100, 0);
        send_message(HALTECH_CAN, false, 0x6E6, 8, Haltech.PD16C.Message);
        break;

    case 9:
        // --- 6E6 Mux ID: 0x4 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x4, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Battery_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.OnTime_s, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.TVS_Temp_Enum, 50, 2, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.MainRail_Temp_enum, 48, 2, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E6, 8, Haltech.PD16C.Message);
        break;

    case 11:
        // --- 6E6 Mux ID: 0x5 --- //
        memset(Haltech.PD16C.Message, 0, 8);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, 0x5, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Serial[0], 20, 4, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Serial[1], 16, 4, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Serial[2], 28, 4, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Serial[3], 24, 4, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Serial[4], 36, 4, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Serial[5], 32, 4, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Serial[6], 44, 4, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Serial[7], 40, 4, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Serial[8], 52, 4, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Serial[9], 48, 4, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Serial[10], 60, 4, 1, 0);
        dbc_encode(Haltech.PD16C.Message, 8, DBC_UNSIGNED, true, Haltech.PD16C.Serial[11], 56, 4, 1, 0);
        send_message(HALTECH_CAN, false, 0x6E6, 8, Haltech.PD16C.Message);
        break;

    default:
        break;
    }


Haltech.PD16C.Counter = (Haltech.PD16C.Counter + 1) % 96;
#endif

#ifdef ENABLE_PD16D

    switch (Haltech.PD16D.Counter % 16)
    {
    case 0:
        // --- 6EB Mux ID: 0x60 SPI 1 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x60, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_1.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_1.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_1.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EB, 8, Haltech.PD16D.Message);
        break;

    case 2:
        // --- 6EB Mux ID: 0x61 SPI 2 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x61, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_2.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_2.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_2.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EB, 8, Haltech.PD16D.Message);
        break;

    case 4:
        // --- 6EB Mux ID: 0x62 SPI 3 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x62, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_3.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_3.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_3.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EB, 8, Haltech.PD16D.Message);
        break;

    case 6:
        // --- 6EB Mux ID: 0x63 SPI 4 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x63, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_4.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_4.Duty_Cycle_percent, 40, 16, 0.1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SPI_4.Frequency_Hz, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EB, 8, Haltech.PD16D.Message);
        break;

    case 8:
        // --- 6EB Mux ID: 0x80 AVI 1 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x80, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_1.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_1.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EB, 8, Haltech.PD16D.Message);
        break;

    case 10:
        // --- 6EB Mux ID: 0x81 AVI 2 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x81, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_2.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_2.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EB, 8, Haltech.PD16D.Message);
        break;

    case 12:
        // --- 6EB Mux ID: 0x82 AVI 3 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x82, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_3.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_3.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EB, 8, Haltech.PD16D.Message);
        break;

    case 14:
        // --- 6EB Mux ID: 0x83 AVI 4 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x83, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_4.State, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.AVI_4.Voltage_mV, 24, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EB, 8, Haltech.PD16D.Message);
        break;


    default:
        break;
    }

    switch (Haltech.PD16D.Counter % 16)
    {
    case 0:
        // --- 6EC Mux ID: 0x00 HC25 1 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x01, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_1.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_1.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_1.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_1.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_1.RetryCount, 59, 5, 1, 0);
        break;

    case 1:
        // --- 6EC Mux ID: 0x01 HC25 2 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x02, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_2.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_2.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_2.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_2.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_2.RetryCount, 59, 5, 1, 0);
        break;

    case 2:
        // --- 6EC Mux ID: 0x02 HC25 3 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x03, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_3.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_3.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_3.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_3.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_3.RetryCount, 59, 5, 1, 0);
        break;

    case 3:
        // --- 6EC Mux ID: 0x03 HC25 4 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x04, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_4.Load_Percent, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_4.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_4.HS_Current_mA, 48, 8, 1000, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_4.PinState, 56, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC25_4.RetryCount, 59, 5, 1, 0);
        break;

    case 4:
        // --- 6EC Mux ID: 0x20 HC8 1 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x20, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_1.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_1.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_1.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_1.Current_mA, 48, 8, 1, 0);
        break;
    case 5:
        // --- 6EC Mux ID: 0x21 HC8 2 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x21, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_2.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_2.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_2.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_2.Current_mA, 48, 8, 1, 0);
        break;
    case 6:
        // --- 6EC Mux ID: 0x22 HC8 3 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x22, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_3.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_3.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_3.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_3.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_3.Current_mA, 48, 8, 1, 0);
        break;
    case 7:
        // --- 6EC Mux ID: 0x23 HC8 4 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x23, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_4.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_4.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_4.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_4.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_4.Current_mA, 48, 8, 1, 0);
        break;
    case 8:
        // --- 6EC Mux ID: 0x24 HC8 5 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x24, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_5.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_5.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_5.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_5.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_5.Current_mA, 48, 8, 1, 0);
        break;
    case 9:
        // --- 6EC Mux ID: 0x25 HC8 6 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x25, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_6.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_6.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_6.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_6.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_6.Current_mA, 48, 8, 1, 0);
        break;
    case 10:
        // --- 6EC Mux ID: 0x26 HC8 7 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x26, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_7.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_7.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_7.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_7.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_7.Current_mA, 48, 8, 1, 0);
        break;
    case 11:
        // --- 6EC Mux ID: 0x27 HC8 8 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x27, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_8.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_8.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_8.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_8.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_8.Current_mA, 48, 8, 1, 0);
        break;
    case 12:
        // --- 6EC Mux ID: 0x28 HC8 9 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x28, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_9.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_9.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_9.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_9.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_9.Current_mA, 48, 8, 1, 0);
        break;
    case 13:
        // --- 6EC Mux ID: 0x29 HC8 10 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x29, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_10.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_10.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_10.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_10.Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HC8_10.Current_mA, 48, 8, 1, 0);
        break;

    case 14:
        // --- 6EC Mux ID: 0x40 HBO 1 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x40, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HBO_1.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HBO_1.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HBO_1.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HBO_1.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HBO_1.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EC, 8, Haltech.PD16D.Message);
        break;
    case 15:
        // --- 6EC Mux ID: 0x41 HBO 2 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x41, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HBO_2.RetryCount, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HBO_2.PinState, 8, 3, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HBO_2.Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HBO_2.LS_Current_mA, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.HBO_2.HS_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EC, 8, Haltech.PD16D.Message);

        // --- 6EC : Firmware Details --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Status, 4, 4, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.USB_Connected, 3, 1, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.ID_Conflict, 1, 1, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.FW_Boot_Version, 11, 5, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.FW_Major, 8, 2, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.FW_Minor, 16, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.FW_Bugfix, 24, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.FW_Release, 32, 8, 1, 0);
        send_message(HALTECH_CAN, false, 0x6ED, 8, Haltech.PD16D.Message);
        break;

    default:
        break;
    }

    switch (Haltech.PD16D.Counter % 12)
    {

    case 1:
        // --- 6EE Mux ID: 0x0 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x0, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.CANPower, 8, 1, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.MainRail_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.ProtectedRail_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.ECR_Plug_Voltage_mV, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EE, 8, Haltech.PD16D.Message);
        break;

    case 3:
        // --- 6EE Mux ID: 0x1 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x1, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Boost_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.TenVolt_Rail_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.ECR_Plug_Current_mA, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EE, 8, Haltech.PD16D.Message);
        break;

    case 5:
        // --- 6EE Mux ID: 0x2 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x2, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.UVLO_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.SensorGround_Voltage_mV, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.VDD_Voltage_mV, 56, 16, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EE, 8, Haltech.PD16D.Message);
        break;

    case 7:
        // --- 6EE Mux ID: 0x3 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x3, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.MainRail_Temperature_C, 8, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Thermistor1_Temp_C, 16, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Thermistor2_Temp_C, 24, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Thermistor3_Temp_C, 32, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.CPU_Temperature_C, 40, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.TotalCurrent_mA, 56, 16, 100, 0);
        send_message(HALTECH_CAN, false, 0x6EE, 8, Haltech.PD16D.Message);
        break;

    case 9:
        // --- 6EE Mux ID: 0x4 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x4, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Battery_Voltage_mV, 24, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.OnTime_s, 40, 16, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.TVS_Temp_Enum, 50, 2, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.MainRail_Temp_enum, 48, 2, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EE, 8, Haltech.PD16D.Message);
        break;

    case 11:
        // --- 6EE Mux ID: 0x5 --- //
        memset(Haltech.PD16D.Message, 0, 8);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, 0x5, 0, 8, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Serial[0], 20, 4, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Serial[1], 16, 4, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Serial[2], 28, 4, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Serial[3], 24, 4, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Serial[4], 36, 4, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Serial[5], 32, 4, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Serial[6], 44, 4, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Serial[7], 40, 4, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Serial[8], 52, 4, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Serial[9], 48, 4, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Serial[10], 60, 4, 1, 0);
        dbc_encode(Haltech.PD16D.Message, 8, DBC_UNSIGNED, true, Haltech.PD16D.Serial[11], 56, 4, 1, 0);
        send_message(HALTECH_CAN, false, 0x6EE, 8, Haltech.PD16D.Message);
        break;

    default:
        break;
    }

Haltech.PD16D.Counter = (Haltech.PD16D.Counter + 1) % 96;
#endif

}


void haltech_Events_20Hz(void) 
{
#ifdef ENABLE_TCA4A
    memset(Haltech.TCA4A.Message,0,8);
    dbc_encode(Haltech.TCA4A.Message,8,DBC_UNSIGNED,true,Haltech.TCA4A.Thermocouple1_C,8,16,0.407,-250);
    dbc_encode(Haltech.TCA4A.Message,8,DBC_UNSIGNED,true,Haltech.TCA4A.Thermocouple2_C,24,16,0.407,-250);
    dbc_encode(Haltech.TCA4A.Message,8,DBC_UNSIGNED,true,Haltech.TCA4A.Thermocouple3_C,40,16,0.407,-250);
    dbc_encode(Haltech.TCA4A.Message,8,DBC_UNSIGNED,true,Haltech.TCA4A.Thermocouple4_C,56,16,0.407,-250);
    send_message(HALTECH_CAN, false, 0x2CC, 8, Haltech.TCA4A.Message);
#endif
#ifdef ENABLE_TCA4B
    memset(Haltech.TCA4B.Message,0,8);
    dbc_encode(Haltech.TCA4B.Message,8,DBC_UNSIGNED,true,Haltech.TCA4B.Thermocouple1_C,8,16,0.407,-250);
    dbc_encode(Haltech.TCA4B.Message,8,DBC_UNSIGNED,true,Haltech.TCA4B.Thermocouple2_C,24,16,0.407,-250);
    dbc_encode(Haltech.TCA4B.Message,8,DBC_UNSIGNED,true,Haltech.TCA4B.Thermocouple3_C,40,16,0.407,-250);
    dbc_encode(Haltech.TCA4B.Message,8,DBC_UNSIGNED,true,Haltech.TCA4B.Thermocouple4_C,56,16,0.407,-250);
    send_message(HALTECH_CAN, false, 0x2CD, 8, Haltech.TCA4B.Message);
#endif
#ifdef ENABLE_TCA2A
    memset(Haltech.TCA2A.Message,0,8);
    dbc_encode(Haltech.TCA2A.Message,8,DBC_UNSIGNED,true,Haltech.TCA2A.Thermocouple1_C,8,16,0.407,-250);
    dbc_encode(Haltech.TCA2A.Message,8,DBC_UNSIGNED,true,Haltech.TCA2A.Thermocouple2_C,24,16,0.407,-250);
    send_message(HALTECH_CAN, false, 0x2C8, 8, Haltech.TCA2A.Message);
#endif
#ifdef ENABLE_TCA2B
    memset(Haltech.TCA2B.Message,0,8);
    dbc_encode(Haltech.TCA2B.Message,8,DBC_UNSIGNED,true,Haltech.TCA2B.Thermocouple1_C,8,16,0.407,-250);
    dbc_encode(Haltech.TCA2B.Message,8,DBC_UNSIGNED,true,Haltech.TCA2B.Thermocouple2_C,24,16,0.407,-250);
    send_message(HALTECH_CAN, false, 0x2C9, 8, Haltech.TCA2B.Message);
#endif

}
void haltech_Events_10Hz(void) 
{
#ifdef ENABLE_TMS4
    switch (Haltech.TMS4.Counter) {
    case 0:
        memset(Haltech.TMS4.Message,0,8);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,0x01,0,3,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.FL.Pressure_kPa,16,16,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.FL.Temperature_C,24,8,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.FL.Voltage_mV,32,8,100,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.FL.Leaking,40,1,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.FL.TempNegative,44,1,1,0);
        send_message(HALTECH_CAN,false,0x77E,8,Haltech.TMS4.Message);
        break;

    case 1:
        memset(Haltech.TMS4.Message,0,8);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,0x02,0,3,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.FR.Pressure_kPa,16,16,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.FR.Temperature_C,24,8,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.FR.Voltage_mV,32,8,100,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.FR.Leaking,40,1,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.FR.TempNegative,44,1,1,0);
        send_message(HALTECH_CAN,false,0x77E,8,Haltech.TMS4.Message);
        break;

    case 2:
        memset(Haltech.TMS4.Message,0,8);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,0x03,0,3,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.RL.Pressure_kPa,16,16,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.RL.Temperature_C,24,8,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.RL.Voltage_mV,32,8,100,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.RL.Leaking,40,1,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.RL.TempNegative,44,1,1,0);
        send_message(HALTECH_CAN,false,0x77E,8,Haltech.TMS4.Message);
        break;

    case 3:
        memset(Haltech.TMS4.Message,0,8);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,0x04,0,3,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.RR.Pressure_kPa,16,16,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.RR.Temperature_C,24,8,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.RR.Voltage_mV,32,8,100,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.RR.Leaking,40,1,1,0);
        dbc_encode(Haltech.TMS4.Message,8,DBC_UNSIGNED,true,Haltech.TMS4.RR.TempNegative,44,1,1,0);
        send_message(HALTECH_CAN,false,0x77E,8,Haltech.TMS4.Message);
        break;

    default:
        break;

    }
    Haltech.TMS4.Counter = ((Haltech.TMS4.Counter + 1) % 4);
#endif
}
void haltech_Events_5Hz(void) 
{
#ifdef ENABLE_TCA4A
    memset(Haltech.TCA4A.Message,0,8);
    dbc_encode(Haltech.TCA4A.Message,8,DBC_UNSIGNED,true,Haltech.TCA4A.ID_Conflict,0,1,1,0);
    dbc_encode(Haltech.TCA4A.Message,8,DBC_UNSIGNED,true,Haltech.TCA4A.Status,4,4,1,0);
    dbc_encode(Haltech.TCA4A.Message,8,DBC_UNSIGNED,true,Haltech.TCA4A.FW_Major,8,2,1,0);
    dbc_encode(Haltech.TCA4A.Message,8,DBC_UNSIGNED,true,Haltech.TCA4A.FW_Boot_Version,10,6,1,0);
    dbc_encode(Haltech.TCA4A.Message,8,DBC_UNSIGNED,true,Haltech.TCA4A.FW_Minor,16,8,1,0);
    dbc_encode(Haltech.TCA4A.Message,8,DBC_UNSIGNED,true,Haltech.TCA4A.FW_Bugfix,24,8,1,0);
    dbc_encode(Haltech.TCA4A.Message,8,DBC_UNSIGNED,true,Haltech.TCA4A.FW_Release,32,8,1,0);
    send_message(HALTECH_CAN, false, 0x2CE, 8, Haltech.TCA4A.Message);
#endif
#ifdef ENABLE_TCA4B
    memset(Haltech.TCA4B.Message,0,8);
    dbc_encode(Haltech.TCA4B.Message,8,DBC_UNSIGNED,true,Haltech.TCA4B.ID_Conflict,0,1,1,0);
    dbc_encode(Haltech.TCA4B.Message,8,DBC_UNSIGNED,true,Haltech.TCA4B.Status,4,4,1,0);
    dbc_encode(Haltech.TCA4B.Message,8,DBC_UNSIGNED,true,Haltech.TCA4B.FW_Major,8,2,1,0);
    dbc_encode(Haltech.TCA4B.Message,8,DBC_UNSIGNED,true,Haltech.TCA4B.FW_Boot_Version,10,6,1,0);
    dbc_encode(Haltech.TCA4B.Message,8,DBC_UNSIGNED,true,Haltech.TCA4B.FW_Minor,16,8,1,0);
    dbc_encode(Haltech.TCA4B.Message,8,DBC_UNSIGNED,true,Haltech.TCA4B.FW_Bugfix,24,8,1,0);
    dbc_encode(Haltech.TCA4B.Message,8,DBC_UNSIGNED,true,Haltech.TCA4B.FW_Release,32,8,1,0);
    send_message(HALTECH_CAN, false, 0x2CF, 8, Haltech.TCA4B.Message);
#endif
#ifdef ENABLE_TCA2A
    memset(Haltech.TCA2A.Message,0,8);
    dbc_encode(Haltech.TCA2A.Message,8,DBC_UNSIGNED,true,Haltech.TCA2A.ID_Conflict,0,1,1,0);
    dbc_encode(Haltech.TCA2A.Message,8,DBC_UNSIGNED,true,Haltech.TCA2A.Status,4,4,1,0);
    dbc_encode(Haltech.TCA2A.Message,8,DBC_UNSIGNED,true,Haltech.TCA2A.FW_Major,8,2,1,0);
    dbc_encode(Haltech.TCA2A.Message,8,DBC_UNSIGNED,true,Haltech.TCA2A.FW_Boot_Version,10,6,1,0);
    dbc_encode(Haltech.TCA2A.Message,8,DBC_UNSIGNED,true,Haltech.TCA2A.FW_Minor,16,8,1,0);
    dbc_encode(Haltech.TCA2A.Message,8,DBC_UNSIGNED,true,Haltech.TCA2A.FW_Bugfix,24,8,1,0);
    dbc_encode(Haltech.TCA2A.Message,8,DBC_UNSIGNED,true,Haltech.TCA2A.FW_Release,32,8,1,0);
    send_message(HALTECH_CAN, false, 0x2CA, 8, Haltech.TCA2A.Message);
#endif
#ifdef ENABLE_TCA2B
    memset(Haltech.TCA2A.Message,0,8);
    dbc_encode(Haltech.TCA2B.Message,8,DBC_UNSIGNED,true,Haltech.TCA2B.ID_Conflict,0,1,1,0);
    dbc_encode(Haltech.TCA2B.Message,8,DBC_UNSIGNED,true,Haltech.TCA2B.Status,4,4,1,0);
    dbc_encode(Haltech.TCA2B.Message,8,DBC_UNSIGNED,true,Haltech.TCA2B.FW_Major,8,2,1,0);
    dbc_encode(Haltech.TCA2B.Message,8,DBC_UNSIGNED,true,Haltech.TCA2B.FW_Boot_Version,10,6,1,0);
    dbc_encode(Haltech.TCA2B.Message,8,DBC_UNSIGNED,true,Haltech.TCA2B.FW_Minor,16,8,1,0);
    dbc_encode(Haltech.TCA2B.Message,8,DBC_UNSIGNED,true,Haltech.TCA2B.FW_Bugfix,24,8,1,0);
    dbc_encode(Haltech.TCA2B.Message,8,DBC_UNSIGNED,true,Haltech.TCA2B.FW_Release,32,8,1,0);
    send_message(HALTECH_CAN, false, 0x2CB, 8, Haltech.TCA2B.Message);
#endif

}
void haltech_Events_2Hz(void) 
{

}
void haltech_Events_1Hz(void)
{
#ifdef ENABLE_IO16A
    Haltech.IO16A.OnTime_s += 1;
#endif
#ifdef ENABLE_IO16B
    Haltech.IO16B.OnTime_s += 1;
#endif
#ifdef ENABLE_PD16A
    Haltech.PD16A.OnTime_s += 1;
#endif
#ifdef ENABLE_PD16B
    Haltech.PD16B.OnTime_s += 1;
#endif
#ifdef ENABLE_PD16C
    Haltech.PD16C.OnTime_s += 1;
#endif
#ifdef ENABLE_PD16D
    Haltech.PD16D.OnTime_s += 1;
#endif

}

bool UpdateAVIState(bool CurrentState, float OnVoltage, float OffVoltage, float Voltage)
{
    // Logic for High-Side Switching (On > Off) or Low-Side Switching (On < Off)
    if ((OnVoltage > OffVoltage && Voltage >= OnVoltage) ||
        (OnVoltage < OffVoltage && Voltage <= OnVoltage)) {
        return true;
    }
    else if ((OnVoltage > OffVoltage && Voltage <= OffVoltage) ||
        (OnVoltage < OffVoltage && Voltage >= OffVoltage)) {
        return false;
    }
    // If within the dead band, maintain the current state
    return CurrentState;
}
