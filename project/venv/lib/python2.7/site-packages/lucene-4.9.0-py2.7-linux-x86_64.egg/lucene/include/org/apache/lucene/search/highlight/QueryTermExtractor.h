#ifndef org_apache_lucene_search_highlight_QueryTermExtractor_H
#define org_apache_lucene_search_highlight_QueryTermExtractor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class Query;
        namespace highlight {
          class WeightedTerm;
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
      namespace search {
        namespace highlight {

          class QueryTermExtractor : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_getIdfWeightedTerms_90fb48ad,
              mid_getTerms_ec0cbfa8,
              mid_getTerms_6d5da3e1,
              mid_getTerms_ac3fa253,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryTermExtractor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            QueryTermExtractor(const QueryTermExtractor& obj) : ::java::lang::Object(obj) {}

            QueryTermExtractor();

            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getIdfWeightedTerms(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getTerms(const ::org::apache::lucene::search::Query &);
            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getTerms(const ::org::apache::lucene::search::Query &, jboolean);
            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getTerms(const ::org::apache::lucene::search::Query &, jboolean, const ::java::lang::String &);
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
        namespace highlight {
          extern PyTypeObject PY_TYPE(QueryTermExtractor);

          class t_QueryTermExtractor {
          public:
            PyObject_HEAD
            QueryTermExtractor object;
            static PyObject *wrap_Object(const QueryTermExtractor&);
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
