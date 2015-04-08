#ifndef org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState_H
#define org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {
          class SortedSetDocValuesReaderState$OrdRange;
        }
      }
      namespace index {
        class SortedSetDocValues;
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {

          class SortedSetDocValuesReaderState : public ::java::lang::Object {
          public:
            enum {
              mid_getDocValues_4bead171,
              mid_getField_14c7b5c5,
              mid_getOrdRange_73e2ee38,
              mid_getOrigReader_94bbd010,
              mid_getPrefixToOrdRange_db60befd,
              mid_getSize_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetDocValuesReaderState(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SortedSetDocValuesReaderState(const SortedSetDocValuesReaderState& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::index::SortedSetDocValues getDocValues() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$OrdRange getOrdRange(const ::java::lang::String &) const;
            ::org::apache::lucene::index::IndexReader getOrigReader() const;
            ::java::util::Map getPrefixToOrdRange() const;
            jint getSize() const;
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
      namespace facet {
        namespace sortedset {
          extern PyTypeObject PY_TYPE(SortedSetDocValuesReaderState);

          class t_SortedSetDocValuesReaderState {
          public:
            PyObject_HEAD
            SortedSetDocValuesReaderState object;
            static PyObject *wrap_Object(const SortedSetDocValuesReaderState&);
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
