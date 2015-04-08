#ifndef org_apache_lucene_search_FieldDoc_H
#define org_apache_lucene_search_FieldDoc_H

#include "org/apache/lucene/search/ScoreDoc.h"

namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldDoc : public ::org::apache::lucene::search::ScoreDoc {
        public:
          enum {
            mid_init$_abdf2c51,
            mid_init$_8f5d1bf7,
            mid_init$_87a6361f,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_fields,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldDoc(jobject obj) : ::org::apache::lucene::search::ScoreDoc(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldDoc(const FieldDoc& obj) : ::org::apache::lucene::search::ScoreDoc(obj) {}

          JArray< ::java::lang::Object > _get_fields() const;
          void _set_fields(const JArray< ::java::lang::Object > &) const;

          FieldDoc(jint, jfloat);
          FieldDoc(jint, jfloat, const JArray< ::java::lang::Object > &);
          FieldDoc(jint, jfloat, const JArray< ::java::lang::Object > &, jint);

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
        extern PyTypeObject PY_TYPE(FieldDoc);

        class t_FieldDoc {
        public:
          PyObject_HEAD
          FieldDoc object;
          static PyObject *wrap_Object(const FieldDoc&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
