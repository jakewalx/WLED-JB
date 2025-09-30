#pragma once

/*
 * Custom configuration for WLED
 * This file sets default WiFi credentials for factory deployment
 */

// uncomment to force the compiler to show a warning to confirm that this file is included
#warning **** my_config.h: Settings from this file are honored ****

/* WiFi settings as defaults - hardcoded for factory deployment */
#define CLIENT_SSID "area51"
#define CLIENT_PASS "alienlights"

/* WiFi connection settings */
#define WLED_WIFI_RETRIES 10
#define WLED_WIFI_TIMEOUT 20

/* Disable WiFi sleep for better connection stability */
#define WLED_NO_WIFI_SLEEP true

/* Force mDNS name for service discovery */
#define MDNS_NAME "wled"
