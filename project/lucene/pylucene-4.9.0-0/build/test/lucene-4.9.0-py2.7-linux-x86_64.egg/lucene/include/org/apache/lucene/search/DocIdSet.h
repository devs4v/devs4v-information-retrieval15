#ifndef org_apache_lucene_search_DocIdSet_H
#define org_apache_lucene_search_DocIdSet_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class Bits;
      }
      namespace search {
        class DocIdSetIterator;
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
      namespace search {

        class DocIdSet : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_bits_03c2457d,
            mid_isCacheable_54c6a16a,
            mid_iterator_dc23660c,
            mid_ramBytesUsed_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIdSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DocIdSet(const DocIdSet& obj) : ::java::lang::Object(obj) {}

          static DocIdSet *EMPTY;

          DocIdSet();

          ::org::apache::lucene::util::Bits bits() const;
          jboolean isCacheable() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jlong ramBytesUsed() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(DocIdSet);

        class t_DocIdSet {
        public:
          PyObject_HEAD
          DocIdSet object;
          static PyObject *wrap_Object(const DocIdSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
