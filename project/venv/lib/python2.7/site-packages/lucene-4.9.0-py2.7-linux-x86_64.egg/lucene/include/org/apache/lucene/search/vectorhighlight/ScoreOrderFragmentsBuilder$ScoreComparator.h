#ifndef org_apache_lucene_search_vectorhighlight_ScoreOrderFragmentsBuilder$ScoreComparator_H
#define org_apache_lucene_search_vectorhighlight_ScoreOrderFragmentsBuilder$ScoreComparator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldFragList$WeightedFragInfo;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
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
        namespace vectorhighlight {

          class ScoreOrderFragmentsBuilder$ScoreComparator : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_compare_79a08e77,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScoreOrderFragmentsBuilder$ScoreComparator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ScoreOrderFragmentsBuilder$ScoreComparator(const ScoreOrderFragmentsBuilder$ScoreComparator& obj) : ::java::lang::Object(obj) {}

            ScoreOrderFragmentsBuilder$ScoreComparator();

            jint compare(const ::org::apache::lucene::search::vectorhighlight::FieldFragList$WeightedFragInfo &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList$WeightedFragInfo &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          extern PyTypeObject PY_TYPE(ScoreOrderFragmentsBuilder$ScoreComparator);

          class t_ScoreOrderFragmentsBuilder$ScoreComparator {
          public:
            PyObject_HEAD
            ScoreOrderFragmentsBuilder$ScoreComparator object;
            static PyObject *wrap_Object(const ScoreOrderFragmentsBuilder$ScoreComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
