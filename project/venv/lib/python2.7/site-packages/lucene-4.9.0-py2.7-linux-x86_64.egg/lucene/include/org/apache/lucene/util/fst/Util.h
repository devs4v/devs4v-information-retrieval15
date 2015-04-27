#ifndef org_apache_lucene_util_fst_Util_H
#define org_apache_lucene_util_fst_Util_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class IntsRef;
        namespace fst {
          class FST$Arc;
          class FST;
          class FST$BytesReader;
          class Util$TopResults;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Long;
    class CharSequence;
  }
  namespace util {
    class Comparator;
  }
  namespace io {
    class Writer;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class Util : public ::java::lang::Object {
          public:
            enum {
              mid_get_4f30bf3f,
              mid_get_6697be43,
              mid_getByOutput_40734dd8,
              mid_getByOutput_6ff1a968,
              mid_readCeilArc_3a8e72bb,
              mid_shortestPaths_7b374667,
              mid_toBytesRef_27bd6535,
              mid_toDot_53893198,
              mid_toIntsRef_9ff62e61,
              mid_toUTF16_2efa4e73,
              mid_toUTF32_2efa4e73,
              mid_toUTF32_78db5d6f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Util(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Util(const Util& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::Object get(const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::IntsRef &);
            static ::java::lang::Object get(const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::util::IntsRef getByOutput(const ::org::apache::lucene::util::fst::FST &, jlong);
            static ::org::apache::lucene::util::IntsRef getByOutput(const ::org::apache::lucene::util::fst::FST &, jlong, const ::org::apache::lucene::util::fst::FST$BytesReader &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::IntsRef &);
            static ::org::apache::lucene::util::fst::FST$Arc readCeilArc(jint, const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &);
            static ::org::apache::lucene::util::fst::Util$TopResults shortestPaths(const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::java::lang::Object &, const ::java::util::Comparator &, jint, jboolean);
            static ::org::apache::lucene::util::BytesRef toBytesRef(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::BytesRef &);
            static void toDot(const ::org::apache::lucene::util::fst::FST &, const ::java::io::Writer &, jboolean, jboolean);
            static ::org::apache::lucene::util::IntsRef toIntsRef(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::IntsRef &);
            static ::org::apache::lucene::util::IntsRef toUTF16(const ::java::lang::CharSequence &, const ::org::apache::lucene::util::IntsRef &);
            static ::org::apache::lucene::util::IntsRef toUTF32(const ::java::lang::CharSequence &, const ::org::apache::lucene::util::IntsRef &);
            static ::org::apache::lucene::util::IntsRef toUTF32(const JArray< jchar > &, jint, jint, const ::org::apache::lucene::util::IntsRef &);
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
          extern PyTypeObject PY_TYPE(Util);

          class t_Util {
          public:
            PyObject_HEAD
            Util object;
            static PyObject *wrap_Object(const Util&);
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
