#ifndef org_apache_lucene_codecs_lucene40_Lucene40LiveDocsFormat_H
#define org_apache_lucene_codecs_lucene40_Lucene40LiveDocsFormat_H

#include "org/apache/lucene/codecs/LiveDocsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class MutableBits;
      }
      namespace index {
        class SegmentCommitInfo;
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
    class String;
  }
  namespace util {
    class Collection;
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

          class Lucene40LiveDocsFormat : public ::org::apache::lucene::codecs::LiveDocsFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_files_cb8dcbcf,
              mid_newLiveDocs_f311e97a,
              mid_newLiveDocs_e3a7ca1a,
              mid_readLiveDocs_60c7b77b,
              mid_writeLiveDocs_37123b35,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene40LiveDocsFormat(jobject obj) : ::org::apache::lucene::codecs::LiveDocsFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene40LiveDocsFormat(const Lucene40LiveDocsFormat& obj) : ::org::apache::lucene::codecs::LiveDocsFormat(obj) {}

            Lucene40LiveDocsFormat();

            void files(const ::org::apache::lucene::index::SegmentCommitInfo &, const ::java::util::Collection &) const;
            ::org::apache::lucene::util::MutableBits newLiveDocs(jint) const;
            ::org::apache::lucene::util::MutableBits newLiveDocs(const ::org::apache::lucene::util::Bits &) const;
            ::org::apache::lucene::util::Bits readLiveDocs(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentCommitInfo &, const ::org::apache::lucene::store::IOContext &) const;
            void writeLiveDocs(const ::org::apache::lucene::util::MutableBits &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentCommitInfo &, jint, const ::org::apache::lucene::store::IOContext &) const;
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
          extern PyTypeObject PY_TYPE(Lucene40LiveDocsFormat);

          class t_Lucene40LiveDocsFormat {
          public:
            PyObject_HEAD
            Lucene40LiveDocsFormat object;
            static PyObject *wrap_Object(const Lucene40LiveDocsFormat&);
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
