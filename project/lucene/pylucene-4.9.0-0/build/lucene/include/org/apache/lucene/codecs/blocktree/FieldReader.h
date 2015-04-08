#ifndef org_apache_lucene_codecs_blocktree_FieldReader_H
#define org_apache_lucene_codecs_blocktree_FieldReader_H

#include "org/apache/lucene/index/Terms.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace automaton {
          class CompiledAutomaton;
        }
        class BytesRef;
      }
      namespace index {
        class TermsEnum;
      }
      namespace codecs {
        namespace blocktree {
          class Stats;
        }
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blocktree {

          class FieldReader : public ::org::apache::lucene::index::Terms {
          public:
            enum {
              mid_computeStats_30b35506,
              mid_getComparator_5a7ff2fc,
              mid_getDocCount_54c6a179,
              mid_getMax_4ae19461,
              mid_getMin_4ae19461,
              mid_getSumDocFreq_54c6a17a,
              mid_getSumTotalTermFreq_54c6a17a,
              mid_hasFreqs_54c6a16a,
              mid_hasOffsets_54c6a16a,
              mid_hasPayloads_54c6a16a,
              mid_hasPositions_54c6a16a,
              mid_intersect_b8f2b1bc,
              mid_iterator_d737078b,
              mid_ramBytesUsed_54c6a17a,
              mid_size_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldReader(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FieldReader(const FieldReader& obj) : ::org::apache::lucene::index::Terms(obj) {}

            ::org::apache::lucene::codecs::blocktree::Stats computeStats() const;
            ::java::util::Comparator getComparator() const;
            jint getDocCount() const;
            ::org::apache::lucene::util::BytesRef getMax() const;
            ::org::apache::lucene::util::BytesRef getMin() const;
            jlong getSumDocFreq() const;
            jlong getSumTotalTermFreq() const;
            jboolean hasFreqs() const;
            jboolean hasOffsets() const;
            jboolean hasPayloads() const;
            jboolean hasPositions() const;
            ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::index::TermsEnum iterator(const ::org::apache::lucene::index::TermsEnum &) const;
            jlong ramBytesUsed() const;
            jlong size() const;
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
      namespace codecs {
        namespace blocktree {
          extern PyTypeObject PY_TYPE(FieldReader);

          class t_FieldReader {
          public:
            PyObject_HEAD
            FieldReader object;
            static PyObject *wrap_Object(const FieldReader&);
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
