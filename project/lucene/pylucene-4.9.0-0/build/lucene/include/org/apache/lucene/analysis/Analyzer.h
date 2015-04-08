#ifndef org_apache_lucene_analysis_Analyzer_H
#define org_apache_lucene_analysis_Analyzer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer$ReuseStrategy;
        class TokenStream;
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
    class Closeable;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class Analyzer : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_9d052de7,
            mid_close_54c6a166,
            mid_getOffsetGap_5fdc3f57,
            mid_getPositionIncrementGap_5fdc3f57,
            mid_getReuseStrategy_723277fa,
            mid_tokenStream_b2e3f2ad,
            mid_tokenStream_f8551151,
            mid_createComponents_1be39cae,
            mid_initReader_d8fb1c81,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Analyzer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Analyzer(const Analyzer& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::analysis::Analyzer$ReuseStrategy *GLOBAL_REUSE_STRATEGY;
          static ::org::apache::lucene::analysis::Analyzer$ReuseStrategy *PER_FIELD_REUSE_STRATEGY;

          Analyzer();
          Analyzer(const ::org::apache::lucene::analysis::Analyzer$ReuseStrategy &);

          void close() const;
          jint getOffsetGap(const ::java::lang::String &) const;
          jint getPositionIncrementGap(const ::java::lang::String &) const;
          ::org::apache::lucene::analysis::Analyzer$ReuseStrategy getReuseStrategy() const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::java::lang::String &, const ::java::lang::String &) const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::java::lang::String &, const ::java::io::Reader &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyTypeObject PY_TYPE(Analyzer);

        class t_Analyzer {
        public:
          PyObject_HEAD
          Analyzer object;
          static PyObject *wrap_Object(const Analyzer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
