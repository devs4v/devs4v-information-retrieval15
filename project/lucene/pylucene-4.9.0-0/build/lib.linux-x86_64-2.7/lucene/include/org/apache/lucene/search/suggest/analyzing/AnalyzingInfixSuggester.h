#ifndef org_apache_lucene_search_suggest_analyzing_AnalyzingInfixSuggester_H
#define org_apache_lucene_search_suggest_analyzing_AnalyzingInfixSuggester_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
        class BytesRef;
      }
      namespace search {
        namespace suggest {
          class Lookup$LookupResult;
          class InputIterator;
        }
      }
      namespace analysis {
        class Analyzer;
      }
      namespace store {
        class Directory;
        class DataInput;
        class DataOutput;
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
    class Class;
    class CharSequence;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {

            class AnalyzingInfixSuggester : public ::org::apache::lucene::search::suggest::Lookup {
            public:
              enum {
                mid_init$_b2fef229,
                mid_init$_3b9404b5,
                mid_add_2d27343d,
                mid_build_1754a234,
                mid_close_54c6a166,
                mid_getCount_54c6a17a,
                mid_load_f5d6a55d,
                mid_lookup_dd3e9f51,
                mid_lookup_3273017a,
                mid_lookup_bb92c162,
                mid_ramBytesUsed_54c6a17a,
                mid_refresh_54c6a166,
                mid_store_27875f5b,
                mid_update_2d27343d,
                mid_getDirectory_c34cda9e,
                mid_getTextFieldType_a2615189,
                mid_createResults_dfa2a05f,
                mid_highlight_6b3f1693,
                mid_getIndexWriterConfig_04dea876,
                mid_getLastTokenQuery_fbed2634,
                mid_finishQuery_4a287f5d,
                mid_addNonMatch_2e1c61a6,
                mid_addWholeMatch_55a79f28,
                mid_addPrefixMatch_539c241a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AnalyzingInfixSuggester(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              AnalyzingInfixSuggester(const AnalyzingInfixSuggester& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              static jint DEFAULT_MIN_PREFIX_CHARS;

              AnalyzingInfixSuggester(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &);
              AnalyzingInfixSuggester(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint);

              void add(const ::org::apache::lucene::util::BytesRef &, const ::java::util::Set &, jlong, const ::org::apache::lucene::util::BytesRef &) const;
              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              void close() const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jint, jboolean, jboolean) const;
              jlong ramBytesUsed() const;
              void refresh() const;
              jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
              void update(const ::org::apache::lucene::util::BytesRef &, const ::java::util::Set &, jlong, const ::org::apache::lucene::util::BytesRef &) const;
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
            extern PyTypeObject PY_TYPE(AnalyzingInfixSuggester);

            class t_AnalyzingInfixSuggester {
            public:
              PyObject_HEAD
              AnalyzingInfixSuggester object;
              static PyObject *wrap_Object(const AnalyzingInfixSuggester&);
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
