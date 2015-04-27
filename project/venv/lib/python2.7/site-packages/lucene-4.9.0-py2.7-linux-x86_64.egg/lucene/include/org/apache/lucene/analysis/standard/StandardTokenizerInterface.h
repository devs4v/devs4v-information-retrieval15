#ifndef org_apache_lucene_analysis_standard_StandardTokenizerInterface_H
#define org_apache_lucene_analysis_standard_StandardTokenizerInterface_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class CharTermAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {

          class StandardTokenizerInterface : public ::java::lang::Object {
          public:
            enum {
              mid_getNextToken_54c6a179,
              mid_getText_64c709f2,
              mid_yychar_54c6a179,
              mid_yylength_54c6a179,
              mid_yyreset_cf2e3c10,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StandardTokenizerInterface(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            StandardTokenizerInterface(const StandardTokenizerInterface& obj) : ::java::lang::Object(obj) {}

            static jint YYEOF;

            jint getNextToken() const;
            void getText(const ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute &) const;
            jint yychar() const;
            jint yylength() const;
            void yyreset(const ::java::io::Reader &) const;
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
      namespace analysis {
        namespace standard {
          extern PyTypeObject PY_TYPE(StandardTokenizerInterface);

          class t_StandardTokenizerInterface {
          public:
            PyObject_HEAD
            StandardTokenizerInterface object;
            static PyObject *wrap_Object(const StandardTokenizerInterface&);
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
