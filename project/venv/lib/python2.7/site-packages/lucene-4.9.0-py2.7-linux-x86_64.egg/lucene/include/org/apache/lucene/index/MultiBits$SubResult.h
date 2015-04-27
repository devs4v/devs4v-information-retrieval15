#ifndef org_apache_lucene_index_MultiBits$SubResult_H
#define org_apache_lucene_index_MultiBits$SubResult_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
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
      namespace index {

        class MultiBits$SubResult : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            max_mid
          };

          enum {
            fid_matches,
            fid_result,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiBits$SubResult(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiBits$SubResult(const MultiBits$SubResult& obj) : ::java::lang::Object(obj) {}

          jboolean _get_matches() const;
          void _set_matches(jboolean) const;
          ::org::apache::lucene::util::Bits _get_result() const;
          void _set_result(const ::org::apache::lucene::util::Bits &) const;

          MultiBits$SubResult();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(MultiBits$SubResult);

        class t_MultiBits$SubResult {
        public:
          PyObject_HEAD
          MultiBits$SubResult object;
          static PyObject *wrap_Object(const MultiBits$SubResult&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
