#ifndef org_apache_lucene_search_ScoreDoc_H
#define org_apache_lucene_search_ScoreDoc_H

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

        class ScoreDoc : public ::java::lang::Object {
        public:
          enum {
            mid_init$_abdf2c51,
            mid_init$_776c6331,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_doc,
            fid_score,
            fid_shardIndex,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ScoreDoc(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ScoreDoc(const ScoreDoc& obj) : ::java::lang::Object(obj) {}

          jint _get_doc() const;
          void _set_doc(jint) const;
          jfloat _get_score() const;
          void _set_score(jfloat) const;
          jint _get_shardIndex() const;
          void _set_shardIndex(jint) const;

          ScoreDoc(jint, jfloat);
          ScoreDoc(jint, jfloat, jint);

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
        extern PyTypeObject PY_TYPE(ScoreDoc);

        class t_ScoreDoc {
        public:
          PyObject_HEAD
          ScoreDoc object;
          static PyObject *wrap_Object(const ScoreDoc&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
