#ifndef org_apache_lucene_search_CollectionStatistics_H
#define org_apache_lucene_search_CollectionStatistics_H

#include "java/lang/Object.h"

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

        class CollectionStatistics : public ::java::lang::Object {
        public:
          enum {
            mid_init$_2d72e40c,
            mid_docCount_54c6a17a,
            mid_field_14c7b5c5,
            mid_maxDoc_54c6a17a,
            mid_sumDocFreq_54c6a17a,
            mid_sumTotalTermFreq_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollectionStatistics(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CollectionStatistics(const CollectionStatistics& obj) : ::java::lang::Object(obj) {}

          CollectionStatistics(const ::java::lang::String &, jlong, jlong, jlong, jlong);

          jlong docCount() const;
          ::java::lang::String field() const;
          jlong maxDoc() const;
          jlong sumDocFreq() const;
          jlong sumTotalTermFreq() const;
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
        extern PyTypeObject PY_TYPE(CollectionStatistics);

        class t_CollectionStatistics {
        public:
          PyObject_HEAD
          CollectionStatistics object;
          static PyObject *wrap_Object(const CollectionStatistics&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
