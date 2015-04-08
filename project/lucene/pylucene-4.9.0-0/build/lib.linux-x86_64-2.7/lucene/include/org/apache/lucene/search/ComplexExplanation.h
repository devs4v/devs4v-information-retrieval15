#ifndef org_apache_lucene_search_ComplexExplanation_H
#define org_apache_lucene_search_ComplexExplanation_H

#include "org/apache/lucene/search/Explanation.h"

namespace java {
  namespace lang {
    class Boolean;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ComplexExplanation : public ::org::apache::lucene::search::Explanation {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_2ed007a2,
            mid_getMatch_34327cc3,
            mid_isMatch_54c6a16a,
            mid_setMatch_d07f0c8e,
            mid_getSummary_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ComplexExplanation(jobject obj) : ::org::apache::lucene::search::Explanation(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ComplexExplanation(const ComplexExplanation& obj) : ::org::apache::lucene::search::Explanation(obj) {}

          ComplexExplanation();
          ComplexExplanation(jboolean, jfloat, const ::java::lang::String &);

          ::java::lang::Boolean getMatch() const;
          jboolean isMatch() const;
          void setMatch(const ::java::lang::Boolean &) const;
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
        extern PyTypeObject PY_TYPE(ComplexExplanation);

        class t_ComplexExplanation {
        public:
          PyObject_HEAD
          ComplexExplanation object;
          static PyObject *wrap_Object(const ComplexExplanation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
