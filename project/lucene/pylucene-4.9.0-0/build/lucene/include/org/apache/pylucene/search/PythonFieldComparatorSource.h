#ifndef org_apache_pylucene_search_PythonFieldComparatorSource_H
#define org_apache_pylucene_search_PythonFieldComparatorSource_H

#include "org/apache/lucene/search/FieldComparatorSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class FieldComparator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {

        class PythonFieldComparatorSource : public ::org::apache::lucene::search::FieldComparatorSource {
        public:
          enum {
            mid_init$_54c6a166,
            mid_finalize_54c6a166,
            mid_newComparator_0c7e6c91,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFieldComparatorSource(jobject obj) : ::org::apache::lucene::search::FieldComparatorSource(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonFieldComparatorSource(const PythonFieldComparatorSource& obj) : ::org::apache::lucene::search::FieldComparatorSource(obj) {}

          PythonFieldComparatorSource();

          void finalize() const;
          ::org::apache::lucene::search::FieldComparator newComparator(const ::java::lang::String &, jint, jint, jboolean) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        extern PyTypeObject PY_TYPE(PythonFieldComparatorSource);

        class t_PythonFieldComparatorSource {
        public:
          PyObject_HEAD
          PythonFieldComparatorSource object;
          static PyObject *wrap_Object(const PythonFieldComparatorSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
