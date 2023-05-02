#pragma once

#include <AP_HAL/AP_HAL_Boards.h>
#include <AP_MSP/AP_MSP_config.h>
#include <GCS_MAVLink/GCS_config.h>

#ifndef AP_OPTICALFLOW_ENABLED
#define AP_OPTICALFLOW_ENABLED 1
#endif

#ifndef AP_OPTICALFLOW_BACKEND_DEFAULT_ENABLED
#define AP_OPTICALFLOW_BACKEND_DEFAULT_ENABLED AP_OPTICALFLOW_ENABLED
#endif

#ifndef AP_OPTICALFLOW_CXOF_ENABLED
#define AP_OPTICALFLOW_CXOF_ENABLED AP_OPTICALFLOW_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_OPTICALFLOW_HEREFLOW_ENABLED
#define AP_OPTICALFLOW_HEREFLOW_ENABLED (AP_OPTICALFLOW_BACKEND_DEFAULT_ENABLED && HAL_ENABLE_DRONECAN_DRIVERS)
#endif

#ifndef AP_OPTICALFLOW_MAV_ENABLED
#define AP_OPTICALFLOW_MAV_ENABLED (AP_OPTICALFLOW_BACKEND_DEFAULT_ENABLED && HAL_GCS_ENABLED)
#endif

#ifndef HAL_MSP_OPTICALFLOW_ENABLED
#define HAL_MSP_OPTICALFLOW_ENABLED (AP_OPTICALFLOW_BACKEND_DEFAULT_ENABLED && (HAL_MSP_ENABLED && !HAL_MINIMIZE_FEATURES))
#endif

#ifndef AP_OPTICALFLOW_ONBOARD_ENABLED
#define AP_OPTICALFLOW_ONBOARD_ENABLED (AP_OPTICALFLOW_BACKEND_DEFAULT_ENABLED && CONFIG_HAL_BOARD == HAL_BOARD_LINUX && CONFIG_HAL_BOARD_SUBTYPE == HAL_BOARD_SUBTYPE_LINUX_BEBOP)
#endif

#ifndef AP_OPTICALFLOW_PIXART_ENABLED
#define AP_OPTICALFLOW_PIXART_ENABLED AP_OPTICALFLOW_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_OPTICALFLOW_PX4FLOW_ENABLED
#define AP_OPTICALFLOW_PX4FLOW_ENABLED AP_OPTICALFLOW_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_OPTICALFLOW_SITL_ENABLED
#define AP_OPTICALFLOW_SITL_ENABLED (AP_OPTICALFLOW_BACKEND_DEFAULT_ENABLED && AP_SIM_ENABLED)
#endif

#ifndef AP_OPTICALFLOW_UPFLOW_ENABLED
#define AP_OPTICALFLOW_UPFLOW_ENABLED AP_OPTICALFLOW_BACKEND_DEFAULT_ENABLED
#endif