#ifndef org_apache_lucene_queryparser_ext_ExtendableQueryParser_H
#define org_apache_lucene_queryparser_ext_ExtendableQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace queryparser {
        namespace ext {
          class Extensions;
        }
      }
      namespace analysis {
        class Analyzer;
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

          class ExtendableQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
          public:
            enum {
              mid_init$_504c192d,
              mid_init$_5a825d0f,
              mid_getExtensionFieldDelimiter_54c6a173,
              mid_getFieldQuery_bd696f55,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ExtendableQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ExtendableQueryParser(const ExtendableQueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {}

            ExtendableQueryParser(const ::org::apache::lucene::util::Version &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            ExtendableQueryParser(const ::org::apache::lucene::util::Version &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::queryparser::ext::Extensions &);

            jchar getExtensionFieldDelimiter() const;
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
          extern PyTypeObject PY_TYPE(ExtendableQueryParser);

          class t_ExtendableQueryParser {
          public:
            PyObject_HEAD
            ExtendableQueryParser object;
            static PyObject *wrap_Object(const ExtendableQueryParser&);
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
