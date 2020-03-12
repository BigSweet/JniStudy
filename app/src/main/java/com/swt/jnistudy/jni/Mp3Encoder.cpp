#include "Mp3Encoder.h"
#include <android/log.h>
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, "Mp3Encoder", __VA_ARGS__)
JNIEXPORT void JNICALL
          Java_com_swt_jnistudy_Mp3Encoder_encode(JNIEnv * env,
           jobject obj) {
            LOGI("encoder encode");
            }