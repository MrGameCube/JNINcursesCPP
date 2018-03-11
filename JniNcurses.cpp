#include "JniNcurses.h"
#include <ncurses.h>
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_init(JNIEnv *env, jobject obj) {
	//setlocale(LC_ALL, "");
	initscr();
	cbreak();
	keypad(stdscr, TRUE);
	curs_set(0);
}
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_print(JNIEnv *env, jobject obj, jstring str, jint x, jint y) {
	const char *nativeString = env->GetStringUTFChars(str, JNI_FALSE);
	mvprintw(y,x,nativeString);
	env->ReleaseStringUTFChars(str,nativeString);
}
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_refresh(JNIEnv *env, jobject obj) {
	refresh();
}
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_deleteln(JNIEnv *env, jobject obj) {
	deleteln();
}
/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    attron
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_attron(JNIEnv *env, jobject obj, jint attribute) {
	attron(attribute);
}

/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    attroff
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_attroff(JNIEnv *env, jobject obj, jint attribute) {
	attroff(attribute);
}

/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    getmaxyx
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_getmaxyx(JNIEnv *env, jobject obj) {
	int y,x;
	getmaxyx(stdscr, y, x);

	jintArray result;
	result = env->NewIntArray(2);
	if(result == NULL) {
		return NULL;
	}
	jint tempArray[2];
	tempArray[0] = x;
	tempArray[1] = y;
	env->SetIntArrayRegion(result, 0 , 2, tempArray);
	return result;
}

/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    getch
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_getch(JNIEnv *env, jobject obj) {
	return getch();
}
/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    move
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_move(JNIEnv *env, jobject obj, jint x, jint y) {
	move(y,x);
}
/*
 * Class:     de_muffinanddonut_jnincurses_JniNcurses
 * Method:    clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_clear(JNIEnv *, jobject) {
	clear();
}
JNIEXPORT void JNICALL Java_de_muffinanddonut_jnincurses_JniNcurses_dispose(JNIEnv *env, jobject obj) {
	endwin();
}