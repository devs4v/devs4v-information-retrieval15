#ifndef org_apache_lucene_util_NamedSPILoader_H
#define org_apache_lucene_util_NamedSPILoader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
    }
  }
}
namespace java {
  namespace lang {
    class ClassLoader;
    class Class;
    class Iterable;
    class String;
  }
  namespace util {
    class Set;
    class Iterator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class NamedSPILoader : public ::java::lang::Object {
        public:
          enum {
            mid_init$_a5deaff4,
            mid_init$_6deee997,
            mid_availableServices_03e99967,
            mid_checkServiceName_5fdc3f48,
            mid_iterator_40858c90,
            mid_lookup_f2235407,
            mid_reload_9110048d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NamedSPILoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NamedSPILoader(const NamedSPILoader& obj) : ::java::lang::Object(obj) {}

          NamedSPILoader(const ::java::lang::Class &);
          NamedSPILoader(const ::java::lang::Class &, const ::java::lang::ClassLoader &);

          ::java::util::Set availableServices() const;
          static void checkServiceName(const ::java::lang::String &);
          ::java::util::Iterator iterator() const;
          ::org::apache::lucene::util::NamedSPILoader$NamedSPI lookup(const ::java::lang::String &) const;
          void reload(const ::java::lang::ClassLoader &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(NamedSPILoader);

        class t_NamedSPILoader {
        public:
          PyObject_HEAD
          NamedSPILoader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_NamedSPILoader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const NamedSPILoader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const NamedSPILoader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
