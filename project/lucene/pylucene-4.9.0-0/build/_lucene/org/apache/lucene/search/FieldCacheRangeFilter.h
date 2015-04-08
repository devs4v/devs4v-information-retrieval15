#ifndef org_apache_lucene_search_FieldCacheRangeFilter_H
#define org_apache_lucene_search_FieldCacheRangeFilter_H

#include "org/apache/lucene/search/Filter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class Bits;
      }
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class DocIdSet;
        class FieldCache$LongParser;
        class FieldCache$ByteParser;
        class FieldCache$Parser;
        class FieldCache$ShortParser;
        class FieldCache$IntParser;
        class FieldCache$DoubleParser;
        class FieldCache$FloatParser;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Float;
    class String;
    class Double;
    class Object;
    class Long;
    class Short;
    class Integer;
    class Byte;
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
      namespace search {

        class FieldCacheRangeFilter : public ::org::apache::lucene::search::Filter {
        public:
          enum {
            mid_equals_290588e2,
            mid_getDocIdSet_ccce0897,
            mid_getField_14c7b5c5,
            mid_getLowerVal_846352c3,
            mid_getParser_6ee4ab67,
            mid_getUpperVal_846352c3,
            mid_hashCode_54c6a179,
            mid_includesLower_54c6a16a,
            mid_includesUpper_54c6a16a,
            mid_newByteRange_16d27fcb,
            mid_newByteRange_8dbc9d65,
            mid_newBytesRefRange_ada19313,
            mid_newDoubleRange_1f46882f,
            mid_newDoubleRange_45b4662e,
            mid_newFloatRange_6957c90b,
            mid_newFloatRange_ec92e8b8,
            mid_newIntRange_dee3e03b,
            mid_newIntRange_6952cfdf,
            mid_newLongRange_48e495eb,
            mid_newLongRange_51d4b8f9,
            mid_newShortRange_89cd93a7,
            mid_newShortRange_d637c7bc,
            mid_newStringRange_05fb19b7,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCacheRangeFilter(jobject obj) : ::org::apache::lucene::search::Filter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCacheRangeFilter(const FieldCacheRangeFilter& obj) : ::org::apache::lucene::search::Filter(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::DocIdSet getDocIdSet(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
          ::java::lang::String getField() const;
          ::java::lang::Object getLowerVal() const;
          ::org::apache::lucene::search::FieldCache$Parser getParser() const;
          ::java::lang::Object getUpperVal() const;
          jint hashCode() const;
          jboolean includesLower() const;
          jboolean includesUpper() const;
          static FieldCacheRangeFilter newByteRange(const ::java::lang::String &, const ::java::lang::Byte &, const ::java::lang::Byte &, jboolean, jboolean);
          static FieldCacheRangeFilter newByteRange(const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$ByteParser &, const ::java::lang::Byte &, const ::java::lang::Byte &, jboolean, jboolean);
          static FieldCacheRangeFilter newBytesRefRange(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean);
          static FieldCacheRangeFilter newDoubleRange(const ::java::lang::String &, const ::java::lang::Double &, const ::java::lang::Double &, jboolean, jboolean);
          static FieldCacheRangeFilter newDoubleRange(const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$DoubleParser &, const ::java::lang::Double &, const ::java::lang::Double &, jboolean, jboolean);
          static FieldCacheRangeFilter newFloatRange(const ::java::lang::String &, const ::java::lang::Float &, const ::java::lang::Float &, jboolean, jboolean);
          static FieldCacheRangeFilter newFloatRange(const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$FloatParser &, const ::java::lang::Float &, const ::java::lang::Float &, jboolean, jboolean);
          static FieldCacheRangeFilter newIntRange(const ::java::lang::String &, const ::java::lang::Integer &, const ::java::lang::Integer &, jboolean, jboolean);
          static FieldCacheRangeFilter newIntRange(const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$IntParser &, const ::java::lang::Integer &, const ::java::lang::Integer &, jboolean, jboolean);
          static FieldCacheRangeFilter newLongRange(const ::java::lang::String &, const ::java::lang::Long &, const ::java::lang::Long &, jboolean, jboolean);
          static FieldCacheRangeFilter newLongRange(const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$LongParser &, const ::java::lang::Long &, const ::java::lang::Long &, jboolean, jboolean);
          static FieldCacheRangeFilter newShortRange(const ::java::lang::String &, const ::java::lang::Short &, const ::java::lang::Short &, jboolean, jboolean);
          static FieldCacheRangeFilter newShortRange(const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$ShortParser &, const ::java::lang::Short &, const ::java::lang::Short &, jboolean, jboolean);
          static FieldCacheRangeFilter newStringRange(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean);
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(FieldCacheRangeFilter);

        class t_FieldCacheRangeFilter {
        public:
          PyObject_HEAD
          FieldCacheRangeFilter object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldCacheRangeFilter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldCacheRangeFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldCacheRangeFilter&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
