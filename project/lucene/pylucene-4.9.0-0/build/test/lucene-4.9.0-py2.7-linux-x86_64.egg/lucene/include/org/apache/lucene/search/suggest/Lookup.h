#ifndef org_apache_lucene_search_suggest_Lookup_H
#define org_apache_lucene_search_suggest_Lookup_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace search {
        namespace suggest {
          class Lookup$LookupResult;
          class InputIterator;
        }
        namespace spell {
          class Dictionary;
        }
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
    class Comparator;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace io {
    class OutputStream;
    class IOException;
    class InputStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class Lookup : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_build_1754a234,
              mid_build_a0504881,
              mid_getCount_54c6a17a,
              mid_load_f5d6a55d,
              mid_load_be2e4f9c,
              mid_lookup_8aa7b45d,
              mid_lookup_dd3e9f51,
              mid_store_27875f5b,
              mid_store_82d865f4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lookup(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lookup(const Lookup& obj) : ::java::lang::Object(obj) {}

            static ::java::util::Comparator *CHARSEQUENCE_COMPARATOR;

            Lookup();

            void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
            void build(const ::org::apache::lucene::search::spell::Dictionary &) const;
            jlong getCount() const;
            jboolean load(const ::org::apache::lucene::store::DataInput &) const;
            jboolean load(const ::java::io::InputStream &) const;
            ::java::util::List lookup(const ::java::lang::CharSequence &, jboolean, jint) const;
            ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
            jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
            jboolean store(const ::java::io::OutputStream &) const;
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
      namespace search {
        namespace suggest {
          extern PyTypeObject PY_TYPE(Lookup);

          class t_Lookup {
          public:
            PyObject_HEAD
            Lookup object;
            static PyObject *wrap_Object(const Lookup&);
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
