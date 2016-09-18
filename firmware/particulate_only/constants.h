#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "opcn2_param.h"
#include "opcn2_ids.h"
#include "logger_param.h"
#include <SPI.h>


namespace constants
{
    extern const char SoftwareVersion[];
    extern const char DeviceName[]; 
    extern const char  DeviceId[]; 

    extern const long USBSerialBaudRate;
    extern const unsigned long LoopDelay;

    // Particle counter parameters
    extern const OPCN2Param DefaultOPCN2Param;
    extern const OPCN2Ids DefaultOPCN2Ids;

    // OLED Display constatns
    extern const int DisplayDC;
    extern const int DisplayCS;
    extern const int DisplayReset;
    extern const SPISettings DisplaySPISettings;

    // Logger parameters
    extern const LoggerParam DefaultLoggerParam;
}

#endif