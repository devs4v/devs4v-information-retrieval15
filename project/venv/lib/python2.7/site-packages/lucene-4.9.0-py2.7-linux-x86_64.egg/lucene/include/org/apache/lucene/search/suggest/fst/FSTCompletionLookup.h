#ifndef org_apache_lucene_search_suggest_fst_FSTCompletionLookup_H
#define org_apache_lucene_search_suggest_fst_FSTCompletionLookup_H

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
          namespace fst {
            class FSTCompletion;
          }
          class InputIterator;
        }
      }
      namespace store {
        class DataOutput;
        class DataInput;
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
          namespace fst {

            class FSTCompletionLookup : public ::org::apache::lucene::search::suggest::Lookup {
            public:
              enum {
                mid_init$_54c6a166,
                mid_init$_7fee6a80,
                mid_init$_b3a85a05,
                mid_build_1754a234,
                mid_get_a739ccff,
                mid_getCount_54c6a17a,
                mid_load_f5d6a55d,
                mid_lookup_dd3e9f51,
                mid_ramBytesUsed_54c6a17a,
                mid_store_27875f5b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FSTCompletionLookup(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FSTCompletionLookup(const FSTCompletionLookup& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              FSTCompletionLookup();
              FSTCompletionLookup(const ::org::apache::lucene::search::suggest::fst::FSTCompletion &, jboolean);
              FSTCompletionLookup(jint, jboolean);

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
          namespace fst {
            extern PyTypeObject PY_TYPE(FSTCompletionLookup);

            class t_FSTCompletionLookup {
            public:
              PyObject_HEAD
              FSTCompletionLookup object;
              static PyObject *wrap_Object(const FSTCompletionLookup&);
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
