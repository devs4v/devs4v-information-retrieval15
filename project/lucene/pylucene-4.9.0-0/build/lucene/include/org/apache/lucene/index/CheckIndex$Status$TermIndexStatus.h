#ifndef org_apache_lucene_index_CheckIndex$Status$TermIndexStatus_H
#define org_apache_lucene_index_CheckIndex$Status$TermIndexStatus_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blocktree {
          class Stats;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class String;
    class Class;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex$Status$TermIndexStatus : public ::java::lang::Object {
        public:

          enum {
            fid_blockTreeStats,
            fid_delTermCount,
            fid_error,
            fid_termCount,
            fid_totFreq,
            fid_totPos,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$Status$TermIndexStatus(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$Status$TermIndexStatus(const CheckIndex$Status$TermIndexStatus& obj) : ::java::lang::Object(obj) {}

          ::java::util::Map _get_blockTreeStats() const;
          void _set_blockTreeStats(const ::java::util::Map &) const;
          jlong _get_delTermCount() const;
          void _set_delTermCount(jlong) const;
          ::java::lang::Throwable _get_error() const;
          void _set_error(const ::java::lang::Throwable &) const;
          jlong _get_termCount() const;
          void _set_termCount(jlong) const;
          jlong _get_totFreq() const;
          void _set_totFreq(jlong) const;
          jlong _get_totPos() const;
          void _set_totPos(jlong) const;
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
        extern PyTypeObject PY_TYPE(CheckIndex$Status$TermIndexStatus);

        class t_CheckIndex$Status$TermIndexStatus {
        public:
          PyObject_HEAD
          CheckIndex$Status$TermIndexStatus object;
          static PyObject *wrap_Object(const CheckIndex$Status$TermIndexStatus&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
