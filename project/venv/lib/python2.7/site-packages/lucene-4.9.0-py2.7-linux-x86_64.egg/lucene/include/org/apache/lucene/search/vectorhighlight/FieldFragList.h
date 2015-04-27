#ifndef org_apache_lucene_search_vectorhighlight_FieldFragList_H
#define org_apache_lucene_search_vectorhighlight_FieldFragList_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldFragList$WeightedFragInfo;
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

          class FieldFragList : public ::java::lang::Object {
          public:
            enum {
              mid_init$_39c7bd3c,
              mid_add_21fbeb2b,
              mid_getFragInfos_87851566,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldFragList(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FieldFragList(const FieldFragList& obj) : ::java::lang::Object(obj) {}

            FieldFragList(jint);

            void add(jint, jint, const ::java::util::List &) const;
            ::java::util::List getFragInfos() const;
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
          extern PyTypeObject PY_TYPE(FieldFragList);

          class t_FieldFragList {
          public:
            PyObject_HEAD
            FieldFragList object;
            static PyObject *wrap_Object(const FieldFragList&);
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
