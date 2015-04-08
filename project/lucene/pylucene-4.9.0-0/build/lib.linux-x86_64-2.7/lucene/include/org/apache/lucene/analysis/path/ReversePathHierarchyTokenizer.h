#ifndef org_apache_lucene_analysis_path_ReversePathHierarchyTokenizer_H
#define org_apache_lucene_analysis_path_ReversePathHierarchyTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

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
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace path {

          class ReversePathHierarchyTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
          public:
            enum {
              mid_init$_cf2e3c10,
              mid_init$_8c604f56,
              mid_init$_e27d22ca,
              mid_init$_944d83a2,
              mid_init$_94478bac,
              mid_init$_94f21e72,
              mid_init$_132ff91e,
              mid_init$_df655116,
              mid_init$_5df3b604,
              mid_init$_0b338d38,
              mid_end_54c6a166,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ReversePathHierarchyTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ReversePathHierarchyTokenizer(const ReversePathHierarchyTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jchar DEFAULT_DELIMITER;
            static jint DEFAULT_SKIP;

            ReversePathHierarchyTokenizer(const ::java::io::Reader &);
            ReversePathHierarchyTokenizer(const ::java::io::Reader &, jint);
            ReversePathHierarchyTokenizer(const ::java::io::Reader &, jchar, jint);
            ReversePathHierarchyTokenizer(const ::java::io::Reader &, jint, jchar);
            ReversePathHierarchyTokenizer(const ::java::io::Reader &, jchar, jchar);
            ReversePathHierarchyTokenizer(const ::java::io::Reader &, jchar, jchar, jint);
            ReversePathHierarchyTokenizer(const ::java::io::Reader &, jint, jchar, jchar);
            ReversePathHierarchyTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &, jchar, jchar, jint);
            ReversePathHierarchyTokenizer(const ::java::io::Reader &, jint, jchar, jchar, jint);
            ReversePathHierarchyTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &, jint, jchar, jchar, jint);

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
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
        namespace path {
          extern PyTypeObject PY_TYPE(ReversePathHierarchyTokenizer);

          class t_ReversePathHierarchyTokenizer {
          public:
            PyObject_HEAD
            ReversePathHierarchyTokenizer object;
            static PyObject *wrap_Object(const ReversePathHierarchyTokenizer&);
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
