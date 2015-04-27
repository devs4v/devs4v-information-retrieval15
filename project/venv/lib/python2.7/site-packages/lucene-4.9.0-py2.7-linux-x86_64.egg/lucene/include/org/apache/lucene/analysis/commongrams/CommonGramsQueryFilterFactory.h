#ifndef org_apache_lucene_analysis_commongrams_CommonGramsQueryFilterFactory_H
#define org_apache_lucene_analysis_commongrams_CommonGramsQueryFilterFactory_H

#include "org/apache/lucene/analysis/commongrams/CommonGramsFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class TokenFilter;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace commongrams {

          class CommonGramsQueryFilterFactory : public ::org::apache::lucene::analysis::commongrams::CommonGramsFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_2969f76d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CommonGramsQueryFilterFactory(jobject obj) : ::org::apache::lucene::analysis::commongrams::CommonGramsFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CommonGramsQueryFilterFactory(const CommonGramsQueryFilterFactory& obj) : ::org::apache::lucene::analysis::commongrams::CommonGramsFilterFactory(obj) {}

            CommonGramsQueryFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace commongrams {
          extern PyTypeObject PY_TYPE(CommonGramsQueryFilterFactory);

          class t_CommonGramsQueryFilterFactory {
          public:
            PyObject_HEAD
            CommonGramsQueryFilterFactory object;
            static PyObject *wrap_Object(const CommonGramsQueryFilterFactory&);
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
