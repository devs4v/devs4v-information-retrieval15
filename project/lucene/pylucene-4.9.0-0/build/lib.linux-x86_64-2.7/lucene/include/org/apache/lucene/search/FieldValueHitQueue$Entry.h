#ifndef org_apache_lucene_search_FieldValueHitQueue$Entry_H
#define org_apache_lucene_search_FieldValueHitQueue$Entry_H

#include "org/apache/lucene/search/ScoreDoc.h"

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

        class FieldValueHitQueue$Entry : public ::org::apache::lucene::search::ScoreDoc {
        public:
          enum {
            mid_init$_a74e6883,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_slot,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldValueHitQueue$Entry(jobject obj) : ::org::apache::lucene::search::ScoreDoc(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldValueHitQueue$Entry(const FieldValueHitQueue$Entry& obj) : ::org::apache::lucene::search::ScoreDoc(obj) {}

          jint _get_slot() const;
          void _set_slot(jint) const;

          FieldValueHitQueue$Entry(jint, jint, jfloat);

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
        extern PyTypeObject PY_TYPE(FieldValueHitQueue$Entry);

        class t_FieldValueHitQueue$Entry {
        public:
          PyObject_HEAD
          FieldValueHitQueue$Entry object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldValueHitQueue$Entry *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldValueHitQueue$Entry&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldValueHitQueue$Entry&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
