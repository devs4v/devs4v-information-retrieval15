#ifndef org_apache_lucene_search_suggest_fst_ExternalRefSorter_H
#define org_apache_lucene_search_suggest_fst_ExternalRefSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class OfflineSorter;
        class BytesRefIterator;
        class BytesRef;
      }
      namespace search {
        namespace suggest {
          namespace fst {
            class BytesRefSorter;
          }
        }
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
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {

            class ExternalRefSorter : public ::java::lang::Object {
            public:
              enum {
                mid_init$_6859decd,
                mid_add_7bc03dc4,
                mid_close_54c6a166,
                mid_getComparator_5a7ff2fc,
                mid_iterator_534dea83,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ExternalRefSorter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              ExternalRefSorter(const ExternalRefSorter& obj) : ::java::lang::Object(obj) {}

              ExternalRefSorter(const ::org::apache::lucene::util::OfflineSorter &);

              void add(const ::org::apache::lucene::util::BytesRef &) const;
              void close() const;
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
            extern PyTypeObject PY_TYPE(ExternalRefSorter);

            class t_ExternalRefSorter {
            public:
              PyObject_HEAD
              ExternalRefSorter object;
              static PyObject *wrap_Object(const ExternalRefSorter&);
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
