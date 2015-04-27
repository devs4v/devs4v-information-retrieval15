#ifndef org_apache_lucene_codecs_blocktree_Stats_H
#define org_apache_lucene_codecs_blocktree_Stats_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blocktree {

          class Stats : public ::java::lang::Object {
          public:
            enum {
              mid_toString_14c7b5c5,
              max_mid
            };

            enum {
              fid_blockCountByPrefixLen,
              fid_field,
              fid_floorBlockCount,
              fid_floorSubBlockCount,
              fid_indexArcCount,
              fid_indexNodeCount,
              fid_indexNumBytes,
              fid_mixedBlockCount,
              fid_nonFloorBlockCount,
              fid_segment,
              fid_subBlocksOnlyBlockCount,
              fid_termsOnlyBlockCount,
              fid_totalBlockCount,
              fid_totalBlockOtherBytes,
              fid_totalBlockStatsBytes,
              fid_totalBlockSuffixBytes,
              fid_totalTermBytes,
              fid_totalTermCount,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Stats(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Stats(const Stats& obj) : ::java::lang::Object(obj) {}

            JArray< jint > _get_blockCountByPrefixLen() const;
            void _set_blockCountByPrefixLen(const JArray< jint > &) const;
            ::java::lang::String _get_field() const;
            jint _get_floorBlockCount() const;
            void _set_floorBlockCount(jint) const;
            jint _get_floorSubBlockCount() const;
            void _set_floorSubBlockCount(jint) const;
            jlong _get_indexArcCount() const;
            void _set_indexArcCount(jlong) const;
            jlong _get_indexNodeCount() const;
            void _set_indexNodeCount(jlong) const;
            jlong _get_indexNumBytes() const;
            void _set_indexNumBytes(jlong) const;
            jint _get_mixedBlockCount() const;
            void _set_mixedBlockCount(jint) const;
            jint _get_nonFloorBlockCount() const;
            void _set_nonFloorBlockCount(jint) const;
            ::java::lang::String _get_segment() const;
            jint _get_subBlocksOnlyBlockCount() const;
            void _set_subBlocksOnlyBlockCount(jint) const;
            jint _get_termsOnlyBlockCount() const;
            void _set_termsOnlyBlockCount(jint) const;
            jint _get_totalBlockCount() const;
            void _set_totalBlockCount(jint) const;
            jlong _get_totalBlockOtherBytes() const;
            void _set_totalBlockOtherBytes(jlong) const;
            jlong _get_totalBlockStatsBytes() const;
            void _set_totalBlockStatsBytes(jlong) const;
            jlong _get_totalBlockSuffixBytes() const;
            void _set_totalBlockSuffixBytes(jlong) const;
            jlong _get_totalTermBytes() const;
            void _set_totalTermBytes(jlong) const;
            jlong _get_totalTermCount() const;
            void _set_totalTermCount(jlong) const;

            ::java::lang::String toString() const;
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
          extern PyTypeObject PY_TYPE(Stats);

          class t_Stats {
          public:
            PyObject_HEAD
            Stats object;
            static PyObject *wrap_Object(const Stats&);
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
