#ifndef org_apache_lucene_analysis_compound_hyphenation_HyphenationTree_H
#define org_apache_lucene_analysis_compound_hyphenation_HyphenationTree_H

#include "org/apache/lucene/analysis/compound/hyphenation/TernaryTree.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class Hyphenation;
            class PatternConsumer;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
  namespace util {
    class ArrayList;
  }
  namespace io {
    class IOException;
    class File;
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class HyphenationTree : public ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree {
            public:
              enum {
                mid_init$_54c6a166,
                mid_addClass_5fdc3f48,
                mid_addException_069f7243,
                mid_addPattern_4a264742,
                mid_findPattern_97a5258f,
                mid_hyphenate_b8db7bec,
                mid_hyphenate_bc347fb6,
                mid_loadPatterns_c3dacf57,
                mid_printStats_1b7c898b,
                mid_getValues_b4292e98,
                mid_packValues_5fdc3f57,
                mid_unpackValues_141401b3,
                mid_hstrcmp_aa5dc2ed,
                mid_searchPatterns_fa7f9f9d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit HyphenationTree(jobject obj) : ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              HyphenationTree(const HyphenationTree& obj) : ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree(obj) {}

              HyphenationTree();

              void addClass(const ::java::lang::String &) const;
              void addException(const ::java::lang::String &, const ::java::util::ArrayList &) const;
              void addPattern(const ::java::lang::String &, const ::java::lang::String &) const;
              ::java::lang::String findPattern(const ::java::lang::String &) const;
              ::org::apache::lucene::analysis::compound::hyphenation::Hyphenation hyphenate(const ::java::lang::String &, jint, jint) const;
              ::org::apache::lucene::analysis::compound::hyphenation::Hyphenation hyphenate(const JArray< jchar > &, jint, jint, jint, jint) const;
              void loadPatterns(const ::java::io::File &) const;
              void printStats(const ::java::io::PrintStream &) const;
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
            extern PyTypeObject PY_TYPE(HyphenationTree);

            class t_HyphenationTree {
            public:
              PyObject_HEAD
              HyphenationTree object;
              static PyObject *wrap_Object(const HyphenationTree&);
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
