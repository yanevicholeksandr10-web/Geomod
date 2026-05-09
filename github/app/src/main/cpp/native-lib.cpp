#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_ua_geoteam_geomod_MainActivity_stringFromJNI(JNIEnv* env, jobject) {
    return env->NewStringUTF("Geomod: Вкладка Моди Активна");
}
