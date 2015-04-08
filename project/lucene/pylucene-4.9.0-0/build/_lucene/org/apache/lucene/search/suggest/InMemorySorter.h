#ifndef org_apache_lucene_search_suggest_InMemorySorter_H
#define org_apache_lucene_search_suggest_InMemorySorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class InMemorySorter : public ::java::lang::Object {
          public:
            enum {
              mid_init$_6ffdd545,
              mid_add_7bc03dc4,
              mid_getComparator_5a7ff2fc,
              mid_iterator_534dea83,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InMemorySorter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            InMemorySorter(const InMemorySorter& obj) : ::java::lang::Object(obj) {}

            InMemorySorter(const ::java::util::Comparator &);

            void add(const ::org::apache::lucene::util::BytesRef &) const;
            ::java::util::Comparator getComparator() const;
            ::org::apache::lucene::util::BytesRefIterator iterator() const;
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
        namespace suggest {
          extern PyTypeObject PY_TYPE(InMemorySorter);

          class t_InMemorySorter {
          public:
            PyObject_HEAD
            InMemorySorter object;
            static PyObject *wrap_Object(const InMemorySorter&);
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
