
// This file is autogenerated by
//     /Users/dli/Documents/lynx/lynx-native/lynx/build/jni_generator.py
// For
//     com/lynx/core/tree/LynxRenderTreeHostImpl

#ifndef com_lynx_core_tree_LynxRenderTreeHostImpl_JNI
#define com_lynx_core_tree_LynxRenderTreeHostImpl_JNI

#include <jni.h>

#include "base/android/android_jni.h"

// Step 1: forward declarations.
namespace {
const char kLynxRenderTreeHostImplClassPath[] =
    "com/lynx/core/tree/LynxRenderTreeHostImpl";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_LynxRenderTreeHostImpl_clazz = NULL;
#define LynxRenderTreeHostImpl_clazz(env) g_LynxRenderTreeHostImpl_clazz

}  // namespace

static void UpdateViewport(JNIEnv* env, jobject jcaller,
    jlong hostImpl,
    jint left,
    jint top,
    jint right,
    jint bottom);

static void OnVSync(JNIEnv* env, jobject jcaller,
    jlong hostImpl);

// Step 2: method stubs.

static intptr_t g_LynxRenderTreeHostImpl_beignFrame = 0;
static void Java_LynxRenderTreeHostImpl_beignFrame(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    LynxRenderTreeHostImpl_clazz(env));
  jmethodID method_id =
      base::android::GetMethod(
      env, LynxRenderTreeHostImpl_clazz(env),
      base::android::INSTANCE_METHOD,
      "beignFrame",

"("
")"
"V",
      &g_LynxRenderTreeHostImpl_beignFrame);

     env->CallVoidMethod(obj,
          method_id);
  base::android::CheckException(env);

}

static intptr_t g_LynxRenderTreeHostImpl_prepareCommit = 0;
static void Java_LynxRenderTreeHostImpl_prepareCommit(JNIEnv* env, jobject obj)
    {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    LynxRenderTreeHostImpl_clazz(env));
  jmethodID method_id =
      base::android::GetMethod(
      env, LynxRenderTreeHostImpl_clazz(env),
      base::android::INSTANCE_METHOD,
      "prepareCommit",

"("
")"
"V",
      &g_LynxRenderTreeHostImpl_prepareCommit);

     env->CallVoidMethod(obj,
          method_id);
  base::android::CheckException(env);

}

static intptr_t g_LynxRenderTreeHostImpl_create = 0;
static base::android::ScopedLocalJavaRef<jobject>
    Java_LynxRenderTreeHostImpl_create(JNIEnv* env, jlong hostImpl,
    jobject root) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, LynxRenderTreeHostImpl_clazz(env),
  //    LynxRenderTreeHostImpl_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, LynxRenderTreeHostImpl_clazz(env),
      base::android::STATIC_METHOD,
      "create",

"("
"J"
"Ljava/lang/Object;"
")"
"Lcom/lynx/core/tree/LynxRenderTreeHostImpl;",
      &g_LynxRenderTreeHostImpl_create);

  jobject ret =
      env->CallStaticObjectMethod(LynxRenderTreeHostImpl_clazz(env),
          method_id, hostImpl, root);
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jobject>(env, ret);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsLynxRenderTreeHostImpl[] = {
    { "nativeUpdateViewport",
"("
"J"
"I"
"I"
"I"
"I"
")"
"V", reinterpret_cast<void*>(UpdateViewport) },
    { "nativeOnVSync",
"("
"J"
")"
"V", reinterpret_cast<void*>(OnVSync) },
};

static bool RegisterNativesImpl(JNIEnv* env) {

  g_LynxRenderTreeHostImpl_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kLynxRenderTreeHostImplClassPath).Get()));

  const int kMethodsLynxRenderTreeHostImplSize =
      sizeof(kMethodsLynxRenderTreeHostImpl)/sizeof(kMethodsLynxRenderTreeHostImpl[0]);

  if (env->RegisterNatives(LynxRenderTreeHostImpl_clazz(env),
                           kMethodsLynxRenderTreeHostImpl,
                           kMethodsLynxRenderTreeHostImplSize) < 0) {
    //jni_generator::HandleRegistrationError(
    //    env, LynxRenderTreeHostImpl_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // com_lynx_core_tree_LynxRenderTreeHostImpl_JNI