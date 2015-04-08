#ifndef org_apache_lucene_search_NGramPhraseQuery_H
#define org_apache_lucene_search_NGramPhraseQuery_H

#include "org/apache/lucene/search/PhraseQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class Query;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
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

        class NGramPhraseQuery : public ::org::apache::lucene::search::PhraseQuery {
        public:
          enum {
            mid_init$_39c7bd3c,
            mid_equals_290588e2,
            mid_hashCode_54c6a179,
            mid_rewrite_7edcaa43,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NGramPhraseQuery(jobject obj) : ::org::apache::lucene::search::PhraseQuery(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NGramPhraseQuery(const NGramPhraseQuery& obj) : ::org::apache::lucene::search::PhraseQuery(obj) {}

          NGramPhraseQuery(jint);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(NGramPhraseQuery);

        class t_NGramPhraseQuery {
        public:
          PyObject_HEAD
          NGramPhraseQuery object;
          static PyObject *wrap_Object(const NGramPhraseQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
