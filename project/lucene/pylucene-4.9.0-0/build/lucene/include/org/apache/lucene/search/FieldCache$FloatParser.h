#ifndef org_apache_lucene_search_FieldCache$FloatParser_H
#define org_apache_lucene_search_FieldCache$FloatParser_H

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

        class FieldCache$FloatParser : public ::org::apache::lucene::search::FieldCache$Parser {
        public:
          enum {
            mid_parseFloat_7bc03dd4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$FloatParser(jobject obj) : ::org::apache::lucene::search::FieldCache$Parser(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$FloatParser(const FieldCache$FloatParser& obj) : ::org::apache::lucene::search::FieldCache$Parser(obj) {}

          jfloat parseFloat(const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyTypeObject PY_TYPE(FieldCache$FloatParser);

        class t_FieldCache$FloatParser {
        public:
          PyObject_HEAD
          FieldCache$FloatParser object;
          static PyObject *wrap_Object(const FieldCache$FloatParser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
