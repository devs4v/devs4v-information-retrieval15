#ifndef org_apache_lucene_search_SortField_H
#define org_apache_lucene_search_SortField_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class IndexSearcher;
        class SortField$Type;
        class FieldCache$Parser;
        class FieldComparatorSource;
        class FieldComparator;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class String;
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
      namespace search {

        class SortField : public ::java::lang::Object {
        public:
          enum {
            mid_init$_a9ca3e5c,
            mid_init$_b65c884e,
            mid_init$_37ee6f9c,
            mid_init$_3e864231,
            mid_init$_082cc791,
            mid_init$_28dc1d67,
            mid_equals_290588e2,
            mid_getBytesComparator_5a7ff2fc,
            mid_getComparator_f38637f4,
            mid_getComparatorSource_3ca10de3,
            mid_getField_14c7b5c5,
            mid_getParser_6ee4ab67,
            mid_getReverse_54c6a16a,
            mid_getType_e5057cd5,
            mid_hashCode_54c6a179,
            mid_needsScores_54c6a16a,
            mid_rewrite_da4dd7ac,
            mid_setBytesComparator_6ffdd545,
            mid_setMissingValue_290588ee,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_missingValue,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SortField(const SortField& obj) : ::java::lang::Object(obj) {}

          static SortField *FIELD_DOC;
          static SortField *FIELD_SCORE;
          static ::java::lang::Object *STRING_FIRST;
          static ::java::lang::Object *STRING_LAST;

          ::java::lang::Object _get_missingValue() const;
          void _set_missingValue(const ::java::lang::Object &) const;

          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::FieldComparatorSource &);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$Parser &);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::FieldComparatorSource &, jboolean);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$Parser &, jboolean);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Comparator getBytesComparator() const;
          ::org::apache::lucene::search::FieldComparator getComparator(jint, jint) const;
          ::org::apache::lucene::search::FieldComparatorSource getComparatorSource() const;
          ::java::lang::String getField() const;
          ::org::apache::lucene::search::FieldCache$Parser getParser() const;
          jboolean getReverse() const;
          ::org::apache::lucene::search::SortField$Type getType() const;
          jint hashCode() const;
          jboolean needsScores() const;
          SortField rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          void setBytesComparator(const ::java::util::Comparator &) const;
          void setMissingValue(const ::java::lang::Object &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(SortField);

        class t_SortField {
        public:
          PyObject_HEAD
          SortField object;
          static PyObject *wrap_Object(const SortField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
