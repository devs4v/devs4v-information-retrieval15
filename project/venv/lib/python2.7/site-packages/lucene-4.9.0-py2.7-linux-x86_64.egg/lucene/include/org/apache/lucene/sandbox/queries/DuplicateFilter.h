#ifndef org_apache_lucene_sandbox_queries_DuplicateFilter_H
#define org_apache_lucene_sandbox_queries_DuplicateFilter_H

#include "org/apache/lucene/search/Filter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class AtomicReaderContext;
      }
      namespace sandbox {
        namespace queries {
          class DuplicateFilter$KeepMode;
          class DuplicateFilter$ProcessingMode;
        }
      }
      namespace search {
        class DocIdSet;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
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
      namespace sandbox {
        namespace queries {

          class DuplicateFilter : public ::org::apache::lucene::search::Filter {
          public:
            enum {
              mid_init$_5fdc3f48,
              mid_init$_0a23a3cc,
              mid_equals_290588e2,
              mid_getDocIdSet_ccce0897,
              mid_getFieldName_14c7b5c5,
              mid_getKeepMode_c01b4463,
              mid_getProcessingMode_815046ab,
              mid_hashCode_54c6a179,
              mid_setFieldName_5fdc3f48,
              mid_setKeepMode_9304b146,
              mid_setProcessingMode_a2322426,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DuplicateFilter(jobject obj) : ::org::apache::lucene::search::Filter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DuplicateFilter(const DuplicateFilter& obj) : ::org::apache::lucene::search::Filter(obj) {}

            DuplicateFilter(const ::java::lang::String &);
            DuplicateFilter(const ::java::lang::String &, const ::org::apache::lucene::sandbox::queries::DuplicateFilter$KeepMode &, const ::org::apache::lucene::sandbox::queries::DuplicateFilter$ProcessingMode &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::DocIdSet getDocIdSet(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
            ::java::lang::String getFieldName() const;
            ::org::apache::lucene::sandbox::queries::DuplicateFilter$KeepMode getKeepMode() const;
            ::org::apache::lucene::sandbox::queries::DuplicateFilter$ProcessingMode getProcessingMode() const;
            jint hashCode() const;
            void setFieldName(const ::java::lang::String &) const;
            void setKeepMode(const ::org::apache::lucene::sandbox::queries::DuplicateFilter$KeepMode &) const;
            void setProcessingMode(const ::org::apache::lucene::sandbox::queries::DuplicateFilter$ProcessingMode &) const;
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
      namespace sandbox {
        namespace queries {
          extern PyTypeObject PY_TYPE(DuplicateFilter);

          class t_DuplicateFilter {
          public:
            PyObject_HEAD
            DuplicateFilter object;
            static PyObject *wrap_Object(const DuplicateFilter&);
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
