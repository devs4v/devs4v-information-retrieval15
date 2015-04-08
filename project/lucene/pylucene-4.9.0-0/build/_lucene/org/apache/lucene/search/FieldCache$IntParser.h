#ifndef org_apache_lucene_search_FieldCache$IntParser_H
#define org_apache_lucene_search_FieldCache$IntParser_H

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

        class FieldCache$IntParser : public ::org::apache::lucene::search::FieldCache$Parser {
        public:
          enum {
            mid_parseInt_7bc03ddb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$IntParser(jobject obj) : ::org::apache::lucene::search::FieldCache$Parser(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$IntParser(const FieldCache$IntParser& obj) : ::org::apache::lucene::search::FieldCache$Parser(obj) {}

          jint parseInt(const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyTypeObject PY_TYPE(FieldCache$IntParser);

        class t_FieldCache$IntParser {
        public:
          PyObject_HEAD
          FieldCache$IntParser object;
          static PyObject *wrap_Object(const FieldCache$IntParser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
