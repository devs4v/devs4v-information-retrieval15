#ifndef org_apache_lucene_analysis_compound_hyphenation_Hyphen_H
#define org_apache_lucene_analysis_compound_hyphenation_Hyphen_H

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
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class Hyphen : public ::java::lang::Object {
            public:
              enum {
                mid_toString_14c7b5c5,
                max_mid
              };

              enum {
                fid_noBreak,
                fid_postBreak,
                fid_preBreak,
                max_fid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static jfieldID *fids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Hyphen(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              Hyphen(const Hyphen& obj) : ::java::lang::Object(obj) {}

              ::java::lang::String _get_noBreak() const;
              void _set_noBreak(const ::java::lang::String &) const;
              ::java::lang::String _get_postBreak() const;
              void _set_postBreak(const ::java::lang::String &) const;
              ::java::lang::String _get_preBreak() const;
              void _set_preBreak(const ::java::lang::String &) const;

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
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            extern PyTypeObject PY_TYPE(Hyphen);

            class t_Hyphen {
            public:
              PyObject_HEAD
              Hyphen object;
              static PyObject *wrap_Object(const Hyphen&);
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
