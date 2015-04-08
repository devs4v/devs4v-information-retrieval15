#ifndef java_util_LinkedHashMap_H
#define java_util_LinkedHashMap_H

#include "java/util/HashMap.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class LinkedHashMap : public ::java::util::HashMap {
    public:
      enum {
        mid_init$_54c6a166,
        mid_init$_4c9e2b1c,
        mid_init$_39c7bd3c,
        mid_init$_abdf2c51,
        mid_init$_514f44c2,
        mid_clear_54c6a166,
        mid_containsValue_290588e2,
        mid_get_a932a95f,
        mid_removeEldestEntry_8e61453a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit LinkedHashMap(jobject obj) : ::java::util::HashMap(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      LinkedHashMap(const LinkedHashMap& obj) : ::java::util::HashMap(obj) {}

      LinkedHashMap();
      LinkedHashMap(const ::java::util::Map &);
      LinkedHashMap(jint);
      LinkedHashMap(jint, jfloat);
      LinkedHashMap(jint, jfloat, jboolean);

      void clear() const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(LinkedHashMap);

    class t_LinkedHashMap {
    public:
      PyObject_HEAD
      LinkedHashMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_LinkedHashMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const LinkedHashMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const LinkedHashMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
