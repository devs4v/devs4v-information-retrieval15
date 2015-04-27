#ifndef org_apache_lucene_queries_CustomScoreProvider_H
#define org_apache_lucene_queries_CustomScoreProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class Explanation;
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
      namespace queries {

        class CustomScoreProvider : public ::java::lang::Object {
        public:
          enum {
            mid_init$_a6f59947,
            mid_customExplain_3236f395,
            mid_customExplain_bec3370d,
            mid_customScore_f55b9306,
            mid_customScore_c9ca8e84,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CustomScoreProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CustomScoreProvider(const CustomScoreProvider& obj) : ::java::lang::Object(obj) {}

          CustomScoreProvider(const ::org::apache::lucene::index::AtomicReaderContext &);

          ::org::apache::lucene::search::Explanation customExplain(jint, const ::org::apache::lucene::search::Explanation &, const ::org::apache::lucene::search::Explanation &) const;
          ::org::apache::lucene::search::Explanation customExplain(jint, const ::org::apache::lucene::search::Explanation &, const JArray< ::org::apache::lucene::search::Explanation > &) const;
          jfloat customScore(jint, jfloat, jfloat) const;
          jfloat customScore(jint, jfloat, const JArray< jfloat > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        extern PyTypeObject PY_TYPE(CustomScoreProvider);

        class t_CustomScoreProvider {
        public:
          PyObject_HEAD
          CustomScoreProvider object;
          static PyObject *wrap_Object(const CustomScoreProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
