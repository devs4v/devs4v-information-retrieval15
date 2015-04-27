#ifndef org_apache_lucene_index_DocsEnum_H
#define org_apache_lucene_index_DocsEnum_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

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
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class DocsEnum : public ::org::apache::lucene::search::DocIdSetIterator {
        public:
          enum {
            mid_attributes_f901022b,
            mid_freq_54c6a179,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocsEnum(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DocsEnum(const DocsEnum& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          static jint FLAG_FREQS;
          static jint FLAG_NONE;

          ::org::apache::lucene::util::AttributeSource attributes() const;
          jint freq() const;
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
        extern PyTypeObject PY_TYPE(DocsEnum);

        class t_DocsEnum {
        public:
          PyObject_HEAD
          DocsEnum object;
          static PyObject *wrap_Object(const DocsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
