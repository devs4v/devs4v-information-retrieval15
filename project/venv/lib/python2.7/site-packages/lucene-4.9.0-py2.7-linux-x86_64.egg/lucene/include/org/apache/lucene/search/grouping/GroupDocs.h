#ifndef org_apache_lucene_search_grouping_GroupDocs_H
#define org_apache_lucene_search_grouping_GroupDocs_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreDoc;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class GroupDocs : public ::java::lang::Object {
          public:
            enum {
              mid_init$_e4916722,
              max_mid
            };

            enum {
              fid_groupSortValues,
              fid_groupValue,
              fid_maxScore,
              fid_score,
              fid_scoreDocs,
              fid_totalHits,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupDocs(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            GroupDocs(const GroupDocs& obj) : ::java::lang::Object(obj) {}

            JArray< ::java::lang::Object > _get_groupSortValues() const;
            ::java::lang::Object _get_groupValue() const;
            jfloat _get_maxScore() const;
            jfloat _get_score() const;
            JArray< ::org::apache::lucene::search::ScoreDoc > _get_scoreDocs() const;
            jint _get_totalHits() const;

            GroupDocs(jfloat, jfloat, jint, const JArray< ::org::apache::lucene::search::ScoreDoc > &, const ::java::lang::Object &, const JArray< ::java::lang::Object > &);
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
        namespace grouping {
          extern PyTypeObject PY_TYPE(GroupDocs);

          class t_GroupDocs {
          public:
            PyObject_HEAD
            GroupDocs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GroupDocs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GroupDocs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GroupDocs&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
