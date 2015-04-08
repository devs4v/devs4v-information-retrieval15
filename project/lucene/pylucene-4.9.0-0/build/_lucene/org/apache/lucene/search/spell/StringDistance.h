#ifndef org_apache_lucene_search_spell_StringDistance_H
#define org_apache_lucene_search_spell_StringDistance_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class StringDistance : public ::java::lang::Object {
          public:
            enum {
              mid_getDistance_4a264752,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StringDistance(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            StringDistance(const StringDistance& obj) : ::java::lang::Object(obj) {}

            jfloat getDistance(const ::java::lang::String &, const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          extern PyTypeObject PY_TYPE(StringDistance);

          class t_StringDistance {
          public:
            PyObject_HEAD
            StringDistance object;
            static PyObject *wrap_Object(const StringDistance&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
