#ifndef org_apache_lucene_index_TermContext_H
#define org_apache_lucene_index_TermContext_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReaderContext;
        class Term;
        class TermState;
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
      namespace index {

        class TermContext : public ::java::lang::Object {
        public:
          enum {
            mid_init$_4df5686b,
            mid_init$_5a9a23d9,
            mid_build_9d3a5124,
            mid_clear_54c6a166,
            mid_docFreq_54c6a179,
            mid_get_17d8f64c,
            mid_register_edacd7f4,
            mid_setDocFreq_39c7bd3c,
            mid_totalTermFreq_54c6a17a,
            max_mid
          };

          enum {
            fid_topReaderContext,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermContext(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermContext(const TermContext& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::IndexReaderContext _get_topReaderContext() const;

          TermContext(const ::org::apache::lucene::index::IndexReaderContext &);
          TermContext(const ::org::apache::lucene::index::IndexReaderContext &, const ::org::apache::lucene::index::TermState &, jint, jint, jlong);

          static TermContext build(const ::org::apache::lucene::index::IndexReaderContext &, const ::org::apache::lucene::index::Term &);
          void clear() const;
          jint docFreq() const;
          ::org::apache::lucene::index::TermState get(jint) const;
          void register$(const ::org::apache::lucene::index::TermState &, jint, jint, jlong) const;
          void setDocFreq(jint) const;
          jlong totalTermFreq() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(TermContext);

        class t_TermContext {
        public:
          PyObject_HEAD
          TermContext object;
          static PyObject *wrap_Object(const TermContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
