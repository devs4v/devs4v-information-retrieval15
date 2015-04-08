#ifndef org_apache_lucene_search_BoostAttribute_H
#define org_apache_lucene_search_BoostAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class BoostAttribute : public ::org::apache::lucene::util::Attribute {
        public:
          enum {
            mid_getBoost_54c6a176,
            mid_setBoost_06298cab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BoostAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BoostAttribute(const BoostAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

          jfloat getBoost() const;
          void setBoost(jfloat) const;
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
        extern PyTypeObject PY_TYPE(BoostAttribute);

        class t_BoostAttribute {
        public:
          PyObject_HEAD
          BoostAttribute object;
          static PyObject *wrap_Object(const BoostAttribute&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
