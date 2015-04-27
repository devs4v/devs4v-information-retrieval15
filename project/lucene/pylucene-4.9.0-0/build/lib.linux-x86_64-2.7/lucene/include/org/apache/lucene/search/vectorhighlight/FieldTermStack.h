#ifndef org_apache_lucene_search_vectorhighlight_FieldTermStack_H
#define org_apache_lucene_search_vectorhighlight_FieldTermStack_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
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
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldTermStack : public ::java::lang::Object {
          public:
            enum {
              mid_init$_e3cbed11,
              mid_getFieldName_14c7b5c5,
              mid_isEmpty_54c6a16a,
              mid_pop_9d9e3d4a,
              mid_push_a7ece36b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldTermStack(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FieldTermStack(const FieldTermStack& obj) : ::java::lang::Object(obj) {}

            FieldTermStack(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldQuery &);

            ::java::lang::String getFieldName() const;
            jboolean isEmpty() const;
            ::org::apache::lucene::search::vectorhighlight::FieldTermStack$TermInfo pop() const;
            void push(const ::org::apache::lucene::search::vectorhighlight::FieldTermStack$TermInfo &) const;
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
          extern PyTypeObject PY_TYPE(FieldTermStack);

          class t_FieldTermStack {
          public:
            PyObject_HEAD
            FieldTermStack object;
            static PyObject *wrap_Object(const FieldTermStack&);
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
