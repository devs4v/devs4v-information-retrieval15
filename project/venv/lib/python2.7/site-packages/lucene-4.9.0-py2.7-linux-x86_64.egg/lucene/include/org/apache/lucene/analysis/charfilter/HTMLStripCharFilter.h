#ifndef org_apache_lucene_analysis_charfilter_HTMLStripCharFilter_H
#define org_apache_lucene_analysis_charfilter_HTMLStripCharFilter_H

#include "org/apache/lucene/analysis/charfilter/BaseCharFilter.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Set;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace charfilter {

          class HTMLStripCharFilter : public ::org::apache::lucene::analysis::charfilter::BaseCharFilter {
          public:
            enum {
              mid_init$_cf2e3c10,
              mid_init$_2df021b4,
              mid_close_54c6a166,
              mid_read_54c6a179,
              mid_read_6f0bb349,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HTMLStripCharFilter(jobject obj) : ::org::apache::lucene::analysis::charfilter::BaseCharFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            HTMLStripCharFilter(const HTMLStripCharFilter& obj) : ::org::apache::lucene::analysis::charfilter::BaseCharFilter(obj) {}

            HTMLStripCharFilter(const ::java::io::Reader &);
            HTMLStripCharFilter(const ::java::io::Reader &, const ::java::util::Set &);

            void close() const;
            jint read() const;
            jint read(const JArray< jchar > &, jint, jint) const;
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
          extern PyTypeObject PY_TYPE(HTMLStripCharFilter);

          class t_HTMLStripCharFilter {
          public:
            PyObject_HEAD
            HTMLStripCharFilter object;
            static PyObject *wrap_Object(const HTMLStripCharFilter&);
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
