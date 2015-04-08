#ifndef org_apache_lucene_analysis_synonym_WordnetSynonymParser_H
#define org_apache_lucene_analysis_synonym_WordnetSynonymParser_H

#include "org/apache/lucene/analysis/synonym/SynonymMap$Parser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
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
        namespace synonym {

          class WordnetSynonymParser : public ::org::apache::lucene::analysis::synonym::SynonymMap$Parser {
          public:
            enum {
              mid_init$_702f1f56,
              mid_parse_cf2e3c10,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WordnetSynonymParser(jobject obj) : ::org::apache::lucene::analysis::synonym::SynonymMap$Parser(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            WordnetSynonymParser(const WordnetSynonymParser& obj) : ::org::apache::lucene::analysis::synonym::SynonymMap$Parser(obj) {}

            WordnetSynonymParser(jboolean, jboolean, const ::org::apache::lucene::analysis::Analyzer &);

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
          extern PyTypeObject PY_TYPE(WordnetSynonymParser);

          class t_WordnetSynonymParser {
          public:
            PyObject_HEAD
            WordnetSynonymParser object;
            static PyObject *wrap_Object(const WordnetSynonymParser&);
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
