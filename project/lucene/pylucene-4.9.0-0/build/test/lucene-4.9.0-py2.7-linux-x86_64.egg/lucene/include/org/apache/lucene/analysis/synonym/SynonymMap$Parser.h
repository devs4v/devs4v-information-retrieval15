#ifndef org_apache_lucene_analysis_synonym_SynonymMap$Parser_H
#define org_apache_lucene_analysis_synonym_SynonymMap$Parser_H

#include "org/apache/lucene/analysis/synonym/SynonymMap$Builder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class CharsRef;
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
        namespace synonym {

          class SynonymMap$Parser : public ::org::apache::lucene::analysis::synonym::SynonymMap$Builder {
          public:
            enum {
              mid_init$_8ce78b37,
              mid_analyze_f51a472d,
              mid_parse_cf2e3c10,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SynonymMap$Parser(jobject obj) : ::org::apache::lucene::analysis::synonym::SynonymMap$Builder(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SynonymMap$Parser(const SynonymMap$Parser& obj) : ::org::apache::lucene::analysis::synonym::SynonymMap$Builder(obj) {}

            SynonymMap$Parser(jboolean, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::util::CharsRef analyze(const ::java::lang::String &, const ::org::apache::lucene::util::CharsRef &) const;
            void parse(const ::java::io::Reader &) const;
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
        namespace synonym {
          extern PyTypeObject PY_TYPE(SynonymMap$Parser);

          class t_SynonymMap$Parser {
          public:
            PyObject_HEAD
            SynonymMap$Parser object;
            static PyObject *wrap_Object(const SynonymMap$Parser&);
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
