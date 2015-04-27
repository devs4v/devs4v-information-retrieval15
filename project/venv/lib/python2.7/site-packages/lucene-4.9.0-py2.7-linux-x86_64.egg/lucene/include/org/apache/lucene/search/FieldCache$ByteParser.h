#ifndef org_apache_lucene_search_FieldCache$ByteParser_H
#define org_apache_lucene_search_FieldCache$ByteParser_H

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

        class FieldCache$ByteParser : public ::org::apache::lucene::search::FieldCache$Parser {
        public:
          enum {
            mid_parseByte_7bc03dd0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$ByteParser(jobject obj) : ::org::apache::lucene::search::FieldCache$Parser(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$ByteParser(const FieldCache$ByteParser& obj) : ::org::apache::lucene::search::FieldCache$Parser(obj) {}

          jbyte parseByte(const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyTypeObject PY_TYPE(FieldCache$ByteParser);

        class t_FieldCache$ByteParser {
        public:
          PyObject_HEAD
          FieldCache$ByteParser object;
          static PyObject *wrap_Object(const FieldCache$ByteParser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
