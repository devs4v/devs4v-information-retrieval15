#ifndef org_apache_lucene_document_Field_H
#define org_apache_lucene_document_Field_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class IndexableField;
      }
      namespace document {
        class Field$Store;
        class Field$TermVector;
        class FieldType;
        class Field$Index;
      }
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Number;
    class String;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class Field : public ::java::lang::Object {
        public:
          enum {
            mid_init$_7d0c5392,
            mid_init$_23e5278e,
            mid_init$_97e62b21,
            mid_init$_65c4643a,
            mid_init$_36a37f8e,
            mid_init$_4a37b91f,
            mid_init$_3af3ec14,
            mid_init$_406439e8,
            mid_init$_7ccdd79c,
            mid_init$_9c27c9b4,
            mid_init$_5c377d43,
            mid_init$_eab5cd19,
            mid_init$_596be1b9,
            mid_init$_b94bfb2f,
            mid_binaryValue_4ae19461,
            mid_boost_54c6a176,
            mid_fieldType_a2615189,
            mid_name_14c7b5c5,
            mid_numericValue_ee47e3e1,
            mid_readerValue_b6f16bdd,
            mid_setBoost_06298cab,
            mid_setByteValue_b2271687,
            mid_setBytesValue_49b4f12b,
            mid_setBytesValue_7bc03dc4,
            mid_setDoubleValue_5d1c7645,
            mid_setFloatValue_06298cab,
            mid_setIntValue_39c7bd3c,
            mid_setLongValue_0ee6df2f,
            mid_setReaderValue_cf2e3c10,
            mid_setShortValue_3bc40c6a,
            mid_setStringValue_5fdc3f48,
            mid_setTokenStream_c7c794dc,
            mid_stringValue_14c7b5c5,
            mid_toString_14c7b5c5,
            mid_tokenStream_cea65119,
            mid_tokenStreamValue_71f550c9,
            mid_translateFieldType_2095598c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Field(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Field(const Field& obj) : ::java::lang::Object(obj) {}

          Field(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &);
          Field(const ::java::lang::String &, const ::java::io::Reader &);
          Field(const ::java::lang::String &, const JArray< jbyte > &);
          Field(const ::java::lang::String &, const ::java::io::Reader &, const ::org::apache::lucene::document::Field$TermVector &);
          Field(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::document::Field$TermVector &);
          Field(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::document::FieldType &);
          Field(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::document::FieldType &);
          Field(const ::java::lang::String &, const ::java::io::Reader &, const ::org::apache::lucene::document::FieldType &);
          Field(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::document::FieldType &);
          Field(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::document::FieldType &);
          Field(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::document::Field$Store &, const ::org::apache::lucene::document::Field$Index &);
          Field(const ::java::lang::String &, const JArray< jbyte > &, jint, jint);
          Field(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::document::Field$Store &, const ::org::apache::lucene::document::Field$Index &, const ::org::apache::lucene::document::Field$TermVector &);
          Field(const ::java::lang::String &, const JArray< jbyte > &, jint, jint, const ::org::apache::lucene::document::FieldType &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          jfloat boost() const;
          ::org::apache::lucene::document::FieldType fieldType() const;
          ::java::lang::String name() const;
          ::java::lang::Number numericValue() const;
          ::java::io::Reader readerValue() const;
          void setBoost(jfloat) const;
          void setByteValue(jbyte) const;
          void setBytesValue(const JArray< jbyte > &) const;
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setDoubleValue(jdouble) const;
          void setFloatValue(jfloat) const;
          void setIntValue(jint) const;
          void setLongValue(jlong) const;
          void setReaderValue(const ::java::io::Reader &) const;
          void setShortValue(jshort) const;
          void setStringValue(const ::java::lang::String &) const;
          void setTokenStream(const ::org::apache::lucene::analysis::TokenStream &) const;
          ::java::lang::String stringValue() const;
          ::java::lang::String toString() const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::TokenStream &) const;
          ::org::apache::lucene::analysis::TokenStream tokenStreamValue() const;
          static ::org::apache::lucene::document::FieldType translateFieldType(const ::org::apache::lucene::document::Field$Store &, const ::org::apache::lucene::document::Field$Index &, const ::org::apache::lucene::document::Field$TermVector &);
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
        extern PyTypeObject PY_TYPE(Field);

        class t_Field {
        public:
          PyObject_HEAD
          Field object;
          static PyObject *wrap_Object(const Field&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
