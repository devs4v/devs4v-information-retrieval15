#ifndef org_apache_lucene_analysis_pattern_PatternReplaceCharFilter_H
#define org_apache_lucene_analysis_pattern_PatternReplaceCharFilter_H

#include "org/apache/lucene/analysis/charfilter/BaseCharFilter.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {

          class PatternReplaceCharFilter : public ::org::apache::lucene::analysis::charfilter::BaseCharFilter {
          public:
            enum {
              mid_init$_e0e77162,
              mid_init$_ee751df6,
              mid_read_54c6a179,
              mid_read_6f0bb349,
              mid_correct_39c7bd23,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternReplaceCharFilter(jobject obj) : ::org::apache::lucene::analysis::charfilter::BaseCharFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PatternReplaceCharFilter(const PatternReplaceCharFilter& obj) : ::org::apache::lucene::analysis::charfilter::BaseCharFilter(obj) {}

            static jint DEFAULT_MAX_BLOCK_CHARS;

            PatternReplaceCharFilter(const ::java::util::regex::Pattern &, const ::java::lang::String &, const ::java::io::Reader &);
            PatternReplaceCharFilter(const ::java::util::regex::Pattern &, const ::java::lang::String &, jint, const ::java::lang::String &, const ::java::io::Reader &);

            jint read() const;
            jint read(const JArray< jchar > &, jint, jint) const;
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
        namespace pattern {
          extern PyTypeObject PY_TYPE(PatternReplaceCharFilter);

          class t_PatternReplaceCharFilter {
          public:
            PyObject_HEAD
            PatternReplaceCharFilter object;
            static PyObject *wrap_Object(const PatternReplaceCharFilter&);
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
