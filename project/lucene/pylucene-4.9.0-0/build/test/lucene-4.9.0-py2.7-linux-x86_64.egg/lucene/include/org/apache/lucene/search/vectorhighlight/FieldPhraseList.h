#ifndef org_apache_lucene_search_vectorhighlight_FieldPhraseList_H
#define org_apache_lucene_search_vectorhighlight_FieldPhraseList_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldQuery;
          class FieldTermStack;
          class FieldPhraseList$WeightedPhraseInfo;
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
        namespace vectorhighlight {

          class FieldPhraseList : public ::java::lang::Object {
          public:
            enum {
              mid_init$_e0573fb6,
              mid_init$_ed2eefc8,
              mid_init$_5d494a16,
              mid_addIfNoOverlap_3f58e089,
              mid_getPhraseList_87851566,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldPhraseList(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FieldPhraseList(const FieldPhraseList& obj) : ::java::lang::Object(obj) {}

            FieldPhraseList(const JArray< FieldPhraseList > &);
            FieldPhraseList(const ::org::apache::lucene::search::vectorhighlight::FieldTermStack &, const ::org::apache::lucene::search::vectorhighlight::FieldQuery &);
            FieldPhraseList(const ::org::apache::lucene::search::vectorhighlight::FieldTermStack &, const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, jint);

            void addIfNoOverlap(const ::org::apache::lucene::search::vectorhighlight::FieldPhraseList$WeightedPhraseInfo &) const;
            ::java::util::List getPhraseList() const;
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
          extern PyTypeObject PY_TYPE(FieldPhraseList);

          class t_FieldPhraseList {
          public:
            PyObject_HEAD
            FieldPhraseList object;
            static PyObject *wrap_Object(const FieldPhraseList&);
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
