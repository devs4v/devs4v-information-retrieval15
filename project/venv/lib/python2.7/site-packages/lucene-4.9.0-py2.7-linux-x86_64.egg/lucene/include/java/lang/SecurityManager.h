#ifndef java_lang_SecurityManager_H
#define java_lang_SecurityManager_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ThreadGroup;
    class Class;
    class Thread;
    class String;
  }
  namespace io {
    class FileDescriptor;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class SecurityManager : public ::java::lang::Object {
    public:
      enum {
        mid_init$_54c6a166,
        mid_checkAccept_6e53ccc6,
        mid_checkAccess_cfc68b69,
        mid_checkAccess_a2f37271,
        mid_checkAwtEventQueueAccess_54c6a166,
        mid_checkConnect_6e53ccc6,
        mid_checkConnect_04ce9e32,
        mid_checkCreateClassLoader_54c6a166,
        mid_checkDelete_5fdc3f48,
        mid_checkExec_5fdc3f48,
        mid_checkExit_39c7bd3c,
        mid_checkLink_5fdc3f48,
        mid_checkListen_39c7bd3c,
        mid_checkMemberAccess_00eb98fe,
        mid_checkPackageAccess_5fdc3f48,
        mid_checkPackageDefinition_5fdc3f48,
        mid_checkPrintJobAccess_54c6a166,
        mid_checkPropertiesAccess_54c6a166,
        mid_checkPropertyAccess_5fdc3f48,
        mid_checkRead_698067a0,
        mid_checkRead_5fdc3f48,
        mid_checkRead_2da4da24,
        mid_checkSecurityAccess_5fdc3f48,
        mid_checkSetFactory_54c6a166,
        mid_checkSystemClipboardAccess_54c6a166,
        mid_checkTopLevelWindow_290588e2,
        mid_checkWrite_5fdc3f48,
        mid_checkWrite_698067a0,
        mid_getInCheck_54c6a16a,
        mid_getSecurityContext_846352c3,
        mid_getThreadGroup_172b52b4,
        mid_getClassContext_ffb25e7d,
        mid_currentClassLoader_8d2f11fc,
        mid_currentLoadedClass_44a5f2c9,
        mid_classDepth_5fdc3f57,
        mid_classLoaderDepth_54c6a179,
        mid_inClass_5fdc3f44,
        mid_inClassLoader_54c6a16a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SecurityManager(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      SecurityManager(const SecurityManager& obj) : ::java::lang::Object(obj) {}

      SecurityManager();

      void checkAccept(const ::java::lang::String &, jint) const;
      void checkAccess(const ::java::lang::Thread &) const;
      void checkAccess(const ::java::lang::ThreadGroup &) const;
      void checkAwtEventQueueAccess() const;
      void checkConnect(const ::java::lang::String &, jint) const;
      void checkConnect(const ::java::lang::String &, jint, const ::java::lang::Object &) const;
      void checkCreateClassLoader() const;
      void checkDelete(const ::java::lang::String &) const;
      void checkExec(const ::java::lang::String &) const;
      void checkExit(jint) const;
      void checkLink(const ::java::lang::String &) const;
      void checkListen(jint) const;
      void checkMemberAccess(const ::java::lang::Class &, jint) const;
      void checkPackageAccess(const ::java::lang::String &) const;
      void checkPackageDefinition(const ::java::lang::String &) const;
      void checkPrintJobAccess() const;
      void checkPropertiesAccess() const;
      void checkPropertyAccess(const ::java::lang::String &) const;
      void checkRead(const ::java::io::FileDescriptor &) const;
      void checkRead(const ::java::lang::String &) const;
      void checkRead(const ::java::lang::String &, const ::java::lang::Object &) const;
      void checkSecurityAccess(const ::java::lang::String &) const;
      void checkSetFactory() const;
      void checkSystemClipboardAccess() const;
      jboolean checkTopLevelWindow(const ::java::lang::Object &) const;
      void checkWrite(const ::java::lang::String &) const;
      void checkWrite(const ::java::io::FileDescriptor &) const;
      jboolean getInCheck() const;
      ::java::lang::Object getSecurityContext() const;
      ::java::lang::ThreadGroup getThreadGroup() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyTypeObject PY_TYPE(SecurityManager);

    class t_SecurityManager {
    public:
      PyObject_HEAD
      SecurityManager object;
      static PyObject *wrap_Object(const SecurityManager&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
