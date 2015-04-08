#ifndef org_apache_lucene_search_vectorhighlight_FieldTermStack$TermInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldTermStack$TermInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldTermStack$TermInfo : public ::java::lang::Object {
          public:
            enum {
              mid_init$_649c5657,
              mid_compareTo_a7ece374,
              mid_equals_290588e2,
              mid_getEndOffset_54c6a179,
              mid_getNext_9d9e3d4a,
              mid_getPosition_54c6a179,
              mid_getStartOffset_54c6a179,
              mid_getText_14c7b5c5,
              mid_getWeight_54c6a176,
              mid_hashCode_54c6a179,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldTermStack$TermInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FieldTermStack$TermInfo(const FieldTermStack$TermInfo& obj) : ::java::lang::Object(obj) {}

            FieldTermStack$TermInfo(const ::java::lang::String &, jint, jint, jint, jfloat);

            jint compareTo(const FieldTermStack$TermInfo &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getEndOffset() const;
            FieldTermStack$TermInfo getNext() const;
            jint getPosition() const;
            jint getStartOffset() const;
            ::java::lang::String getText() const;
            jfloat getWeight() const;
            jint hashCode() const;
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
        namespace vectorhighlight {
          extern PyTypeObject PY_TYPE(FieldTermStack$TermInfo);

          class t_FieldTermStack$TermInfo {
          public:
            PyObject_HEAD
            FieldTermStack$TermInfo object;
            static PyObject *wrap_Object(const FieldTermStack$TermInfo&);
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
