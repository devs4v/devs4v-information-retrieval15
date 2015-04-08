#ifndef org_apache_lucene_search_spell_JaroWinklerDistance_H
#define org_apache_lucene_search_spell_JaroWinklerDistance_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class StringDistance;
        }
      }
    }
  }
}
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

          class JaroWinklerDistance : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_equals_290588e2,
              mid_getDistance_4a264752,
              mid_getThreshold_54c6a176,
              mid_hashCode_54c6a179,
              mid_setThreshold_06298cab,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JaroWinklerDistance(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            JaroWinklerDistance(const JaroWinklerDistance& obj) : ::java::lang::Object(obj) {}

            JaroWinklerDistance();

            jboolean equals(const ::java::lang::Object &) const;
            jfloat getDistance(const ::java::lang::String &, const ::java::lang::String &) const;
            jfloat getThreshold() const;
            jint hashCode() const;
            void setThreshold(jfloat) const;
            ::java::lang::String toString() const;
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
          extern PyTypeObject PY_TYPE(JaroWinklerDistance);

          class t_JaroWinklerDistance {
          public:
            PyObject_HEAD
            JaroWinklerDistance object;
            static PyObject *wrap_Object(const JaroWinklerDistance&);
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
