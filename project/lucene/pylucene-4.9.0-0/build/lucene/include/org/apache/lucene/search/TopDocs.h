#ifndef org_apache_lucene_search_TopDocs_H
#define org_apache_lucene_search_TopDocs_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
        class ScoreDoc;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TopDocs : public ::java::lang::Object {
        public:
          enum {
            mid_init$_63c9a885,
            mid_getMaxScore_54c6a176,
            mid_merge_732b94b7,
            mid_merge_15bf4771,
            mid_setMaxScore_06298cab,
            max_mid
          };

          enum {
            fid_scoreDocs,
            fid_totalHits,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopDocs(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TopDocs(const TopDocs& obj) : ::java::lang::Object(obj) {}

          JArray< ::org::apache::lucene::search::ScoreDoc > _get_scoreDocs() const;
          void _set_scoreDocs(const JArray< ::org::apache::lucene::search::ScoreDoc > &) const;
          jint _get_totalHits() const;
          void _set_totalHits(jint) const;

          TopDocs(jint, const JArray< ::org::apache::lucene::search::ScoreDoc > &, jfloat);

          jfloat getMaxScore() const;
          static TopDocs merge(const ::org::apache::lucene::search::Sort &, jint, const JArray< TopDocs > &);
          static TopDocs merge(const ::org::apache::lucene::search::Sort &, jint, jint, const JArray< TopDocs > &);
          void setMaxScore(jfloat) const;
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
        extern PyTypeObject PY_TYPE(TopDocs);

        class t_TopDocs {
        public:
          PyObject_HEAD
          TopDocs object;
          static PyObject *wrap_Object(const TopDocs&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
