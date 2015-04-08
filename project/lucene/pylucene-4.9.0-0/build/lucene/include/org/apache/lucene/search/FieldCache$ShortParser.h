#ifndef org_apache_lucene_search_FieldCache$ShortParser_H
#define org_apache_lucene_search_FieldCache$ShortParser_H

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

        class FieldCache$ShortParser : public ::org::apache::lucene::search::FieldCache$Parser {
        public:
          enum {
            mid_parseShort_7bc03dc1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$ShortParser(jobject obj) : ::org::apache::lucene::search::FieldCache$Parser(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$ShortParser(const FieldCache$ShortParser& obj) : ::org::apache::lucene::search::FieldCache$Parser(obj) {}

          jshort parseShort(const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyTypeObject PY_TYPE(FieldCache$ShortParser);

        class t_FieldCache$ShortParser {
        public:
          PyObject_HEAD
          FieldCache$ShortParser object;
          static PyObject *wrap_Object(const FieldCache$ShortParser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
