#ifndef org_apache_lucene_search_FieldCache_H
#define org_apache_lucene_search_FieldCache_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class AtomicReader;
        class SortedSetDocValues;
        class BinaryDocValues;
        class SortedDocValues;
      }
      namespace search {
        class FieldCache$ShortParser;
        class FieldCache$LongParser;
        class FieldCache$IntParser;
        class FieldCache$Doubles;
        class FieldCache$Ints;
        class FieldCache$ByteParser;
        class FieldCache$Bytes;
        class FieldCache$Shorts;
        class FieldCache$Longs;
        class FieldCache$DoubleParser;
        class FieldCache$CacheEntry;
        class FieldCache$Floats;
        class FieldCache$FloatParser;
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
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldCache : public ::java::lang::Object {
        public:
          enum {
            mid_getBytes_5b2430b0,
            mid_getBytes_63e2679a,
            mid_getCacheEntries_2bd7104e,
            mid_getDocTermOrds_1498712e,
            mid_getDocsWithField_b8ffc438,
            mid_getDoubles_1da3b06b,
            mid_getDoubles_081c1232,
            mid_getFloats_d56c7f61,
            mid_getFloats_16f5ff86,
            mid_getInfoStream_00215d9e,
            mid_getInts_09885a02,
            mid_getInts_428a6914,
            mid_getLongs_4d412004,
            mid_getLongs_ef1b546a,
            mid_getShorts_2d8fda45,
            mid_getShorts_cf5b3ec2,
            mid_getTerms_d17729c6,
            mid_getTerms_4f27b8ab,
            mid_getTermsIndex_e27a1341,
            mid_getTermsIndex_774ad832,
            mid_purgeAllCaches_54c6a166,
            mid_purgeByCacheKey_290588ee,
            mid_setInfoStream_1b7c898b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache(const FieldCache& obj) : ::java::lang::Object(obj) {}

          static FieldCache *DEFAULT;
          static ::org::apache::lucene::search::FieldCache$ByteParser *DEFAULT_BYTE_PARSER;
          static ::org::apache::lucene::search::FieldCache$DoubleParser *DEFAULT_DOUBLE_PARSER;
          static ::org::apache::lucene::search::FieldCache$FloatParser *DEFAULT_FLOAT_PARSER;
          static ::org::apache::lucene::search::FieldCache$IntParser *DEFAULT_INT_PARSER;
          static ::org::apache::lucene::search::FieldCache$LongParser *DEFAULT_LONG_PARSER;
          static ::org::apache::lucene::search::FieldCache$ShortParser *DEFAULT_SHORT_PARSER;
          static ::org::apache::lucene::search::FieldCache$DoubleParser *NUMERIC_UTILS_DOUBLE_PARSER;
          static ::org::apache::lucene::search::FieldCache$FloatParser *NUMERIC_UTILS_FLOAT_PARSER;
          static ::org::apache::lucene::search::FieldCache$IntParser *NUMERIC_UTILS_INT_PARSER;
          static ::org::apache::lucene::search::FieldCache$LongParser *NUMERIC_UTILS_LONG_PARSER;

          ::org::apache::lucene::search::FieldCache$Bytes getBytes(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, jboolean) const;
          ::org::apache::lucene::search::FieldCache$Bytes getBytes(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$ByteParser &, jboolean) const;
          JArray< ::org::apache::lucene::search::FieldCache$CacheEntry > getCacheEntries() const;
          ::org::apache::lucene::index::SortedSetDocValues getDocTermOrds(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &) const;
          ::org::apache::lucene::util::Bits getDocsWithField(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &) const;
          ::org::apache::lucene::search::FieldCache$Doubles getDoubles(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, jboolean) const;
          ::org::apache::lucene::search::FieldCache$Doubles getDoubles(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$DoubleParser &, jboolean) const;
          ::org::apache::lucene::search::FieldCache$Floats getFloats(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, jboolean) const;
          ::org::apache::lucene::search::FieldCache$Floats getFloats(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$FloatParser &, jboolean) const;
          ::java::io::PrintStream getInfoStream() const;
          ::org::apache::lucene::search::FieldCache$Ints getInts(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, jboolean) const;
          ::org::apache::lucene::search::FieldCache$Ints getInts(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$IntParser &, jboolean) const;
          ::org::apache::lucene::search::FieldCache$Longs getLongs(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, jboolean) const;
          ::org::apache::lucene::search::FieldCache$Longs getLongs(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$LongParser &, jboolean) const;
          ::org::apache::lucene::search::FieldCache$Shorts getShorts(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, jboolean) const;
          ::org::apache::lucene::search::FieldCache$Shorts getShorts(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$ShortParser &, jboolean) const;
          ::org::apache::lucene::index::BinaryDocValues getTerms(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, jboolean) const;
          ::org::apache::lucene::index::BinaryDocValues getTerms(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, jboolean, jfloat) const;
          ::org::apache::lucene::index::SortedDocValues getTermsIndex(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedDocValues getTermsIndex(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &, jfloat) const;
          void purgeAllCaches() const;
          void purgeByCacheKey(const ::java::lang::Object &) const;
          void setInfoStream(const ::java::io::PrintStream &) const;
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
        extern PyTypeObject PY_TYPE(FieldCache);

        class t_FieldCache {
        public:
          PyObject_HEAD
          FieldCache object;
          static PyObject *wrap_Object(const FieldCache&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
