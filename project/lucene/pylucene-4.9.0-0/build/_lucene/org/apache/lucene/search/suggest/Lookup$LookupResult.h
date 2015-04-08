#ifndef org_apache_lucene_search_suggest_Lookup$LookupResult_H
#define org_apache_lucene_search_suggest_Lookup$LookupResult_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Comparable;
    class CharSequence;
    class String;
    class Class;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class Lookup$LookupResult : public ::java::lang::Object {
          public:
            enum {
              mid_init$_03ea1383,
              mid_init$_f8b7fcb9,
              mid_init$_bb9697af,
              mid_init$_a19b2ec9,
              mid_init$_37f21f6f,
              mid_init$_f9089661,
              mid_compareTo_2615e59a,
              mid_toString_14c7b5c5,
              max_mid
            };

            enum {
              fid_contexts,
              fid_highlightKey,
              fid_key,
              fid_payload,
              fid_value,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lookup$LookupResult(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lookup$LookupResult(const Lookup$LookupResult& obj) : ::java::lang::Object(obj) {}

            ::java::util::Set _get_contexts() const;
            ::java::lang::Object _get_highlightKey() const;
            ::java::lang::CharSequence _get_key() const;
            ::org::apache::lucene::util::BytesRef _get_payload() const;
            jlong _get_value() const;

            Lookup$LookupResult(const ::java::lang::CharSequence &, jlong);
            Lookup$LookupResult(const ::java::lang::CharSequence &, jlong, const ::java::util::Set &);
            Lookup$LookupResult(const ::java::lang::CharSequence &, jlong, const ::org::apache::lucene::util::BytesRef &);
            Lookup$LookupResult(const ::java::lang::CharSequence &, jlong, const ::org::apache::lucene::util::BytesRef &, const ::java::util::Set &);
            Lookup$LookupResult(const ::java::lang::CharSequence &, const ::java::lang::Object &, jlong, const ::org::apache::lucene::util::BytesRef &);
            Lookup$LookupResult(const ::java::lang::CharSequence &, const ::java::lang::Object &, jlong, const ::org::apache::lucene::util::BytesRef &, const ::java::util::Set &);

            jint compareTo(const Lookup$LookupResult &) const;
            ::java::lang::String toString() const;
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
          extern PyTypeObject PY_TYPE(Lookup$LookupResult);

          class t_Lookup$LookupResult {
          public:
            PyObject_HEAD
            Lookup$LookupResult object;
            static PyObject *wrap_Object(const Lookup$LookupResult&);
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
