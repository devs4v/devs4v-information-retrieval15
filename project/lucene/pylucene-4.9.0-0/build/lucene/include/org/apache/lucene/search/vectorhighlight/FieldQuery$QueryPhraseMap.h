#ifndef org_apache_lucene_search_vectorhighlight_FieldQuery$QueryPhraseMap_H
#define org_apache_lucene_search_vectorhighlight_FieldQuery$QueryPhraseMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldQuery;
          class FieldTermStack$TermInfo;
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
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldQuery$QueryPhraseMap : public ::java::lang::Object {
          public:
            enum {
              mid_init$_d4060136,
              mid_getBoost_54c6a176,
              mid_getSlop_54c6a179,
              mid_getTermMap_1ad656ab,
              mid_getTermOrPhraseNumber_54c6a179,
              mid_isTerminal_54c6a16a,
              mid_isValidTermOrPhrase_1fde8fcf,
              mid_searchPhrase_94f40592,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldQuery$QueryPhraseMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FieldQuery$QueryPhraseMap(const FieldQuery$QueryPhraseMap& obj) : ::java::lang::Object(obj) {}

            FieldQuery$QueryPhraseMap(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &);

            jfloat getBoost() const;
            jint getSlop() const;
            FieldQuery$QueryPhraseMap getTermMap(const ::java::lang::String &) const;
            jint getTermOrPhraseNumber() const;
            jboolean isTerminal() const;
            jboolean isValidTermOrPhrase(const ::java::util::List &) const;
            FieldQuery$QueryPhraseMap searchPhrase(const ::java::util::List &) const;
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
          extern PyTypeObject PY_TYPE(FieldQuery$QueryPhraseMap);

          class t_FieldQuery$QueryPhraseMap {
          public:
            PyObject_HEAD
            FieldQuery$QueryPhraseMap object;
            static PyObject *wrap_Object(const FieldQuery$QueryPhraseMap&);
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
