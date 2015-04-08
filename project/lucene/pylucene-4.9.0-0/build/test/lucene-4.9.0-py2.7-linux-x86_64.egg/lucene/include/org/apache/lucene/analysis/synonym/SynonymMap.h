#ifndef org_apache_lucene_analysis_synonym_SynonymMap_H
#define org_apache_lucene_analysis_synonym_SynonymMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefHash;
        class BytesRef;
        namespace fst {
          class FST;
        }
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
      namespace analysis {
        namespace synonym {

          class SynonymMap : public ::java::lang::Object {
          public:
            enum {
              mid_init$_4abf6d88,
              max_mid
            };

            enum {
              fid_fst,
              fid_maxHorizontalContext,
              fid_words,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SynonymMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SynonymMap(const SynonymMap& obj) : ::java::lang::Object(obj) {}

            static jchar WORD_SEPARATOR;

            ::org::apache::lucene::util::fst::FST _get_fst() const;
            jint _get_maxHorizontalContext() const;
            ::org::apache::lucene::util::BytesRefHash _get_words() const;

            SynonymMap(const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::BytesRefHash &, jint);
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
      namespace analysis {
        namespace synonym {
          extern PyTypeObject PY_TYPE(SynonymMap);

          class t_SynonymMap {
          public:
            PyObject_HEAD
            SynonymMap object;
            static PyObject *wrap_Object(const SynonymMap&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
