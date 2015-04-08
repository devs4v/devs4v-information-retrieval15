#ifndef org_apache_lucene_codecs_lucene40_Lucene40TermVectorsReader_H
#define org_apache_lucene_codecs_lucene40_Lucene40TermVectorsReader_H

#include "org/apache/lucene/codecs/TermVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfo;
        class FieldInfos;
        class Fields;
      }
      namespace store {
        class Directory;
        class IOContext;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene40 {

          class Lucene40TermVectorsReader : public ::org::apache::lucene::codecs::TermVectorsReader {
          public:
            enum {
              mid_init$_3589180f,
              mid_checkIntegrity_54c6a166,
              mid_clone_475a2624,
              mid_close_54c6a166,
              mid_get_ef1c9c73,
              mid_ramBytesUsed_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene40TermVectorsReader(jobject obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene40TermVectorsReader(const Lucene40TermVectorsReader& obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {}

            Lucene40TermVectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &);

            void checkIntegrity() const;
            ::org::apache::lucene::codecs::TermVectorsReader clone() const;
            void close() const;
            ::org::apache::lucene::index::Fields get(jint) const;
            jlong ramBytesUsed() const;
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
        namespace lucene40 {
          extern PyTypeObject PY_TYPE(Lucene40TermVectorsReader);

          class t_Lucene40TermVectorsReader {
          public:
            PyObject_HEAD
            Lucene40TermVectorsReader object;
            static PyObject *wrap_Object(const Lucene40TermVectorsReader&);
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
