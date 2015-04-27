#ifndef org_apache_lucene_search_vectorhighlight_FragmentsBuilder_H
#define org_apache_lucene_search_vectorhighlight_FragmentsBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace vectorhighlight {
          class FieldFragList;
        }
        namespace highlight {
          class Encoder;
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

          class FragmentsBuilder : public ::java::lang::Object {
          public:
            enum {
              mid_createFragment_dbdbadf3,
              mid_createFragment_4ae15401,
              mid_createFragments_b5534699,
              mid_createFragments_a6aed56f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FragmentsBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FragmentsBuilder(const FragmentsBuilder& obj) : ::java::lang::Object(obj) {}

            ::java::lang::String createFragment(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &) const;
            ::java::lang::String createFragment(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > createFragments(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, jint) const;
            JArray< ::java::lang::String > createFragments(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, jint, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
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
          extern PyTypeObject PY_TYPE(FragmentsBuilder);

          class t_FragmentsBuilder {
          public:
            PyObject_HEAD
            FragmentsBuilder object;
            static PyObject *wrap_Object(const FragmentsBuilder&);
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
