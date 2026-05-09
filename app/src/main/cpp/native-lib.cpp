#include <jni.h>
#include <string>

// Це серце твого Geomod
extern "C" JNIEXPORT jstring JNICALL
Java_ua_geoteam_geomod_MainActivity_stringFromJNI(JNIEnv* env, jobject) {
    return env->NewStringUTF("Geomod: Вкладки (Моди, Челенджі, Мова) активовані!");
}
