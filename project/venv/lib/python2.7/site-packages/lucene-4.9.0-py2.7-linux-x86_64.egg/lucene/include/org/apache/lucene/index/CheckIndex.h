#ifndef org_apache_lucene_index_CheckIndex_H
#define org_apache_lucene_index_CheckIndex_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class CheckIndex$Status$DocValuesStatus;
        class CheckIndex$Status;
        class CheckIndex$Status$TermVectorStatus;
        class CheckIndex$Status$TermIndexStatus;
        class CheckIndex$Status$FieldNormStatus;
        class CheckIndex$Status$StoredFieldStatus;
        class AtomicReader;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class InterruptedException;
    class String;
  }
  namespace util {
    class List;
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
      namespace index {

        class CheckIndex : public ::java::lang::Object {
        public:
          enum {
            mid_init$_2e261ef2,
            mid_checkIndex_91a82b33,
            mid_checkIndex_a75717b2,
            mid_fixIndex_a89756fe,
            mid_getCrossCheckTermVectors_54c6a16a,
            mid_main_4dd4540c,
            mid_setCrossCheckTermVectors_bb0c767f,
            mid_setInfoStream_1b7c898b,
            mid_setInfoStream_ee355e40,
            mid_testDocValues_11f384a5,
            mid_testFieldNorms_3488ebf7,
            mid_testPostings_2a988783,
            mid_testPostings_9363927a,
            mid_testStoredFields_1ec0767a,
            mid_testTermVectors_f049a3c1,
            mid_testTermVectors_438dd273,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CheckIndex(const CheckIndex& obj) : ::java::lang::Object(obj) {}

          CheckIndex(const ::org::apache::lucene::store::Directory &);

          ::org::apache::lucene::index::CheckIndex$Status checkIndex() const;
          ::org::apache::lucene::index::CheckIndex$Status checkIndex(const ::java::util::List &) const;
          void fixIndex(const ::org::apache::lucene::index::CheckIndex$Status &) const;
          jboolean getCrossCheckTermVectors() const;
          static void main(const JArray< ::java::lang::String > &);
          void setCrossCheckTermVectors(jboolean) const;
          void setInfoStream(const ::java::io::PrintStream &) const;
          void setInfoStream(const ::java::io::PrintStream &, jboolean) const;
          static ::org::apache::lucene::index::CheckIndex$Status$DocValuesStatus testDocValues(const ::org::apache::lucene::index::AtomicReader &, const ::java::io::PrintStream &);
          static ::org::apache::lucene::index::CheckIndex$Status$FieldNormStatus testFieldNorms(const ::org::apache::lucene::index::AtomicReader &, const ::java::io::PrintStream &);
          static ::org::apache::lucene::index::CheckIndex$Status$TermIndexStatus testPostings(const ::org::apache::lucene::index::AtomicReader &, const ::java::io::PrintStream &);
          static ::org::apache::lucene::index::CheckIndex$Status$TermIndexStatus testPostings(const ::org::apache::lucene::index::AtomicReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$StoredFieldStatus testStoredFields(const ::org::apache::lucene::index::AtomicReader &, const ::java::io::PrintStream &);
          static ::org::apache::lucene::index::CheckIndex$Status$TermVectorStatus testTermVectors(const ::org::apache::lucene::index::AtomicReader &, const ::java::io::PrintStream &);
          static ::org::apache::lucene::index::CheckIndex$Status$TermVectorStatus testTermVectors(const ::org::apache::lucene::index::AtomicReader &, const ::java::io::PrintStream &, jboolean, jboolean);
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
        extern PyTypeObject PY_TYPE(CheckIndex);

        class t_CheckIndex {
        public:
          PyObject_HEAD
          CheckIndex object;
          static PyObject *wrap_Object(const CheckIndex&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
