#ifndef org_apache_lucene_queryparser_flexible_core_util_UnescapedCharSequence_H
#define org_apache_lucene_queryparser_flexible_core_util_UnescapedCharSequence_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class String;
    class Class;
  }
  namespace util {
    class Locale;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace util {

              class UnescapedCharSequence : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_a8afc64a,
                  mid_init$_225aaf87,
                  mid_charAt_39c7bd29,
                  mid_length_54c6a179,
                  mid_subSequence_f88dfd57,
                  mid_toLowerCase_0df08ccc,
                  mid_toString_14c7b5c5,
                  mid_toStringEscaped_14c7b5c5,
                  mid_toStringEscaped_c783d655,
                  mid_wasEscaped_39c7bd30,
                  mid_wasEscaped_2fbf15ac,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit UnescapedCharSequence(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                UnescapedCharSequence(const UnescapedCharSequence& obj) : ::java::lang::Object(obj) {}

                UnescapedCharSequence(const ::java::lang::CharSequence &);
                UnescapedCharSequence(const JArray< jchar > &, const JArray< jboolean > &, jint, jint);

                jchar charAt(jint) const;
                jint length() const;
                ::java::lang::CharSequence subSequence(jint, jint) const;
                static ::java::lang::CharSequence toLowerCase(const ::java::lang::CharSequence &, const ::java::util::Locale &);
                ::java::lang::String toString() const;
                ::java::lang::String toStringEscaped() const;
                ::java::lang::String toStringEscaped(const JArray< jchar > &) const;
                jboolean wasEscaped(jint) const;
                static jboolean wasEscaped(const ::java::lang::CharSequence &, jint);
              };
            }
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
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace util {
              extern PyTypeObject PY_TYPE(UnescapedCharSequence);

              class t_UnescapedCharSequence {
              public:
                PyObject_HEAD
                UnescapedCharSequence object;
                static PyObject *wrap_Object(const UnescapedCharSequence&);
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
}

#endif
