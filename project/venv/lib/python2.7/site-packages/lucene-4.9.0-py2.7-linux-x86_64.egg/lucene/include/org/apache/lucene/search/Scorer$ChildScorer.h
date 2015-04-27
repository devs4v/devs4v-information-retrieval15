#ifndef org_apache_lucene_search_Scorer$ChildScorer_H
#define org_apache_lucene_search_Scorer$ChildScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer;
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

        class Scorer$ChildScorer : public ::java::lang::Object {
        public:
          enum {
            mid_init$_9c8e8bbe,
            max_mid
          };

          enum {
            fid_child,
            fid_relationship,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Scorer$ChildScorer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Scorer$ChildScorer(const Scorer$ChildScorer& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::Scorer _get_child() const;
          ::java::lang::String _get_relationship() const;

          Scorer$ChildScorer(const ::org::apache::lucene::search::Scorer &, const ::java::lang::String &);
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
        extern PyTypeObject PY_TYPE(Scorer$ChildScorer);

        class t_Scorer$ChildScorer {
        public:
          PyObject_HEAD
          Scorer$ChildScorer object;
          static PyObject *wrap_Object(const Scorer$ChildScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
