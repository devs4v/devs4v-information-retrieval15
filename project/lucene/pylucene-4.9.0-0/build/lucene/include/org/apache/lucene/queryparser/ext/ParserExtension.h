#ifndef org_apache_lucene_queryparser_ext_ParserExtension_H
#define org_apache_lucene_queryparser_ext_ParserExtension_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace ext {
          class ExtensionQuery;
        }
        namespace classic {
          class ParseException;
        }
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
      namespace queryparser {
        namespace ext {

          class ParserExtension : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_parse_d185629b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParserExtension(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ParserExtension(const ParserExtension& obj) : ::java::lang::Object(obj) {}

            ParserExtension();

            ::org::apache::lucene::search::Query parse(const ::org::apache::lucene::queryparser::ext::ExtensionQuery &) const;
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
          extern PyTypeObject PY_TYPE(ParserExtension);

          class t_ParserExtension {
          public:
            PyObject_HEAD
            ParserExtension object;
            static PyObject *wrap_Object(const ParserExtension&);
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
