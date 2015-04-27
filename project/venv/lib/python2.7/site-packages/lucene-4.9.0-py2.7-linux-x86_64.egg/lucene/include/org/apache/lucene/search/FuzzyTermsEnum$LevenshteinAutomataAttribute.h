#ifndef org_apache_lucene_search_FuzzyTermsEnum$LevenshteinAutomataAttribute_H
#define org_apache_lucene_search_FuzzyTermsEnum$LevenshteinAutomataAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FuzzyTermsEnum$LevenshteinAutomataAttribute : public ::org::apache::lucene::util::Attribute {
        public:
          enum {
            mid_automata_87851566,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FuzzyTermsEnum$LevenshteinAutomataAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FuzzyTermsEnum$LevenshteinAutomataAttribute(const FuzzyTermsEnum$LevenshteinAutomataAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

          ::java::util::List automata() const;
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
        extern PyTypeObject PY_TYPE(FuzzyTermsEnum$LevenshteinAutomataAttribute);

        class t_FuzzyTermsEnum$LevenshteinAutomataAttribute {
        public:
          PyObject_HEAD
          FuzzyTermsEnum$LevenshteinAutomataAttribute object;
          static PyObject *wrap_Object(const FuzzyTermsEnum$LevenshteinAutomataAttribute&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
