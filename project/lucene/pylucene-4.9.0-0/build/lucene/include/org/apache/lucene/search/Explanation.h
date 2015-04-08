#ifndef org_apache_lucene_search_Explanation_H
#define org_apache_lucene_search_Explanation_H

#include "java/lang/Object.h"

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
      namespace search {

        class Explanation : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_f3ab5075,
            mid_addDetail_398cd45a,
            mid_getDescription_14c7b5c5,
            mid_getDetails_1ee90723,
            mid_getValue_54c6a176,
            mid_isMatch_54c6a16a,
            mid_setDescription_5fdc3f48,
            mid_setValue_06298cab,
            mid_toHtml_14c7b5c5,
            mid_toString_14c7b5c5,
            mid_toString_141401b3,
            mid_getSummary_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Explanation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Explanation(const Explanation& obj) : ::java::lang::Object(obj) {}

          Explanation();
          Explanation(jfloat, const ::java::lang::String &);

          void addDetail(const Explanation &) const;
          ::java::lang::String getDescription() const;
          JArray< Explanation > getDetails() const;
          jfloat getValue() const;
          jboolean isMatch() const;
          void setDescription(const ::java::lang::String &) const;
          void setValue(jfloat) const;
          ::java::lang::String toHtml() const;
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
      namespace search {
        extern PyTypeObject PY_TYPE(Explanation);

        class t_Explanation {
        public:
          PyObject_HEAD
          Explanation object;
          static PyObject *wrap_Object(const Explanation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
