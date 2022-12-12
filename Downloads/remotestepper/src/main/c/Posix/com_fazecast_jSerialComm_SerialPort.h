/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_fazecast_jSerialComm_SerialPort */

#ifndef _Included_com_fazecast_jSerialComm_SerialPort
#define _Included_com_fazecast_jSerialComm_SerialPort
#ifdef __cplusplus
extern "C" {
#endif
#undef com_fazecast_jSerialComm_SerialPort_NO_PARITY
#define com_fazecast_jSerialComm_SerialPort_NO_PARITY 0L
#undef com_fazecast_jSerialComm_SerialPort_ODD_PARITY
#define com_fazecast_jSerialComm_SerialPort_ODD_PARITY 1L
#undef com_fazecast_jSerialComm_SerialPort_EVEN_PARITY
#define com_fazecast_jSerialComm_SerialPort_EVEN_PARITY 2L
#undef com_fazecast_jSerialComm_SerialPort_MARK_PARITY
#define com_fazecast_jSerialComm_SerialPort_MARK_PARITY 3L
#undef com_fazecast_jSerialComm_SerialPort_SPACE_PARITY
#define com_fazecast_jSerialComm_SerialPort_SPACE_PARITY 4L
#undef com_fazecast_jSerialComm_SerialPort_ONE_STOP_BIT
#define com_fazecast_jSerialComm_SerialPort_ONE_STOP_BIT 1L
#undef com_fazecast_jSerialComm_SerialPort_ONE_POINT_FIVE_STOP_BITS
#define com_fazecast_jSerialComm_SerialPort_ONE_POINT_FIVE_STOP_BITS 2L
#undef com_fazecast_jSerialComm_SerialPort_TWO_STOP_BITS
#define com_fazecast_jSerialComm_SerialPort_TWO_STOP_BITS 3L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_DISABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_DISABLED 0L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_RTS_ENABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_RTS_ENABLED 1L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_CTS_ENABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_CTS_ENABLED 16L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_DSR_ENABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_DSR_ENABLED 256L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_DTR_ENABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_DTR_ENABLED 4096L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_XONXOFF_IN_ENABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_XONXOFF_IN_ENABLED 65536L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_XONXOFF_OUT_ENABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_XONXOFF_OUT_ENABLED 1048576L
#undef com_fazecast_jSerialComm_SerialPort_TIMEOUT_NONBLOCKING
#define com_fazecast_jSerialComm_SerialPort_TIMEOUT_NONBLOCKING 0L
#undef com_fazecast_jSerialComm_SerialPort_TIMEOUT_READ_SEMI_BLOCKING
#define com_fazecast_jSerialComm_SerialPort_TIMEOUT_READ_SEMI_BLOCKING 1L
#undef com_fazecast_jSerialComm_SerialPort_TIMEOUT_READ_BLOCKING
#define com_fazecast_jSerialComm_SerialPort_TIMEOUT_READ_BLOCKING 16L
#undef com_fazecast_jSerialComm_SerialPort_TIMEOUT_WRITE_BLOCKING
#define com_fazecast_jSerialComm_SerialPort_TIMEOUT_WRITE_BLOCKING 256L
#undef com_fazecast_jSerialComm_SerialPort_TIMEOUT_SCANNER
#define com_fazecast_jSerialComm_SerialPort_TIMEOUT_SCANNER 4096L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_TIMED_OUT
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_TIMED_OUT 0L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DATA_AVAILABLE
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DATA_AVAILABLE 1L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DATA_RECEIVED
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DATA_RECEIVED 16L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DATA_WRITTEN
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DATA_WRITTEN 256L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_BREAK_INTERRUPT
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_BREAK_INTERRUPT 65536L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_CARRIER_DETECT
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_CARRIER_DETECT 131072L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_CTS
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_CTS 262144L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DSR
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DSR 524288L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_RING_INDICATOR
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_RING_INDICATOR 1048576L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_FRAMING_ERROR
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_FRAMING_ERROR 2097152L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_FIRMWARE_OVERRUN_ERROR
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_FIRMWARE_OVERRUN_ERROR 4194304L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_SOFTWARE_OVERRUN_ERROR
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_SOFTWARE_OVERRUN_ERROR 8388608L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_PARITY_ERROR
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_PARITY_ERROR 16777216L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_PORT_DISCONNECTED
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_PORT_DISCONNECTED 268435456L
/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    uninitializeLibrary
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_fazecast_jSerialComm_SerialPort_uninitializeLibrary
  (JNIEnv *, jclass);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    getCommPortsNative
 * Signature: ()[Lcom/fazecast/jSerialComm/SerialPort;
 */
JNIEXPORT jobjectArray JNICALL Java_com_fazecast_jSerialComm_SerialPort_getCommPortsNative
  (JNIEnv *, jclass);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    retrievePortDetails
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_fazecast_jSerialComm_SerialPort_retrievePortDetails
  (JNIEnv *, jobject);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    openPortNative
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_fazecast_jSerialComm_SerialPort_openPortNative
  (JNIEnv *, jobject);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    closePortNative
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_fazecast_jSerialComm_SerialPort_closePortNative
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    configPort
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_configPort
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    configTimeouts
 * Signature: (JIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_configTimeouts
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    flushRxTxBuffers
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_flushRxTxBuffers
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    waitForEvent
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_fazecast_jSerialComm_SerialPort_waitForEvent
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    bytesAvailable
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_fazecast_jSerialComm_SerialPort_bytesAvailable
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    bytesAwaitingWrite
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_fazecast_jSerialComm_SerialPort_bytesAwaitingWrite
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    readBytes
 * Signature: (J[BJJII)I
 */
JNIEXPORT jint JNICALL Java_com_fazecast_jSerialComm_SerialPort_readBytes
  (JNIEnv *, jobject, jlong, jbyteArray, jlong, jlong, jint, jint);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    writeBytes
 * Signature: (J[BJJI)I
 */
JNIEXPORT jint JNICALL Java_com_fazecast_jSerialComm_SerialPort_writeBytes
  (JNIEnv *, jobject, jlong, jbyteArray, jlong, jlong, jint);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    setEventListeningStatus
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_fazecast_jSerialComm_SerialPort_setEventListeningStatus
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    setBreak
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_setBreak
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    clearBreak
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_clearBreak
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    setRTS
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_setRTS
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    clearRTS
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_clearRTS
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    presetRTS
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_presetRTS
  (JNIEnv *, jobject);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    preclearRTS
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_preclearRTS
  (JNIEnv *, jobject);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    setDTR
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_setDTR
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    clearDTR
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_clearDTR
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    presetDTR
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_presetDTR
  (JNIEnv *, jobject);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    preclearDTR
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_preclearDTR
  (JNIEnv *, jobject);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    getCTS
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_getCTS
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    getDSR
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_getDSR
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    getDCD
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_getDCD
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    getDTR
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_getDTR
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    getRTS
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_getRTS
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    getRI
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_getRI
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    getLastErrorLocation
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_fazecast_jSerialComm_SerialPort_getLastErrorLocation
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    getLastErrorCode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_fazecast_jSerialComm_SerialPort_getLastErrorCode
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif