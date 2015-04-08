#ifndef org_apache_lucene_collation_CollationKeyFilter_H
#define org_apache_lucene_collation_CollationKeyFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace text {
    class Collator;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {

        class CollationKeyFilter : public ::org::apache::lucene::analysis::TokenFilter {
        public:
          enum {
            mid_init$_9b6c8506,
            mid_incrementToken_54c6a16a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollationKeyFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CollationKeyFilter(const CollationKeyFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

          CollationKeyFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::text::Collator &);

          jboolean incrementToken() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {
        extern PyTypeObject PY_TYPE(CollationKeyFilter);

        class t_CollationKeyFilter {
        public:
          PyObject_HEAD
          CollationKeyFilter object;
          static PyObject *wrap_Object(const CollationKeyFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
