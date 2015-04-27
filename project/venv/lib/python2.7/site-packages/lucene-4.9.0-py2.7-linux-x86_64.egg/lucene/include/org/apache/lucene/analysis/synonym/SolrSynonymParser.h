#ifndef org_apache_lucene_analysis_synonym_SolrSynonymParser_H
#define org_apache_lucene_analysis_synonym_SolrSynonymParser_H

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

          class SolrSynonymParser : public ::org::apache::lucene::analysis::synonym::SynonymMap$Parser {
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

            explicit SolrSynonymParser(jobject obj) : ::org::apache::lucene::analysis::synonym::SynonymMap$Parser(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SolrSynonymParser(const SolrSynonymParser& obj) : ::org::apache::lucene::analysis::synonym::SynonymMap$Parser(obj) {}

            SolrSynonymParser(jboolean, jboolean, const ::org::apache::lucene::analysis::Analyzer &);

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
          extern PyTypeObject PY_TYPE(SolrSynonymParser);

          class t_SolrSynonymParser {
          public:
            PyObject_HEAD
            SolrSynonymParser object;
            static PyObject *wrap_Object(const SolrSynonymParser&);
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
