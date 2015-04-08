#ifndef org_apache_lucene_analysis_th_ThaiTokenizer_H
#define org_apache_lucene_analysis_th_ThaiTokenizer_H

#include "org/apache/lucene/analysis/util/SegmentingTokenizerBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace th {

          class ThaiTokenizer : public ::org::apache::lucene::analysis::util::SegmentingTokenizerBase {
          public:
            enum {
              mid_init$_cf2e3c10,
              mid_init$_5877b8f0,
              mid_setNextSentence_d8d154a6,
              mid_incrementWord_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ThaiTokenizer(jobject obj) : ::org::apache::lucene::analysis::util::SegmentingTokenizerBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ThaiTokenizer(const ThaiTokenizer& obj) : ::org::apache::lucene::analysis::util::SegmentingTokenizerBase(obj) {}

            static jboolean DBBI_AVAILABLE;

            ThaiTokenizer(const ::java::io::Reader &);
            ThaiTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &);
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
        namespace th {
          extern PyTypeObject PY_TYPE(ThaiTokenizer);

          class t_ThaiTokenizer {
          public:
            PyObject_HEAD
            ThaiTokenizer object;
            static PyObject *wrap_Object(const ThaiTokenizer&);
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
