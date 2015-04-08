#ifndef org_apache_lucene_search_highlight_WeightedSpanTerm_H
#define org_apache_lucene_search_highlight_WeightedSpanTerm_H

#include "org/apache/lucene/search/highlight/WeightedTerm.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class PositionSpan;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class WeightedSpanTerm : public ::org::apache::lucene::search::highlight::WeightedTerm {
          public:
            enum {
              mid_init$_f3ab5075,
              mid_init$_126740fe,
              mid_addPositionSpans_1fde8fc3,
              mid_checkPosition_39c7bd30,
              mid_getPositionSpans_87851566,
              mid_isPositionSensitive_54c6a16a,
              mid_setPositionSensitive_bb0c767f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WeightedSpanTerm(jobject obj) : ::org::apache::lucene::search::highlight::WeightedTerm(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            WeightedSpanTerm(const WeightedSpanTerm& obj) : ::org::apache::lucene::search::highlight::WeightedTerm(obj) {}

            WeightedSpanTerm(jfloat, const ::java::lang::String &);
            WeightedSpanTerm(jfloat, const ::java::lang::String &, jboolean);

            void addPositionSpans(const ::java::util::List &) const;
            jboolean checkPosition(jint) const;
            ::java::util::List getPositionSpans() const;
            jboolean isPositionSensitive() const;
            void setPositionSensitive(jboolean) const;
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
        namespace highlight {
          extern PyTypeObject PY_TYPE(WeightedSpanTerm);

          class t_WeightedSpanTerm {
          public:
            PyObject_HEAD
            WeightedSpanTerm object;
            static PyObject *wrap_Object(const WeightedSpanTerm&);
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
