#ifndef org_apache_lucene_analysis_synonym_SynonymMap$Builder_H
#define org_apache_lucene_analysis_synonym_SynonymMap$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class CharsRef;
      }
      namespace analysis {
        namespace synonym {
          class SynonymMap;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
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
      namespace analysis {
        namespace synonym {

          class SynonymMap$Builder : public ::java::lang::Object {
          public:
            enum {
              mid_init$_bb0c767f,
              mid_add_2c2b250f,
              mid_build_6def3d42,
              mid_join_215e6a35,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SynonymMap$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SynonymMap$Builder(const SynonymMap$Builder& obj) : ::java::lang::Object(obj) {}

            SynonymMap$Builder(jboolean);

            void add(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &, jboolean) const;
            ::org::apache::lucene::analysis::synonym::SynonymMap build() const;
            static ::org::apache::lucene::util::CharsRef join(const JArray< ::java::lang::String > &, const ::org::apache::lucene::util::CharsRef &);
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
          extern PyTypeObject PY_TYPE(SynonymMap$Builder);

          class t_SynonymMap$Builder {
          public:
            PyObject_HEAD
            SynonymMap$Builder object;
            static PyObject *wrap_Object(const SynonymMap$Builder&);
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
