#include "global.h"

#include "config/ConfigGroup.h"
#include "core/RoleFactory.h"

/* Global Variables */
const dclass::File *g_dcf = nullptr;
Logger *g_logger = new Logger;
ConfigFile *g_config = new ConfigFile;
boost::asio::io_service io_service;
std::unordered_map<doid_t, Uberdog> g_uberdogs;
