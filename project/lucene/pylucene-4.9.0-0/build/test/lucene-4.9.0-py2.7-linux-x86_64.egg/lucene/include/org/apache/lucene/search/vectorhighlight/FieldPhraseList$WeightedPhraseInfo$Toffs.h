#ifndef org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo$Toffs_H
#define org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo$Toffs_H

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

          class FieldPhraseList$WeightedPhraseInfo$Toffs : public ::java::lang::Object {
          public:
            enum {
              mid_init$_d8d154a6,
              mid_compareTo_7779971e,
              mid_equals_290588e2,
              mid_getEndOffset_54c6a179,
              mid_getStartOffset_54c6a179,
              mid_hashCode_54c6a179,
              mid_setEndOffset_39c7bd3c,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldPhraseList$WeightedPhraseInfo$Toffs(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FieldPhraseList$WeightedPhraseInfo$Toffs(const FieldPhraseList$WeightedPhraseInfo$Toffs& obj) : ::java::lang::Object(obj) {}

            FieldPhraseList$WeightedPhraseInfo$Toffs(jint, jint);

            jint compareTo(const FieldPhraseList$WeightedPhraseInfo$Toffs &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getEndOffset() const;
            jint getStartOffset() const;
            jint hashCode() const;
            void setEndOffset(jint) const;
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
          extern PyTypeObject PY_TYPE(FieldPhraseList$WeightedPhraseInfo$Toffs);

          class t_FieldPhraseList$WeightedPhraseInfo$Toffs {
          public:
            PyObject_HEAD
            FieldPhraseList$WeightedPhraseInfo$Toffs object;
            static PyObject *wrap_Object(const FieldPhraseList$WeightedPhraseInfo$Toffs&);
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
