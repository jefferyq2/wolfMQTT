#ifndef USER_SETTINGS_H
#define USER_SETTINGS_H

#ifdef CONFIG_WOLFMQTT_SETTINGS_FILE
#include CONFIG_WOLFMQTT_SETTINGS_FILE
#endif

#define WOLFMQTT_ZEPHYR

#ifdef CONFIG_WOLFSSL_SETTINGS_FILE
#include CONFIG_WOLFSSL_SETTINGS_FILE
#endif

#endif /* USER_SETTINGS_H */
