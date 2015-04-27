#ifndef org_apache_lucene_document_DateTools_H
#define org_apache_lucene_document_DateTools_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class DateTools$Resolution;
      }
    }
  }
}
namespace java {
  namespace util {
    class Date;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class DateTools : public ::java::lang::Object {
        public:
          enum {
            mid_dateToString_ca526ca6,
            mid_round_d582ee11,
            mid_round_ebfd1017,
            mid_stringToDate_e1ca31a4,
            mid_stringToTime_5fdc3f54,
            mid_timeToString_3ccc1506,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DateTools(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DateTools(const DateTools& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String dateToString(const ::java::util::Date &, const ::org::apache::lucene::document::DateTools$Resolution &);
          static ::java::util::Date round(const ::java::util::Date &, const ::org::apache::lucene::document::DateTools$Resolution &);
          static jlong round(jlong, const ::org::apache::lucene::document::DateTools$Resolution &);
          static ::java::util::Date stringToDate(const ::java::lang::String &);
          static jlong stringToTime(const ::java::lang::String &);
          static ::java::lang::String timeToString(jlong, const ::org::apache::lucene::document::DateTools$Resolution &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyTypeObject PY_TYPE(DateTools);

        class t_DateTools {
        public:
          PyObject_HEAD
          DateTools object;
          static PyObject *wrap_Object(const DateTools&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
