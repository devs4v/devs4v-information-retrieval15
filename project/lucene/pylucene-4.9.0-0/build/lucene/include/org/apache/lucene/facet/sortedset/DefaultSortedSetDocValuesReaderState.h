#ifndef org_apache_lucene_facet_sortedset_DefaultSortedSetDocValuesReaderState_H
#define org_apache_lucene_facet_sortedset_DefaultSortedSetDocValuesReaderState_H

#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesReaderState.h"

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

          class DefaultSortedSetDocValuesReaderState : public ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState {
          public:
            enum {
              mid_init$_7d7eaea9,
              mid_init$_215fea03,
              mid_getDocValues_4bead171,
              mid_getField_14c7b5c5,
              mid_getOrdRange_73e2ee38,
              mid_getOrigReader_94bbd010,
              mid_getPrefixToOrdRange_db60befd,
              mid_getSize_54c6a179,
              max_mid
            };

            enum {
              fid_origReader,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DefaultSortedSetDocValuesReaderState(jobject obj) : ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DefaultSortedSetDocValuesReaderState(const DefaultSortedSetDocValuesReaderState& obj) : ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState(obj) {}

            ::org::apache::lucene::index::IndexReader _get_origReader() const;

            DefaultSortedSetDocValuesReaderState(const ::org::apache::lucene::index::IndexReader &);
            DefaultSortedSetDocValuesReaderState(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);

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
          extern PyTypeObject PY_TYPE(DefaultSortedSetDocValuesReaderState);

          class t_DefaultSortedSetDocValuesReaderState {
          public:
            PyObject_HEAD
            DefaultSortedSetDocValuesReaderState object;
            static PyObject *wrap_Object(const DefaultSortedSetDocValuesReaderState&);
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
