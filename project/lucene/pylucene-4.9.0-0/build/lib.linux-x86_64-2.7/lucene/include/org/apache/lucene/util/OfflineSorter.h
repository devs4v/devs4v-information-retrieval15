#ifndef org_apache_lucene_util_OfflineSorter_H
#define org_apache_lucene_util_OfflineSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class OfflineSorter$BufferSize;
        class BytesRef;
        class OfflineSorter$SortInfo;
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
  namespace io {
    class IOException;
    class File;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class OfflineSorter : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_6ffdd545,
            mid_init$_22c0d43b,
            mid_defaultTempDir_a8eb7bbe,
            mid_getComparator_5a7ff2fc,
            mid_sort_c917fc5b,
            mid_sortPartition_5a7c7338,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OfflineSorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          OfflineSorter(const OfflineSorter& obj) : ::java::lang::Object(obj) {}

          static jlong ABSOLUTE_MIN_SORT_BUFFER_SIZE;
          static ::java::util::Comparator *DEFAULT_COMPARATOR;
          static jlong GB;
          static jint MAX_TEMPFILES;
          static jlong MB;
          static jlong MIN_BUFFER_SIZE_MB;

          OfflineSorter();
          OfflineSorter(const ::java::util::Comparator &);
          OfflineSorter(const ::java::util::Comparator &, const ::org::apache::lucene::util::OfflineSorter$BufferSize &, const ::java::io::File &, jint);

          static ::java::io::File defaultTempDir();
          ::java::util::Comparator getComparator() const;
          ::org::apache::lucene::util::OfflineSorter$SortInfo sort(const ::java::io::File &, const ::java::io::File &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(OfflineSorter);

        class t_OfflineSorter {
        public:
          PyObject_HEAD
          OfflineSorter object;
          static PyObject *wrap_Object(const OfflineSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
