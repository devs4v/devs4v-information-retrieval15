#ifndef org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList$WeightedPhraseInfo$Toffs;
          class FieldTermStack$TermInfo;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
  namespace util {
    class List;
    class LinkedList;
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldPhraseList$WeightedPhraseInfo : public ::java::lang::Object {
          public:
            enum {
              mid_init$_9bfb370d,
              mid_init$_0ffd9fa1,
              mid_init$_d318fc21,
              mid_compareTo_3f58e096,
              mid_equals_290588e2,
              mid_getBoost_54c6a176,
              mid_getEndOffset_54c6a179,
              mid_getSeqnum_54c6a179,
              mid_getStartOffset_54c6a179,
              mid_getTermsInfos_87851566,
              mid_getTermsOffsets_87851566,
              mid_getText_14c7b5c5,
              mid_hashCode_54c6a179,
              mid_isOffsetOverlap_3f58e085,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldPhraseList$WeightedPhraseInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FieldPhraseList$WeightedPhraseInfo(const FieldPhraseList$WeightedPhraseInfo& obj) : ::java::lang::Object(obj) {}

            FieldPhraseList$WeightedPhraseInfo(const ::java::util::Collection &);
            FieldPhraseList$WeightedPhraseInfo(const ::java::util::LinkedList &, jfloat);
            FieldPhraseList$WeightedPhraseInfo(const ::java::util::LinkedList &, jfloat, jint);

            jint compareTo(const FieldPhraseList$WeightedPhraseInfo &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jfloat getBoost() const;
            jint getEndOffset() const;
            jint getSeqnum() const;
            jint getStartOffset() const;
            ::java::util::List getTermsInfos() const;
            ::java::util::List getTermsOffsets() const;
            ::java::lang::String getText() const;
            jint hashCode() const;
            jboolean isOffsetOverlap(const FieldPhraseList$WeightedPhraseInfo &) const;
            ::java::lang::String toString() const;
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
      namespace search {
        namespace vectorhighlight {
          extern PyTypeObject PY_TYPE(FieldPhraseList$WeightedPhraseInfo);

          class t_FieldPhraseList$WeightedPhraseInfo {
          public:
            PyObject_HEAD
            FieldPhraseList$WeightedPhraseInfo object;
            static PyObject *wrap_Object(const FieldPhraseList$WeightedPhraseInfo&);
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
