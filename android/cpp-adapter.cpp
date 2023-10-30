#include <jni.h>
#include "react-native-onigurama.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_onigurama_OniguramaModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return onigurama::multiply(a, b);
}
