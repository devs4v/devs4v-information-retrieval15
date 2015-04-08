#ifndef org_apache_lucene_search_suggest_fst_FSTCompletion$Completion_H
#define org_apache_lucene_search_suggest_fst_FSTCompletion$Completion_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Comparable;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {

            class FSTCompletion$Completion : public ::java::lang::Object {
            public:
              enum {
                mid_compareTo_2db77dab,
                mid_toString_14c7b5c5,
                max_mid
              };

              enum {
                fid_bucket,
                fid_utf8,
                max_fid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static jfieldID *fids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FSTCompletion$Completion(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FSTCompletion$Completion(const FSTCompletion$Completion& obj) : ::java::lang::Object(obj) {}

              jint _get_bucket() const;
              ::org::apache::lucene::util::BytesRef _get_utf8() const;

              jint compareTo(const FSTCompletion$Completion &) const;
              ::java::lang::String toString() const;
            };
          }
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
        namespace suggest {
          namespace fst {
            extern PyTypeObject PY_TYPE(FSTCompletion$Completion);

            class t_FSTCompletion$Completion {
            public:
              PyObject_HEAD
              FSTCompletion$Completion object;
              static PyObject *wrap_Object(const FSTCompletion$Completion&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
