#ifndef org_apache_lucene_search_FuzzyTermsEnum$LevenshteinAutomataAttributeImpl_H
#define org_apache_lucene_search_FuzzyTermsEnum$LevenshteinAutomataAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
      }
      namespace search {
        class FuzzyTermsEnum$LevenshteinAutomataAttribute;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FuzzyTermsEnum$LevenshteinAutomataAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
        public:
          enum {
            mid_init$_54c6a166,
            mid_automata_87851566,
            mid_clear_54c6a166,
            mid_copyTo_d86caa9f,
            mid_equals_290588e2,
            mid_hashCode_54c6a179,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FuzzyTermsEnum$LevenshteinAutomataAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FuzzyTermsEnum$LevenshteinAutomataAttributeImpl(const FuzzyTermsEnum$LevenshteinAutomataAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

          FuzzyTermsEnum$LevenshteinAutomataAttributeImpl();

          ::java::util::List automata() const;
          void clear() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
        extern PyTypeObject PY_TYPE(FuzzyTermsEnum$LevenshteinAutomataAttributeImpl);

        class t_FuzzyTermsEnum$LevenshteinAutomataAttributeImpl {
        public:
          PyObject_HEAD
          FuzzyTermsEnum$LevenshteinAutomataAttributeImpl object;
          static PyObject *wrap_Object(const FuzzyTermsEnum$LevenshteinAutomataAttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
