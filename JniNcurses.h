/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class de_muffinanddonut_jnincurses_JniNcurses */

#ifndef _Included_de_muffinanddonut_jnincurses_JniNcurses
#define _Included_de_muffinanddonut_jnincurses_JniNcurses
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_init
  (JNIEnv *, jobject);

/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    print
 * Signature: (Ljava/lang/String;II)V
 */
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_print
  (JNIEnv *, jobject, jstring, jint, jint);

/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    refresh
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_refresh
  (JNIEnv *, jobject);

/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    deleteln
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_deleteln
  (JNIEnv *, jobject);

/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    attron
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_attron
  (JNIEnv *, jobject, jint);

/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    attroff
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_attroff
  (JNIEnv *, jobject, jint);

/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    getmaxyx
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_getmaxyx
  (JNIEnv *, jobject);

/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    getch
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_getch
  (JNIEnv *, jobject);

/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    move
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_move
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_clear
  (JNIEnv *, jobject);

/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
