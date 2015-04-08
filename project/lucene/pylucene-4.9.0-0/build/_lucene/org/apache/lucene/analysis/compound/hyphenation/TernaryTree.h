#ifndef org_apache_lucene_analysis_compound_hyphenation_TernaryTree_H
#define org_apache_lucene_analysis_compound_hyphenation_TernaryTree_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Cloneable;
    class Class;
  }
  namespace util {
    class Enumeration;
  }
  namespace io {
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

            class TernaryTree : public ::java::lang::Object {
            public:
              enum {
                mid_balance_54c6a166,
                mid_clone_30bcff98,
                mid_find_5fdc3f57,
                mid_find_ec6430eb,
                mid_insert_7420ac50,
                mid_insert_6d377140,
                mid_keys_39f88070,
                mid_knows_5fdc3f44,
                mid_printStats_1b7c898b,
                mid_size_54c6a179,
                mid_strcmp_979cf09d,
                mid_strcmp_aa5dc2ed,
                mid_strcpy_aa5dc2f2,
                mid_strlen_700e23c9,
                mid_strlen_ec6430eb,
                mid_trimToSize_54c6a166,
                mid_init_54c6a166,
                mid_insertBalanced_7e9fa7a8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TernaryTree(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TernaryTree(const TernaryTree& obj) : ::java::lang::Object(obj) {}

              void balance() const;
              TernaryTree clone() const;
              jint find(const ::java::lang::String &) const;
              jint find(const JArray< jchar > &, jint) const;
              void insert(const ::java::lang::String &, jchar) const;
              void insert(const JArray< jchar > &, jint, jchar) const;
              ::java::util::Enumeration keys() const;
              jboolean knows(const ::java::lang::String &) const;
              void printStats(const ::java::io::PrintStream &) const;
              jint size() const;
              static jint strcmp(const ::java::lang::String &, const JArray< jchar > &, jint);
              static jint strcmp(const JArray< jchar > &, jint, const JArray< jchar > &, jint);
              static void strcpy(const JArray< jchar > &, jint, const JArray< jchar > &, jint);
              static jint strlen(const JArray< jchar > &);
              static jint strlen(const JArray< jchar > &, jint);
              void trimToSize() const;
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
            extern PyTypeObject PY_TYPE(TernaryTree);

            class t_TernaryTree {
            public:
              PyObject_HEAD
              TernaryTree object;
              static PyObject *wrap_Object(const TernaryTree&);
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
