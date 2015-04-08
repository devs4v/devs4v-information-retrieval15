#ifndef org_apache_lucene_search_vectorhighlight_FieldQuery_H
#define org_apache_lucene_search_vectorhighlight_FieldQuery_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldQuery$QueryPhraseMap;
          class FieldTermStack$TermInfo;
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
        namespace vectorhighlight {

          class FieldQuery : public ::java::lang::Object {
          public:
            enum {
              mid_getFieldTermMap_e027f4d1,
              mid_searchPhrase_361b35e4,
              mid_applyParentBoost_aaf01f72,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldQuery(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FieldQuery(const FieldQuery& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::search::vectorhighlight::FieldQuery$QueryPhraseMap getFieldTermMap(const ::java::lang::String &, const ::java::lang::String &) const;
            ::org::apache::lucene::search::vectorhighlight::FieldQuery$QueryPhraseMap searchPhrase(const ::java::lang::String &, const ::java::util::List &) const;
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
          extern PyTypeObject PY_TYPE(FieldQuery);

          class t_FieldQuery {
          public:
            PyObject_HEAD
            FieldQuery object;
            static PyObject *wrap_Object(const FieldQuery&);
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
