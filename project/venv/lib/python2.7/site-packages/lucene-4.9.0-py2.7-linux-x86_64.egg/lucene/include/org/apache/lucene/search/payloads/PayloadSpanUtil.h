#ifndef org_apache_lucene_search_payloads_PayloadSpanUtil_H
#define org_apache_lucene_search_payloads_PayloadSpanUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReaderContext;
      }
      namespace search {
        class Query;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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
        namespace payloads {

          class PayloadSpanUtil : public ::java::lang::Object {
          public:
            enum {
              mid_init$_4df5686b,
              mid_getPayloadsForQuery_3971ce9f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadSpanUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PayloadSpanUtil(const PayloadSpanUtil& obj) : ::java::lang::Object(obj) {}

            PayloadSpanUtil(const ::org::apache::lucene::index::IndexReaderContext &);

            ::java::util::Collection getPayloadsForQuery(const ::org::apache::lucene::search::Query &) const;
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
        namespace payloads {
          extern PyTypeObject PY_TYPE(PayloadSpanUtil);

          class t_PayloadSpanUtil {
          public:
            PyObject_HEAD
            PayloadSpanUtil object;
            static PyObject *wrap_Object(const PayloadSpanUtil&);
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
