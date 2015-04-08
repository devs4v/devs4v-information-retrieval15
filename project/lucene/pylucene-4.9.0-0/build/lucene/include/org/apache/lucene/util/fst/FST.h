#ifndef org_apache_lucene_util_fst_FST_H
#define org_apache_lucene_util_fst_FST_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace fst {
          class FST$Arc;
          class FST$INPUT_TYPE;
          class FST$BytesReader;
          class Outputs;
        }
      }
      namespace store {
        class DataInput;
        class DataOutput;
      }
    }
  }
}
namespace java {
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
        namespace fst {

          class FST : public ::java::lang::Object {
          public:
            enum {
              mid_init$_ed0a14d8,
              mid_init$_f8dfeffa,
              mid_findTargetArc_12322441,
              mid_getArcCount_54c6a17a,
              mid_getArcWithOutputCount_54c6a17a,
              mid_getBytesReader_92a3fc65,
              mid_getEmptyOutput_846352c3,
              mid_getFirstArc_8c07e6cb,
              mid_getInputType_ae922153,
              mid_getNodeCount_54c6a17a,
              mid_ramBytesUsed_54c6a17a,
              mid_read_fd85abc1,
              mid_readFirstRealTargetArc_e3f5aada,
              mid_readFirstTargetArc_ec7dd60b,
              mid_readLastTargetArc_ec7dd60b,
              mid_readNextArc_1deb4fc1,
              mid_readNextArcLabel_614f52e1,
              mid_readNextRealArc_1deb4fc1,
              mid_readRootArcs_a2b77668,
              mid_save_c3dacf57,
              mid_save_27875f57,
              mid_targetHasArcs_0c8cc6dc,
              max_mid
            };

            enum {
              fid_arcCount,
              fid_arcWithOutputCount,
              fid_inputType,
              fid_nodeCount,
              fid_outputs,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FST(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FST(const FST& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_MAX_BLOCK_BITS;
            static jint END_LABEL;

            jlong _get_arcCount() const;
            void _set_arcCount(jlong) const;
            jlong _get_arcWithOutputCount() const;
            void _set_arcWithOutputCount(jlong) const;
            ::org::apache::lucene::util::fst::FST$INPUT_TYPE _get_inputType() const;
            jlong _get_nodeCount() const;
            void _set_nodeCount(jlong) const;
            ::org::apache::lucene::util::fst::Outputs _get_outputs() const;

            FST(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::fst::Outputs &);
            FST(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::fst::Outputs &, jint);

            ::org::apache::lucene::util::fst::FST$Arc findTargetArc(jint, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            jlong getArcCount() const;
            jlong getArcWithOutputCount() const;
            ::org::apache::lucene::util::fst::FST$BytesReader getBytesReader() const;
            ::java::lang::Object getEmptyOutput() const;
            ::org::apache::lucene::util::fst::FST$Arc getFirstArc(const ::org::apache::lucene::util::fst::FST$Arc &) const;
            ::org::apache::lucene::util::fst::FST$INPUT_TYPE getInputType() const;
            jlong getNodeCount() const;
            jlong ramBytesUsed() const;
            static FST read(const ::java::io::File &, const ::org::apache::lucene::util::fst::Outputs &);
            ::org::apache::lucene::util::fst::FST$Arc readFirstRealTargetArc(jlong, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$Arc readFirstTargetArc(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$Arc readLastTargetArc(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$Arc readNextArc(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            jint readNextArcLabel(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$Arc readNextRealArc(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            void readRootArcs(const JArray< ::org::apache::lucene::util::fst::FST$Arc > &) const;
            void save(const ::java::io::File &) const;
            void save(const ::org::apache::lucene::store::DataOutput &) const;
            static jboolean targetHasArcs(const ::org::apache::lucene::util::fst::FST$Arc &);
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
      namespace util {
        namespace fst {
          extern PyTypeObject PY_TYPE(FST);

          class t_FST {
          public:
            PyObject_HEAD
            FST object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FST *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FST&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FST&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
