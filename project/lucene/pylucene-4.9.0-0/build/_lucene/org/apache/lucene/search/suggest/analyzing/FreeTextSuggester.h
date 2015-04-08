#ifndef org_apache_lucene_search_suggest_analyzing_FreeTextSuggester_H
#define org_apache_lucene_search_suggest_analyzing_FreeTextSuggester_H

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
      namespace analysis {
        class Analyzer;
      }
      namespace store {
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
    class CharSequence;
    class Object;
    class String;
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
      namespace search {
        namespace suggest {
          namespace analyzing {

            class FreeTextSuggester : public ::org::apache::lucene::search::suggest::Lookup {
            public:
              enum {
                mid_init$_31619410,
                mid_init$_6a3c5772,
                mid_init$_9c9ed338,
                mid_init$_942dba41,
                mid_build_1754a234,
                mid_build_a548a403,
                mid_get_a739ccff,
                mid_getCount_54c6a17a,
                mid_load_f5d6a55d,
                mid_lookup_560b361c,
                mid_lookup_afd51678,
                mid_lookup_8aa7b45d,
                mid_lookup_dd3e9f51,
                mid_ramBytesUsed_54c6a17a,
                mid_store_27875f5b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FreeTextSuggester(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FreeTextSuggester(const FreeTextSuggester& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              static jdouble ALPHA;
              static ::java::lang::String *CODEC_NAME;
              static jint DEFAULT_GRAMS;
              static jbyte DEFAULT_SEPARATOR;
              static jint VERSION_CURRENT;
              static jint VERSION_START;

              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &);
              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &);
              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint);
              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jbyte);

              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              void build(const ::org::apache::lucene::search::suggest::InputIterator &, jdouble) const;
              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jboolean, jint) const;
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
            extern PyTypeObject PY_TYPE(FreeTextSuggester);

            class t_FreeTextSuggester {
            public:
              PyObject_HEAD
              FreeTextSuggester object;
              static PyObject *wrap_Object(const FreeTextSuggester&);
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
