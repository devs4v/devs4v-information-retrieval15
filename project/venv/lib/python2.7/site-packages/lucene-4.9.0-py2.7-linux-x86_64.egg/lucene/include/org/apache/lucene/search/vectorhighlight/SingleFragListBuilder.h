#ifndef org_apache_lucene_search_vectorhighlight_SingleFragListBuilder_H
#define org_apache_lucene_search_vectorhighlight_SingleFragListBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList;
          class FieldFragList;
          class FragListBuilder;
        }
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
        namespace vectorhighlight {

          class SingleFragListBuilder : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_createFieldFragList_f54fd6ce,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SingleFragListBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SingleFragListBuilder(const SingleFragListBuilder& obj) : ::java::lang::Object(obj) {}

            SingleFragListBuilder();

            ::org::apache::lucene::search::vectorhighlight::FieldFragList createFieldFragList(const ::org::apache::lucene::search::vectorhighlight::FieldPhraseList &, jint) const;
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
          extern PyTypeObject PY_TYPE(SingleFragListBuilder);

          class t_SingleFragListBuilder {
          public:
            PyObject_HEAD
            SingleFragListBuilder object;
            static PyObject *wrap_Object(const SingleFragListBuilder&);
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
