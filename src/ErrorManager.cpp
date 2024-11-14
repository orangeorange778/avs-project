#include "ErrorManager.h"
// 错误码与错误信息的映射
const std::unordered_map<int, std::string> ErrorManager::errorMap = {
    {ERR_SUCCESS, "Success"},
    {ERR_INVALID_PARAMETER, "Invalid parameter"},
    {ERR_OPERATION_NOT_SUPPORTED, "Operation not supported"},
    {ERR_DEVICE_NOT_FOUND, "Device not found"},
    {ERR_OPERATION_PENDING, "Operation pending"},
    {ERR_TIMEOUT, "Timeout occurred"},
    {ERR_INVALID_MEAS_DATA, "Invalid measurement data"},
    {ERR_INVALID_SIZE, "Invalid size"},
    {ERR_INVALID_PIXEL_RANGE, "Invalid pixel range"},
    {ERR_INVALID_INT_TIME, "Invalid integration time"},
    {ERR_INVALID_COMBINATION, "Invalid combination"},
    {ERR_NO_MEAS_BUFFER_AVAIL, "No measurement buffer available"},
    {ERR_UNKNOWN, "Unknown error"},
    {ERR_COMMUNICATION, "Communication error"},
    {ERR_NO_SPECTRA_IN_RAM, "No spectra in RAM"},
    {ERR_INVALID_DLL_VERSION, "Invalid DLL version"},
    {ERR_NO_MEMORY, "Out of memory"},
    {ERR_DLL_INITIALISATION, "DLL initialization failed"},
    {ERR_INVALID_STATE, "Invalid state"},
    {ERR_INVALID_REPLY, "Invalid reply"},
    {ERR_ACCESS, "Access error"},
    {ERR_INTERNAL_READ, "Internal read error"},
    {ERR_INTERNAL_WRITE, "Internal write error"},
    {ERR_ETHCONN_REUSE, "Ethernet connection reuse error"},
    {ERR_INVALID_DEVICE_TYPE, "Invalid device type"},
    {ERR_SECURE_CFG_NOT_READ, "Secure configuration not read"},
    {ERR_UNEXPECTED_MEAS_RESPONSE, "Unexpected measurement response"},
    {ERR_INVALID_PARAMETER_NR_PIXEL, "Invalid number of pixels parameter"},
    {ERR_INVALID_PARAMETER_ADC_GAIN, "Invalid ADC gain parameter"},
    {ERR_INVALID_PARAMETER_ADC_OFFSET, "Invalid ADC offset parameter"},
    {ERR_INVALID_MEASPARAM_AVG_SAT2, "Invalid measurement parameter (AVG SAT2)"},
    {ERR_INVALID_MEASPARAM_AVG_RAM, "Invalid measurement parameter (AVG RAM)"},
    {ERR_INVALID_MEASPARAM_SYNC_RAM, "Invalid measurement parameter (SYNC RAM)"},
    {ERR_INVALID_MEASPARAM_LEVEL_RAM, "Invalid measurement parameter (LEVEL RAM)"},
    {ERR_INVALID_MEASPARAM_SAT2_RAM, "Invalid measurement parameter (SAT2 RAM)"},
    {ERR_INVALID_MEASPARAM_FWVER_RAM, "Invalid measurement parameter (FWVER RAM)"},
    {ERR_INVALID_MEASPARAM_DYNDARK, "Invalid measurement parameter (DYNDARK)"},
    {ERR_NOT_SUPPORTED_BY_SENSOR_TYPE, "Not supported by sensor type"},
    {ERR_NOT_SUPPORTED_BY_FW_VER, "Not supported by firmware version"},
    {ERR_NOT_SUPPORTED_BY_FPGA_VER, "Not supported by FPGA version"},
    {ERR_SL_CALIBRATION_NOT_AVAILABLE, "SL calibration not available"},
    {ERR_SL_STARTPIXEL_NOT_IN_RANGE, "Start pixel not in range"},
    {ERR_SL_ENDPIXEL_NOT_IN_RANGE, "End pixel not in range"},
    {ERR_SL_STARTPIX_GT_ENDPIX, "Start pixel greater than end pixel"},
    {ERR_SL_MFACTOR_OUT_OF_RANGE, "M factor out of range"}
};
