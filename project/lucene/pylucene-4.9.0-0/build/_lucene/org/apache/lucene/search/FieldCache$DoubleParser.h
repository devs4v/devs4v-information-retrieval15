#ifndef org_apache_lucene_search_FieldCache$DoubleParser_H
#define org_apache_lucene_search_FieldCache$DoubleParser_H

#include "org/apache/lucene/search/FieldCache$Parser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldCache$DoubleParser : public ::org::apache::lucene::search::FieldCache$Parser {
        public:
          enum {
            mid_parseDouble_7bc03dd6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$DoubleParser(jobject obj) : ::org::apache::lucene::search::FieldCache$Parser(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$DoubleParser(const FieldCache$DoubleParser& obj) : ::org::apache::lucene::search::FieldCache$Parser(obj) {}

          jdouble parseDouble(const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyTypeObject PY_TYPE(FieldCache$DoubleParser);

        class t_FieldCache$DoubleParser {
        public:
          PyObject_HEAD
          FieldCache$DoubleParser object;
          static PyObject *wrap_Object(const FieldCache$DoubleParser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
