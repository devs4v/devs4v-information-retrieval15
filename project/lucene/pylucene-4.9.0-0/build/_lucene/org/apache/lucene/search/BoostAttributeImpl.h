#ifndef org_apache_lucene_search_BoostAttributeImpl_H
#define org_apache_lucene_search_BoostAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BoostAttribute;
      }
    }
  }
}
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

        class BoostAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clear_54c6a166,
            mid_copyTo_d86caa9f,
            mid_getBoost_54c6a176,
            mid_setBoost_06298cab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BoostAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BoostAttributeImpl(const BoostAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

          BoostAttributeImpl();

          void clear() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
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
        extern PyTypeObject PY_TYPE(BoostAttributeImpl);

        class t_BoostAttributeImpl {
        public:
          PyObject_HEAD
          BoostAttributeImpl object;
          static PyObject *wrap_Object(const BoostAttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
