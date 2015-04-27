#ifndef org_apache_lucene_analysis_util_CharArrayMap_H
#define org_apache_lucene_analysis_util_CharArrayMap_H

#include "java/util/AbstractMap.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace analysis {
        namespace util {
          class CharArraySet;
          class CharArrayMap$EntrySet;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
    class CharSequence;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class CharArrayMap : public ::java::util::AbstractMap {
          public:
            enum {
              mid_init$_741c8a04,
              mid_init$_b3a872e4,
              mid_clear_54c6a166,
              mid_containsKey_a8afc646,
              mid_containsKey_290588e2,
              mid_containsKey_6f0bb35a,
              mid_copy_67ffa425,
              mid_emptyMap_31b01886,
              mid_entrySet_9ca3e4b1,
              mid_get_a932a95f,
              mid_get_a739ccff,
              mid_get_c05993cb,
              mid_keySet_d2d3505c,
              mid_put_b85c5dc7,
              mid_put_84c802ab,
              mid_put_80209419,
              mid_put_537d5bdf,
              mid_remove_a932a95f,
              mid_size_54c6a179,
              mid_toString_14c7b5c5,
              mid_unmodifiableMap_716215f5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharArrayMap(jobject obj) : ::java::util::AbstractMap(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CharArrayMap(const CharArrayMap& obj) : ::java::util::AbstractMap(obj) {}

            CharArrayMap(const ::org::apache::lucene::util::Version &, const ::java::util::Map &, jboolean);
            CharArrayMap(const ::org::apache::lucene::util::Version &, jint, jboolean);

            void clear() const;
            jboolean containsKey(const ::java::lang::CharSequence &) const;
            jboolean containsKey(const ::java::lang::Object &) const;
            jboolean containsKey(const JArray< jchar > &, jint, jint) const;
            static CharArrayMap copy(const ::org::apache::lucene::util::Version &, const ::java::util::Map &);
            static CharArrayMap emptyMap();
            ::org::apache::lucene::analysis::util::CharArrayMap$EntrySet entrySet() const;
            ::java::lang::Object get(const ::java::lang::Object &) const;
            ::java::lang::Object get(const ::java::lang::CharSequence &) const;
            ::java::lang::Object get(const JArray< jchar > &, jint, jint) const;
            ::org::apache::lucene::analysis::util::CharArraySet keySet() const;
            ::java::lang::Object put(const JArray< jchar > &, const ::java::lang::Object &) const;
            ::java::lang::Object put(const ::java::lang::CharSequence &, const ::java::lang::Object &) const;
            ::java::lang::Object put(const ::java::lang::String &, const ::java::lang::Object &) const;
            ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object remove(const ::java::lang::Object &) const;
            jint size() const;
            ::java::lang::String toString() const;
            static CharArrayMap unmodifiableMap(const CharArrayMap &);
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
          extern PyTypeObject PY_TYPE(CharArrayMap);

          class t_CharArrayMap {
          public:
            PyObject_HEAD
            CharArrayMap object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CharArrayMap *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CharArrayMap&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CharArrayMap&, PyTypeObject *);
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
