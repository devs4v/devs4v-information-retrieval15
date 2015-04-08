#ifndef org_apache_lucene_index_FieldInvertState_H
#define org_apache_lucene_index_FieldInvertState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
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
      namespace index {

        class FieldInvertState : public ::java::lang::Object {
        public:
          enum {
            mid_init$_5fdc3f48,
            mid_init$_9f4a1ba9,
            mid_getAttributeSource_f901022b,
            mid_getBoost_54c6a176,
            mid_getLength_54c6a179,
            mid_getMaxTermFrequency_54c6a179,
            mid_getName_14c7b5c5,
            mid_getNumOverlap_54c6a179,
            mid_getOffset_54c6a179,
            mid_getPosition_54c6a179,
            mid_getUniqueTermCount_54c6a179,
            mid_setBoost_06298cab,
            mid_setLength_39c7bd3c,
            mid_setNumOverlap_39c7bd3c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInvertState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldInvertState(const FieldInvertState& obj) : ::java::lang::Object(obj) {}

          FieldInvertState(const ::java::lang::String &);
          FieldInvertState(const ::java::lang::String &, jint, jint, jint, jint, jfloat);

          ::org::apache::lucene::util::AttributeSource getAttributeSource() const;
          jfloat getBoost() const;
          jint getLength() const;
          jint getMaxTermFrequency() const;
          ::java::lang::String getName() const;
          jint getNumOverlap() const;
          jint getOffset() const;
          jint getPosition() const;
          jint getUniqueTermCount() const;
          void setBoost(jfloat) const;
          void setLength(jint) const;
          void setNumOverlap(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(FieldInvertState);

        class t_FieldInvertState {
        public:
          PyObject_HEAD
          FieldInvertState object;
          static PyObject *wrap_Object(const FieldInvertState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
