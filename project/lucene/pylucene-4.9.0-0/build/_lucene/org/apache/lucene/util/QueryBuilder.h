#ifndef org_apache_lucene_util_QueryBuilder_H
#define org_apache_lucene_util_QueryBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanClause$Occur;
        class Query;
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
      namespace util {

        class QueryBuilder : public ::java::lang::Object {
        public:
          enum {
            mid_init$_31619410,
            mid_createBooleanQuery_38d6e77e,
            mid_createBooleanQuery_6523fcfc,
            mid_createMinShouldMatchQuery_45995161,
            mid_createPhraseQuery_38d6e77e,
            mid_createPhraseQuery_c7c8d9a8,
            mid_getAnalyzer_347f60a9,
            mid_getEnablePositionIncrements_54c6a16a,
            mid_setAnalyzer_31619410,
            mid_setEnablePositionIncrements_bb0c767f,
            mid_newTermQuery_c8bbbdc7,
            mid_newBooleanQuery_71c47e3e,
            mid_createFieldQuery_da240c4d,
            mid_newPhraseQuery_c05a65af,
            mid_newMultiPhraseQuery_4a09b2bb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          QueryBuilder(const QueryBuilder& obj) : ::java::lang::Object(obj) {}

          QueryBuilder(const ::org::apache::lucene::analysis::Analyzer &);

          ::org::apache::lucene::search::Query createBooleanQuery(const ::java::lang::String &, const ::java::lang::String &) const;
          ::org::apache::lucene::search::Query createBooleanQuery(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::search::BooleanClause$Occur &) const;
          ::org::apache::lucene::search::Query createMinShouldMatchQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat) const;
          ::org::apache::lucene::search::Query createPhraseQuery(const ::java::lang::String &, const ::java::lang::String &) const;
          ::org::apache::lucene::search::Query createPhraseQuery(const ::java::lang::String &, const ::java::lang::String &, jint) const;
          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          jboolean getEnablePositionIncrements() const;
          void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
          void setEnablePositionIncrements(jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(QueryBuilder);

        class t_QueryBuilder {
        public:
          PyObject_HEAD
          QueryBuilder object;
          static PyObject *wrap_Object(const QueryBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
