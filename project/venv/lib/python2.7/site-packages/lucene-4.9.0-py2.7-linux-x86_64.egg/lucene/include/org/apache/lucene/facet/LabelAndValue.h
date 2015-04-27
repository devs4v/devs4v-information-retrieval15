#ifndef org_apache_lucene_facet_LabelAndValue_H
#define org_apache_lucene_facet_LabelAndValue_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Number;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class LabelAndValue : public ::java::lang::Object {
        public:
          enum {
            mid_init$_158d1296,
            mid_equals_290588e2,
            mid_hashCode_54c6a179,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_label,
            fid_value,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LabelAndValue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          LabelAndValue(const LabelAndValue& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String _get_label() const;
          ::java::lang::Number _get_value() const;

          LabelAndValue(const ::java::lang::String &, const ::java::lang::Number &);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyTypeObject PY_TYPE(LabelAndValue);

        class t_LabelAndValue {
        public:
          PyObject_HEAD
          LabelAndValue object;
          static PyObject *wrap_Object(const LabelAndValue&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
