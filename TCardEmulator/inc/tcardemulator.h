#ifndef __tcardemulator_H__
#define __tcardemulator_H__

#define LOG_TAG "tcardemulator"

#if !defined(PACKAGE)
#define PACKAGE "com.vsmartcard.tcardemulator"
#endif

#include <stddef.h>
#include <glib.h>

extern unsigned char *rapdu;
extern size_t rapdu_length;
extern gboolean rapdu_received;

#define HELLO_ACC_ASPID "/sample/hello"
#define HELLO_ACC_CHANNELID 104

void     initialize_sap();
gboolean find_peers();
gboolean request_service_connection(void);
gboolean terminate_service_connection(void);
gboolean send_data(void *message, unsigned int message_len);

#endif /* __tcardemulator_H__ */