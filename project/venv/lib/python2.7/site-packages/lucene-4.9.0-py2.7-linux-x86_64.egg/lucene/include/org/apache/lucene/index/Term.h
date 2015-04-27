#ifndef org_apache_lucene_index_Term_H
#define org_apache_lucene_index_Term_H

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
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class Term : public ::java::lang::Object {
        public:
          enum {
            mid_init$_5fdc3f48,
            mid_init$_4a264742,
            mid_init$_43cce44e,
            mid_bytes_4ae19461,
            mid_compareTo_7eca6a9e,
            mid_equals_290588e2,
            mid_field_14c7b5c5,
            mid_hashCode_54c6a179,
            mid_text_14c7b5c5,
            mid_toString_14c7b5c5,
            mid_toString_edfda73b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Term(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Term(const Term& obj) : ::java::lang::Object(obj) {}

          Term(const ::java::lang::String &);
          Term(const ::java::lang::String &, const ::java::lang::String &);
          Term(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);

          ::org::apache::lucene::util::BytesRef bytes() const;
          jint compareTo(const Term &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String field() const;
          jint hashCode() const;
          ::java::lang::String text() const;
          ::java::lang::String toString() const;
          static ::java::lang::String toString(const ::org::apache::lucene::util::BytesRef &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(Term);

        class t_Term {
        public:
          PyObject_HEAD
          Term object;
          static PyObject *wrap_Object(const Term&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
