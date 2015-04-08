#ifndef org_apache_lucene_util_Version_H
#define org_apache_lucene_util_Version_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class Version : public ::java::lang::Enum {
        public:
          enum {
            mid_onOrAfter_0d96cf3f,
            mid_parseLeniently_54fbdb70,
            mid_valueOf_54fbdb70,
            mid_values_f17d8c5a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Version(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Version(const Version& obj) : ::java::lang::Enum(obj) {}

          static Version *LUCENE_30;
          static Version *LUCENE_31;
          static Version *LUCENE_32;
          static Version *LUCENE_33;
          static Version *LUCENE_34;
          static Version *LUCENE_35;
          static Version *LUCENE_36;
          static Version *LUCENE_3_0;
          static Version *LUCENE_3_1;
          static Version *LUCENE_3_2;
          static Version *LUCENE_3_3;
          static Version *LUCENE_3_4;
          static Version *LUCENE_3_5;
          static Version *LUCENE_3_6;
          static Version *LUCENE_40;
          static Version *LUCENE_41;
          static Version *LUCENE_42;
          static Version *LUCENE_43;
          static Version *LUCENE_44;
          static Version *LUCENE_45;
          static Version *LUCENE_46;
          static Version *LUCENE_47;
          static Version *LUCENE_48;
          static Version *LUCENE_4_0;
          static Version *LUCENE_4_1;
          static Version *LUCENE_4_2;
          static Version *LUCENE_4_3;
          static Version *LUCENE_4_4;
          static Version *LUCENE_4_5;
          static Version *LUCENE_4_6;
          static Version *LUCENE_4_7;
          static Version *LUCENE_4_8;
          static Version *LUCENE_4_9;
          static Version *LUCENE_CURRENT;

          jboolean onOrAfter(const Version &) const;
          static Version parseLeniently(const ::java::lang::String &);
          static Version valueOf(const ::java::lang::String &);
          static JArray< Version > values();
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
        extern PyTypeObject PY_TYPE(Version);

        class t_Version {
        public:
          PyObject_HEAD
          Version object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Version *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Version&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Version&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
