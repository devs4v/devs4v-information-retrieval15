#ifndef org_apache_lucene_search_suggest_fst_BytesRefSorter_H
#define org_apache_lucene_search_suggest_fst_BytesRefSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefIterator;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
    class IllegalStateException;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {

            class BytesRefSorter : public ::java::lang::Object {
            public:
              enum {
                mid_add_7bc03dc4,
                mid_getComparator_5a7ff2fc,
                mid_iterator_534dea83,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BytesRefSorter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              BytesRefSorter(const BytesRefSorter& obj) : ::java::lang::Object(obj) {}

              void add(const ::org::apache::lucene::util::BytesRef &) const;
              ::java::util::Comparator getComparator() const;
              ::org::apache::lucene::util::BytesRefIterator iterator() const;
            };
          }
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
        namespace suggest {
          namespace fst {
            extern PyTypeObject PY_TYPE(BytesRefSorter);

            class t_BytesRefSorter {
            public:
              PyObject_HEAD
              BytesRefSorter object;
              static PyObject *wrap_Object(const BytesRefSorter&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
