#ifndef org_apache_lucene_search_LiveFieldValues_H
#define org_apache_lucene_search_LiveFieldValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ReferenceManager$RefreshListener;
        class ReferenceManager;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
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

        class LiveFieldValues : public ::java::lang::Object {
        public:
          enum {
            mid_init$_48ea9202,
            mid_add_2da4da24,
            mid_afterRefresh_bb0c767f,
            mid_beforeRefresh_54c6a166,
            mid_close_54c6a166,
            mid_delete_5fdc3f48,
            mid_get_2a1c4d09,
            mid_size_54c6a179,
            mid_lookupFromSearcher_e0270375,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LiveFieldValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          LiveFieldValues(const LiveFieldValues& obj) : ::java::lang::Object(obj) {}

          LiveFieldValues(const ::org::apache::lucene::search::ReferenceManager &, const ::java::lang::Object &);

          void add(const ::java::lang::String &, const ::java::lang::Object &) const;
          void afterRefresh(jboolean) const;
          void beforeRefresh() const;
          void close() const;
          void delete$(const ::java::lang::String &) const;
          ::java::lang::Object get(const ::java::lang::String &) const;
          jint size() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(LiveFieldValues);

        class t_LiveFieldValues {
        public:
          PyObject_HEAD
          LiveFieldValues object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_LiveFieldValues *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const LiveFieldValues&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const LiveFieldValues&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
