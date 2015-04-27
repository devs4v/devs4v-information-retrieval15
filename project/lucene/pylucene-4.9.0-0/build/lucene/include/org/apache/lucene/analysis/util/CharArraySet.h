#ifndef org_apache_lucene_analysis_util_CharArraySet_H
#define org_apache_lucene_analysis_util_CharArraySet_H

#include "java/util/AbstractSet.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
    class Iterator;
    class Collection;
  }
  namespace lang {
    class String;
    class Object;
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class CharArraySet : public ::java::util::AbstractSet {
          public:
            enum {
              mid_init$_e4d1113d,
              mid_init$_b3a872e4,
              mid_add_5fdc3f44,
              mid_add_700e23da,
              mid_add_a8afc646,
              mid_add_290588e2,
              mid_clear_54c6a166,
              mid_contains_290588e2,
              mid_contains_a8afc646,
              mid_contains_6f0bb35a,
              mid_copy_8d0d7f61,
              mid_iterator_40858c90,
              mid_size_54c6a179,
              mid_toString_14c7b5c5,
              mid_unmodifiableSet_ea04d04d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharArraySet(jobject obj) : ::java::util::AbstractSet(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CharArraySet(const CharArraySet& obj) : ::java::util::AbstractSet(obj) {}

            static CharArraySet *EMPTY_SET;

            CharArraySet(const ::org::apache::lucene::util::Version &, const ::java::util::Collection &, jboolean);
            CharArraySet(const ::org::apache::lucene::util::Version &, jint, jboolean);

            jboolean add(const ::java::lang::String &) const;
            jboolean add(const JArray< jchar > &) const;
            jboolean add(const ::java::lang::CharSequence &) const;
            jboolean add(const ::java::lang::Object &) const;
            void clear() const;
            jboolean contains(const ::java::lang::Object &) const;
            jboolean contains(const ::java::lang::CharSequence &) const;
            jboolean contains(const JArray< jchar > &, jint, jint) const;
            static CharArraySet copy(const ::org::apache::lucene::util::Version &, const ::java::util::Set &);
            ::java::util::Iterator iterator() const;
            jint size() const;
            ::java::lang::String toString() const;
            static CharArraySet unmodifiableSet(const CharArraySet &);
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
      namespace analysis {
        namespace util {
          extern PyTypeObject PY_TYPE(CharArraySet);

          class t_CharArraySet {
          public:
            PyObject_HEAD
            CharArraySet object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CharArraySet *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CharArraySet&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CharArraySet&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
