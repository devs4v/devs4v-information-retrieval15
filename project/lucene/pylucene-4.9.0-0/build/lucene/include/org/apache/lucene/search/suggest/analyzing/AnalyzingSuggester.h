#ifndef org_apache_lucene_search_suggest_analyzing_AnalyzingSuggester_H
#define org_apache_lucene_search_suggest_analyzing_AnalyzingSuggester_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        namespace suggest {
          class Lookup$LookupResult;
          class InputIterator;
        }
      }
      namespace store {
        class DataOutput;
        class DataInput;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
    class List;
  }
  namespace lang {
    class Object;
    class Class;
    class CharSequence;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {

            class AnalyzingSuggester : public ::org::apache::lucene::search::suggest::Lookup {
            public:
              enum {
                mid_init$_31619410,
                mid_init$_6a3c5772,
                mid_init$_9a7c82f9,
                mid_build_1754a234,
                mid_get_a739ccff,
                mid_getCount_54c6a17a,
                mid_load_f5d6a55d,
                mid_lookup_dd3e9f51,
                mid_ramBytesUsed_54c6a17a,
                mid_store_27875f5b,
                mid_convertAutomaton_7aca8e1f,
                mid_getFullPrefixPaths_a9ea3855,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AnalyzingSuggester(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              AnalyzingSuggester(const AnalyzingSuggester& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              static jint EXACT_FIRST;
              static jint PRESERVE_SEP;

              AnalyzingSuggester(const ::org::apache::lucene::analysis::Analyzer &);
              AnalyzingSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &);
              AnalyzingSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jint, jint, jboolean);

              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              jlong ramBytesUsed() const;
              jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
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
      namespace search {
        namespace suggest {
          namespace analyzing {
            extern PyTypeObject PY_TYPE(AnalyzingSuggester);

            class t_AnalyzingSuggester {
            public:
              PyObject_HEAD
              AnalyzingSuggester object;
              static PyObject *wrap_Object(const AnalyzingSuggester&);
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
