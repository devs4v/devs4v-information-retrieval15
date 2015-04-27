#ifndef org_apache_lucene_search_MaxNonCompetitiveBoostAttributeImpl_H
#define org_apache_lucene_search_MaxNonCompetitiveBoostAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class MaxNonCompetitiveBoostAttribute;
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

        class MaxNonCompetitiveBoostAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clear_54c6a166,
            mid_copyTo_d86caa9f,
            mid_getCompetitiveTerm_4ae19461,
            mid_getMaxNonCompetitiveBoost_54c6a176,
            mid_setCompetitiveTerm_7bc03dc4,
            mid_setMaxNonCompetitiveBoost_06298cab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MaxNonCompetitiveBoostAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MaxNonCompetitiveBoostAttributeImpl(const MaxNonCompetitiveBoostAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

          MaxNonCompetitiveBoostAttributeImpl();

          void clear() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
          ::org::apache::lucene::util::BytesRef getCompetitiveTerm() const;
          jfloat getMaxNonCompetitiveBoost() const;
          void setCompetitiveTerm(const ::org::apache::lucene::util::BytesRef &) const;
          void setMaxNonCompetitiveBoost(jfloat) const;
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
        extern PyTypeObject PY_TYPE(MaxNonCompetitiveBoostAttributeImpl);

        class t_MaxNonCompetitiveBoostAttributeImpl {
        public:
          PyObject_HEAD
          MaxNonCompetitiveBoostAttributeImpl object;
          static PyObject *wrap_Object(const MaxNonCompetitiveBoostAttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
