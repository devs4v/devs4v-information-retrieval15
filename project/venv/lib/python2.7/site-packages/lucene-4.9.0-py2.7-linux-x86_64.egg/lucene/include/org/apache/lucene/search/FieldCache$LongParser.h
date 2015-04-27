#ifndef org_apache_lucene_search_FieldCache$LongParser_H
#define org_apache_lucene_search_FieldCache$LongParser_H

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

        class FieldCache$LongParser : public ::org::apache::lucene::search::FieldCache$Parser {
        public:
          enum {
            mid_parseLong_7bc03dd8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$LongParser(jobject obj) : ::org::apache::lucene::search::FieldCache$Parser(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$LongParser(const FieldCache$LongParser& obj) : ::org::apache::lucene::search::FieldCache$Parser(obj) {}

          jlong parseLong(const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyTypeObject PY_TYPE(FieldCache$LongParser);

        class t_FieldCache$LongParser {
        public:
          PyObject_HEAD
          FieldCache$LongParser object;
          static PyObject *wrap_Object(const FieldCache$LongParser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
