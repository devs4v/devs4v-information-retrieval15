#ifndef org_apache_lucene_analysis_util_CharArrayMap$EntrySet_H
#define org_apache_lucene_analysis_util_CharArrayMap$EntrySet_H

#include "java/util/AbstractSet.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharArrayMap$EntryIterator;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class CharArrayMap$EntrySet : public ::java::util::AbstractSet {
          public:
            enum {
              mid_clear_54c6a166,
              mid_contains_290588e2,
              mid_iterator_6e80333a,
              mid_remove_290588e2,
              mid_size_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharArrayMap$EntrySet(jobject obj) : ::java::util::AbstractSet(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CharArrayMap$EntrySet(const CharArrayMap$EntrySet& obj) : ::java::util::AbstractSet(obj) {}

            void clear() const;
            jboolean contains(const ::java::lang::Object &) const;
            ::org::apache::lucene::analysis::util::CharArrayMap$EntryIterator iterator() const;
            jboolean remove(const ::java::lang::Object &) const;
            jint size() const;
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
          extern PyTypeObject PY_TYPE(CharArrayMap$EntrySet);

          class t_CharArrayMap$EntrySet {
          public:
            PyObject_HEAD
            CharArrayMap$EntrySet object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CharArrayMap$EntrySet *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CharArrayMap$EntrySet&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CharArrayMap$EntrySet&, PyTypeObject *);
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
