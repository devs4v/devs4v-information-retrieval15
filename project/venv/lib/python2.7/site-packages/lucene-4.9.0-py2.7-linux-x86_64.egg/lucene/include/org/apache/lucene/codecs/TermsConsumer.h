#ifndef org_apache_lucene_codecs_TermsConsumer_H
#define org_apache_lucene_codecs_TermsConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class MergeState;
        class FieldInfo$IndexOptions;
        class TermsEnum;
      }
      namespace codecs {
        class TermStats;
        class PostingsConsumer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Comparator;
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

        class TermsConsumer : public ::java::lang::Object {
        public:
          enum {
            mid_finish_42663baa,
            mid_finishTerm_e998e763,
            mid_getComparator_5a7ff2fc,
            mid_merge_90e0102b,
            mid_startTerm_0765d42f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermsConsumer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermsConsumer(const TermsConsumer& obj) : ::java::lang::Object(obj) {}

          void finish(jlong, jlong, jint) const;
          void finishTerm(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::codecs::TermStats &) const;
          ::java::util::Comparator getComparator() const;
          void merge(const ::org::apache::lucene::index::MergeState &, const ::org::apache::lucene::index::FieldInfo$IndexOptions &, const ::org::apache::lucene::index::TermsEnum &) const;
          ::org::apache::lucene::codecs::PostingsConsumer startTerm(const ::org::apache::lucene::util::BytesRef &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyTypeObject PY_TYPE(TermsConsumer);

        class t_TermsConsumer {
        public:
          PyObject_HEAD
          TermsConsumer object;
          static PyObject *wrap_Object(const TermsConsumer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
