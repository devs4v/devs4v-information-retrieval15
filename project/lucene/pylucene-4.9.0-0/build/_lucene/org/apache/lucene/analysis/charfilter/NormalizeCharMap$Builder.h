#ifndef org_apache_lucene_analysis_charfilter_NormalizeCharMap$Builder_H
#define org_apache_lucene_analysis_charfilter_NormalizeCharMap$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace charfilter {
          class NormalizeCharMap;
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
      namespace analysis {
        namespace charfilter {

          class NormalizeCharMap$Builder : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_add_4a264742,
              mid_build_bf8be9b0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NormalizeCharMap$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            NormalizeCharMap$Builder(const NormalizeCharMap$Builder& obj) : ::java::lang::Object(obj) {}

            NormalizeCharMap$Builder();

            void add(const ::java::lang::String &, const ::java::lang::String &) const;
            ::org::apache::lucene::analysis::charfilter::NormalizeCharMap build() const;
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
        namespace charfilter {
          extern PyTypeObject PY_TYPE(NormalizeCharMap$Builder);

          class t_NormalizeCharMap$Builder {
          public:
            PyObject_HEAD
            NormalizeCharMap$Builder object;
            static PyObject *wrap_Object(const NormalizeCharMap$Builder&);
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
