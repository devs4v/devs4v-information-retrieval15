#ifndef org_apache_lucene_search_Sort_H
#define org_apache_lucene_search_Sort_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class SortField;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Sort : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_4176baab,
            mid_init$_3578f7bf,
            mid_equals_290588e2,
            mid_getSort_4fd90036,
            mid_hashCode_54c6a179,
            mid_needsScores_54c6a16a,
            mid_rewrite_11e86a55,
            mid_setSort_3578f7bf,
            mid_setSort_4176baab,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Sort(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Sort(const Sort& obj) : ::java::lang::Object(obj) {}

          static Sort *INDEXORDER;
          static Sort *RELEVANCE;

          Sort();
          Sort(const JArray< ::org::apache::lucene::search::SortField > &);
          Sort(const ::org::apache::lucene::search::SortField &);

          jboolean equals(const ::java::lang::Object &) const;
          JArray< ::org::apache::lucene::search::SortField > getSort() const;
          jint hashCode() const;
          jboolean needsScores() const;
          Sort rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          void setSort(const ::org::apache::lucene::search::SortField &) const;
          void setSort(const JArray< ::org::apache::lucene::search::SortField > &) const;
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(Sort);

        class t_Sort {
        public:
          PyObject_HEAD
          Sort object;
          static PyObject *wrap_Object(const Sort&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
