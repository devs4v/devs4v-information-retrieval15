#ifndef org_apache_lucene_analysis_tokenattributes_CharTermAttribute_H
#define org_apache_lucene_analysis_tokenattributes_CharTermAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace java {
  namespace lang {
    class String;
    class Appendable;
    class Class;
    class StringBuilder;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class CharTermAttribute : public ::org::apache::lucene::util::Attribute {
          public:
            enum {
              mid_append_8fff6b0d,
              mid_append_ec8fc27b,
              mid_append_950755e3,
              mid_append_727d3f8d,
              mid_append_2b3c6943,
              mid_append_6505d5ab,
              mid_buffer_dab10e7f,
              mid_copyBuffer_6f0bb356,
              mid_resizeBuffer_b4292e99,
              mid_setEmpty_211a9257,
              mid_setLength_da4913e5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharTermAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CharTermAttribute(const CharTermAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            CharTermAttribute append(const ::java::lang::StringBuilder &) const;
            CharTermAttribute append(jchar) const;
            CharTermAttribute append(const ::java::lang::CharSequence &) const;
            CharTermAttribute append(const ::java::lang::String &) const;
            CharTermAttribute append(const CharTermAttribute &) const;
            CharTermAttribute append(const ::java::lang::CharSequence &, jint, jint) const;
            JArray< jchar > buffer() const;
            void copyBuffer(const JArray< jchar > &, jint, jint) const;
            JArray< jchar > resizeBuffer(jint) const;
            CharTermAttribute setEmpty() const;
            CharTermAttribute setLength(jint) const;
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
      namespace analysis {
        namespace tokenattributes {
          extern PyTypeObject PY_TYPE(CharTermAttribute);

          class t_CharTermAttribute {
          public:
            PyObject_HEAD
            CharTermAttribute object;
            static PyObject *wrap_Object(const CharTermAttribute&);
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
