/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_lame_LameWrapper */

#ifndef _Included_com_lame_LameWrapper
#define _Included_com_lame_LameWrapper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_lame_LameWrapper
 * Method:    init
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_com_lame_LameWrapper_init
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     com_lame_LameWrapper
 * Method:    encode
 * Signature: ([S[SI[B)I
 */
JNIEXPORT jint JNICALL Java_com_lame_LameWrapper_encode
  (JNIEnv *, jclass, jshortArray, jshortArray, jint, jbyteArray);

/*
 * Class:     com_lame_LameWrapper
 * Method:    flush
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_lame_LameWrapper_flush
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_lame_LameWrapper
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_lame_LameWrapper_close
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
