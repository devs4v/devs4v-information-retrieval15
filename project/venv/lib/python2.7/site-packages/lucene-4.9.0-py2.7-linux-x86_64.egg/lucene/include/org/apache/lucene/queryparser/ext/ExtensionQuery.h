#ifndef org_apache_lucene_queryparser_ext_ExtensionQuery_H
#define org_apache_lucene_queryparser_ext_ExtensionQuery_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {
          class QueryParser;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {

          class ExtensionQuery : public ::java::lang::Object {
          public:
            enum {
              mid_init$_a24cebd3,
              mid_getField_14c7b5c5,
              mid_getRawQueryString_14c7b5c5,
              mid_getTopLevelParser_f96fcc72,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ExtensionQuery(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ExtensionQuery(const ExtensionQuery& obj) : ::java::lang::Object(obj) {}

            ExtensionQuery(const ::org::apache::lucene::queryparser::classic::QueryParser &, const ::java::lang::String &, const ::java::lang::String &);

            ::java::lang::String getField() const;
            ::java::lang::String getRawQueryString() const;
            ::org::apache::lucene::queryparser::classic::QueryParser getTopLevelParser() const;
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
      namespace queryparser {
        namespace ext {
          extern PyTypeObject PY_TYPE(ExtensionQuery);

          class t_ExtensionQuery {
          public:
            PyObject_HEAD
            ExtensionQuery object;
            static PyObject *wrap_Object(const ExtensionQuery&);
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
